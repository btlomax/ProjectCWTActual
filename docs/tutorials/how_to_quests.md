# Quest Authoring Reference

Quest definitions live in `data/quests.ini`. Do not edit
`include/constants/quests.h` or `src/quest_data.inc` directly: `make` generates
both files from the INI file.

## How quests work

Each quest has a persistent stage variable and an ordered list of stages. A
quest is:

- **inactive** before its first stage;
- **active** from its first stage until its complete stage; and
- **complete** after `Quest_Complete` is called or its final count-based stage
  advances.

The quest menu shows only active quests. Its **QUESTS** Start-menu action also
requires `FLAG_SYS_QUESTS_ENABLED`:

```poryscript
setflag(FLAG_SYS_QUESTS_ENABLED)
```

The normal authoring flow is:

1. Reserve persistent variables.
2. Define the quest and stages in `data/quests.ini`.
3. Run `make` to generate constants and catalog data.
4. Start and progress the quest from map Poryscripts.

## Defining a quest

A quest has one `[quest.<ID>]` section and one section for every stage listed in
`stages`. Quest IDs and stage IDs must use uppercase letters, numbers, and
underscores.

```ini
[quest.FIND_LOST_RING]
title = Find the Lost Ring
category = secondary
state_var = VAR_QUEST_FIND_LOST_RING_STATE
stages = SEARCH_GARDEN, RETURN_TO_OWNER

[quest.FIND_LOST_RING.stage.SEARCH_GARDEN]
location = ALDERBROOK TOWN
detail = Search the garden for the lost ring
objective_type = none

[quest.FIND_LOST_RING.stage.RETURN_TO_OWNER]
location = ALDERBROOK TOWN
detail = Return the ring to its owner
objective_type = none
```

| Quest field | Required | Description |
| --- | --- | --- |
| `title` | Yes | The name displayed in the quest menu. |
| `category` | Yes | `primary` or `secondary`. |
| `state_var` | Yes | An unused persistent `VAR_QUEST_*` variable that stores the current stage. |
| `progress_var` | For `defeated_trainers` | An unused persistent variable that stores a count-based objective's progress. |
| `stages` | Yes | Comma-separated stage IDs, in the order they occur. |

Every listed stage must have its own section and these fields:

| Stage field | Required | Description |
| --- | --- | --- |
| `location` | Yes | The location text displayed in the quest menu. |
| `detail` | Yes | The objective text displayed in the quest menu. |
| `objective_type` | Yes | The objective behavior described below. |
| `target` | Count objectives | A positive integer from 1 through 65535. |

`detail` may contain `{progress}` and `{target}` for a count-based objective.
The generator converts them to the quest menu's string placeholders.

| Objective type | Behaviour | Additional field |
| --- | --- | --- |
| `none` | The stage remains active until a script changes it. | None |
| `caught_species` | Advances automatically when the player has caught enough distinct regional Pokédex species. | A positive `target` |
| `defeated_trainers` | Advances when `Quest_IncrementTrainerDefeats` reaches the target. | A positive `target` and a quest `progress_var` |

### `caught_species`

This objective counts distinct species marked caught in the regional Pokédex.
It is checked whenever a Pokémon is caught and whenever quests are refreshed.

```ini
[quest.TUTOR_CATCH.stage.CATCH_15]
location = ROUTE 1
detail = Pokémon caught: {progress}/{target}
objective_type = caught_species
target = 15
```

### `defeated_trainers`

This objective stores progress in the quest's `progress_var`. The variable is
reset to zero when `Quest_Add` starts the quest. Call
`Quest_IncrementTrainerDefeats` after each qualifying battle; the special
increments only if that quest is active and currently on a
`defeated_trainers` stage. Repeated calls cannot increase progress past the
stage's target.

```ini
[quest.DEFEAT_TRAINERS]
title = Defeat Trainers
category = secondary
state_var = VAR_QUEST_DEFEAT_TRAINERS_STATE
progress_var = VAR_QUEST_DEFEAT_TRAINERS_PROGRESS
stages = DEFEAT_THREE

[quest.DEFEAT_TRAINERS.stage.DEFEAT_THREE]
location = ROUTE 1
detail = Trainers defeated: {progress}/{target}
objective_type = defeated_trainers
target = 3
```

## Adding a quest

1. Reserve an unused persistent variable in `include/constants/vars.h`. Use a
   separate counter variable if the quest has a `defeated_trainers` objective:

   ```c
   #define VAR_QUEST_FIND_LOST_RING_STATE     0x40FD
   #define VAR_QUEST_FIND_LOST_RING_PROGRESS  0x40FE
   ```

2. Add the quest and all of its stage sections to `data/quests.ini`. Stage IDs
   must appear exactly once in `stages`, and every stage in `stages` must have a
   matching section.

3. Run `make`. The quest generator validates the INI and creates:
   - `include/constants/quests.h`, containing IDs such as
     `QUEST_FIND_LOST_RING` and `QUEST_FIND_LOST_RING_STAGE_SEARCH_GARDEN`.
   - `src/quest_data.inc`, containing the ROM data used by the quest menu.

4. Start and progress the quest from the relevant PoryScript events.

