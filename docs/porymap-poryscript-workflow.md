# Porymap and Poryscript Workflow

Use one source of truth for each type of map change. Do not manually edit
generated files.

| Change | Edit with | Do not edit |
| --- | --- | --- |
| NPCs, item balls, warps, coordinate events, BG events, map properties, connections, and layout tiles | Porymap | Generated map include files |
| Script logic, dialogue, movement data, camera commands | `data/maps/<MapName>/scripts.pory` | `scripts.inc` |
| Custom `FLAG_*` definitions | `include/constants/flags.h` | Generated map files |
| Custom `VAR_*` definitions | `include/constants/vars.h` | Generated map files |
| Script label assigned to an object or event | Set the label in Porymap and define it in `scripts.pory` | - |

## Files Porymap Owns

Porymap saves map source data such as:

- `data/maps/<MapName>/map.json`
- Layout block data and border data
- Layout definitions when creating or changing layouts

Use its Events tab to configure object events, warps, coordinate events, and
BG events. Set an NPC's graphics, position, elevation, movement type, local ID,
hide flag, and script label there.

## Files Poryscript Owns

Write map behavior in:

```text
data/maps/<MapName>/scripts.pory
```

This includes:

- `script` blocks
- `movement` blocks
- dialogue
- `mapscripts`
- `applymovement`, `waitmovement`, flags, variables, and camera specials

Poryscript compiles this source into `scripts.inc`. Never manually edit
`scripts.inc`; `make` overwrites it.

## Generated Files

Do not manually edit these generated outputs:

- `data/maps/<MapName>/scripts.inc`
- `data/maps/<MapName>/events.inc`
- `data/maps/<MapName>/header.inc`
- `data/maps/<MapName>/connections.inc`
- Generated map and layout tables in `data/maps/`, `data/layouts/`, and
  `include/constants/`

`make` regenerates `scripts.inc` from `scripts.pory`. Map JSON tooling
regenerates the map event, header, and connection include files from
`map.json`.

## Local IDs and Script Labels

Porymap controls each object's local ID. Poryscript must use the exact same
ID when addressing that object.

For example, if Porymap assigns an NPC local ID of `2`, define and use it in
Poryscript consistently:

```pory
const LOCALID_BRIDGE_NPC = 2

script Route1_EventScript {
    applymovement(LOCALID_BRIDGE_NPC, Route1_Movement_NPCWalk)
    waitmovement(LOCALID_BRIDGE_NPC)
}
```

If Porymap changes the local ID, update the matching Poryscript constant.
Likewise, an event's Script field in Porymap must exactly match the script
label defined in `scripts.pory`.

## Flags and Variables

Define new named flags and variables in:

```text
include/constants/flags.h
include/constants/vars.h
```

Then reference those names from both Porymap and Poryscript. Use a named
progress variable to gate one-time coordinate events and a named hide flag for
objects that should disappear permanently.

## Safe Editing Sequence

1. Make and save map, event, or layout changes in Porymap.
2. Edit only the map's `scripts.pory` for script behavior.
3. Run `make`.
4. Review `git diff` before testing.

Do not keep Porymap and a text editor open on the same `map.json` at the same
time. Do not manually repair generated `.inc` files; fix their source file and
run `make` again.

## Locking Cutscenes

Use `lock` with `release`, or `lockall` with `releaseall`.

`lockall` stops autonomous overworld behavior but does not prevent scripted
movement. NPCs can still move through `applymovement`.
