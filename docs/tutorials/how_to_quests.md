# How to Define and Update Quests

Quest definitions live in `data/quests.ini`. Do not edit
`include/constants/quests.h` or `src/quest_data.inc` directly: `make` generates
both files from the INI file.

## Quest definition format

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

`title` is the name displayed in the quest menu. `category` must be `primary`
or `secondary`. `state_var` is the persistent event variable that stores the
quest's current stage. `stages` defines both the available stages and their
order.

Each stage requires `location`, `detail`, and `objective_type`.

| Objective type | Behaviour | Additional field |
| --- | --- | --- |
| `none` | The stage remains active until a script changes it. | None |
| `caught_species` | Advances automatically when the player has caught enough distinct regional Pokédex species. | A positive `target` |

For a `caught_species` stage, `{progress}` and `{target}` in `detail` display
the current count and target:

```ini
[quest.TUTOR_CATCH.stage.CATCH_15]
location = ROUTE 1
detail = Pokémon caught: {progress}/{target}
objective_type = caught_species
target = 15
```

## Adding a new quest

1. Reserve an unused persistent variable in `include/constants/vars.h`:

   ```c
   #define VAR_QUEST_FIND_LOST_RING_STATE  0x40FD
   ```

2. Add the quest and all of its stage sections to `data/quests.ini`, as shown
   above.

3. Run `make`. The quest generator validates the INI and creates:
   - `include/constants/quests.h`, containing IDs such as
     `QUEST_FIND_LOST_RING` and `QUEST_FIND_LOST_RING_STAGE_SEARCH_GARDEN`.
   - `src/quest_data.inc`, containing the ROM data used by the quest menu.

4. Start and progress the quest from the relevant PoryScript events.

Set `FLAG_SYS_QUESTS_ENABLED` once before the player needs access to the
**QUESTS** Start-menu action:

```poryscript
setflag(FLAG_SYS_QUESTS_ENABLED)
```

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

### Set a specific stage

`Quest_SetStage` needs the quest ID in `VAR_0x8004` and the target stage ID in
`VAR_0x8005`.

```poryscript
setvar(VAR_0x8004, QUEST_A_NEW_CHALLENGE)
setvar(VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_TALK_TO_LARCH)
special(Quest_SetStage)
```

Use this after the dialogue, item handoff, battle, or other game event that
fulfils the current objective.

### Complete a quest

`Quest_Complete` marks a quest complete. It needs only the quest ID in
`VAR_0x8004`.

```poryscript
setvar(VAR_0x8004, QUEST_FIND_LOST_RING)
special(Quest_Complete)
```

## Extending an existing quest

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