## Using quests in PoryScript

The quest specials use the temporary script variables `VAR_0x8004` and
`VAR_0x8005` as arguments. They are not the saved quest state; the `state_var`
from `quests.ini` stores that state persistently.

### Start a quest

`Quest_Add` starts a quest at its first listed stage. It needs the quest ID in
`VAR_0x8004`.

```poryscript
setvar(VAR_0x8004, QUEST_FIND_LOST_RING)
special(Quest_Add)
```

`Quest_Add` is safe to call again: it leaves an already-started quest at its
current stage and does not reset its counter.

### Set a specific stage

`Quest_SetStage` needs the quest ID in `VAR_0x8004` and the target stage ID in
`VAR_0x8005`.

```poryscript
setvar(VAR_0x8004, QUEST_A_NEW_CHALLENGE)
setvar(VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_TALK_TO_LARCH)
special(Quest_SetStage)
```

Use it after the dialogue, item handoff, battle, or other event that fulfills a
`none` objective. It accepts only stage IDs belonging to that quest; the result
is written to `VAR_RESULT`.

### Complete a quest

`Quest_Complete` marks a quest complete. It needs only the quest ID in
`VAR_0x8004`.

```poryscript
setvar(VAR_0x8004, QUEST_FIND_LOST_RING)
special(Quest_Complete)
```

### Record a trainer defeat

`Quest_IncrementTrainerDefeats` increments the current `defeated_trainers`
stage for the quest ID in `VAR_0x8004`. It ignores invalid, inactive, or
non-trainer-defeat stages and reports success in `VAR_RESULT`. Place it in the
post-battle branch that runs only after a victory:

```poryscript
trainerbattle_single(TRAINER_EXAMPLE, Example_PreBattle, Example_Defeated, Example_Beaten)

script Example_Beaten {
    // Other post-battle state changes.
    setvar(VAR_0x8004, QUEST_DEFEAT_TRAINERS)
    special(Quest_IncrementTrainerDefeats)
    end
}
```

The standalone call is:

```poryscript
setvar(VAR_0x8004, QUEST_DEFEAT_TRAINERS)
special(Quest_IncrementTrainerDefeats)
```

## Adding an objective type

An objective type has three responsibilities:

1. **Parse it.** Add its INI name and generated C enum name to
   `OBJECTIVE_TYPES` in `tools/generate_quests.py`. Validate any required
   fields there, such as a positive target or a `progress_var`.
2. **Implement it.** Add the enum value to `enum QuestObjectiveType` in
   `src/quest.c`. Update `Quest_RefreshStages` to advance completed stages and
   `Quest_GetProgress` to return the value shown for `{progress}`.
3. **Expose updates, if needed.** For objectives updated by scripts, add a
   `Quest_*` special in `src/quest.c`, declare it in `include/quest.h`, and
   register it in `data/specials.inc`. The special should validate the quest,
   active stage, and objective type before changing persistent state.

If the type needs saved progress, add a quest-level field such as
`progress_var` rather than storing it only in RAM. Reset that variable in
`Quest_Add`, and ensure the special cannot count beyond the current target.
Document the new type in this file and in the `data/quests.ini` header.

Run `make` after changing the generator or quest definitions. It regenerates
the catalog and compiles the Poryscript specials, which catches invalid
objective names and unavailable special registrations.

## Changing existing quests

1. Append the new stage ID to that quest's `stages` list in `data/quests.ini`.

   ```ini
   stages = CATCH_15, RETURN_15, CATCH_35, RETURN_35, FINAL_REWARD
   ```

2. Add the matching stage section:

   ```ini
   [quest.TUTOR_CATCH.stage.FINAL_REWARD]
   location = Pokémon Tutor
   detail = Return to the Tutor for your final reward
   objective_type = none
   ```

3. Run `make` to generate the new stage constant.

4. Update the preceding event script to use `Quest_SetStage` with the new
   constant, then call `Quest_Complete` only after the new final stage has
   finished.

Do not insert stages between existing stages after players may have created
saves: stage values are numeric, so insertion renumbers later stages. Appending
a stage also changes the old `COMPLETE` value, which can reopen a completed
quest in an existing save. Extend released quests only with an explicit save
migration or a separate follow-up quest.

Do not rename, remove, or reorder existing stage IDs after release without a
save migration. Do not repurpose a `state_var` or `progress_var` that existing
saves already use.

## Troubleshooting

| Symptom | Likely cause |
| --- | --- |
| The quest is absent from the menu. | It was not started with `Quest_Add`, it is complete, or `FLAG_SYS_QUESTS_ENABLED` is unset. |
| The stage does not advance. | A `none` stage needs `Quest_SetStage`; a count objective needs its target reached and its update hook called. |
| `{progress}` or `{target}` displays literally. | The stage has no positive `target`, so the quest menu treats it as non-count-based. |
| The build rejects a quest definition. | Check identifier casing, duplicate or missing stages, supported `objective_type` values, and required fields. |
| A trainer defeat is not counted. | Confirm the post-victory script calls `Quest_IncrementTrainerDefeats` with the correct quest ID while its trainer-defeat stage is active. |
