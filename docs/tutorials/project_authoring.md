# Project Authoring Guide

This is the working guide for creating overworld content in Project CWT. Update it as project conventions become established.

## Before You Start

Build once before editing so compiler errors later are easier to identify:

```console
make -j"$(nproc)"
```

Open the project with Porymap from the repository root:

```console
porymap .
```

Porymap saves map data to `data/maps/` and layout data to `data/layouts/`. Do not edit generated `events.inc`, `header.inc`, or `connections.inc` files by hand; edit the map in Porymap or its `map.json` instead.

## Creating a New Map

1. In Porymap, create a new map and give it a descriptive PascalCase name, such as `TestCave_1F`. Porymap creates its `MAP_TEST_CAVE_1F` identifier and the `data/maps/TestCave_1F/` directory.
2. Choose the map type, music, weather, region, and region-map section. Use `MAPSEC_NONE` for interiors or maps that should not appear on the region map.
3. Choose a primary and secondary tileset. Start from a similar existing map when unsure; for example, use an existing town for an outdoor town or a house interior for an indoor room.
4. Set the dimensions, paint the layout, and confirm collision and elevation values with the tileset editor.
5. Add a warp on every doorway or transition tile. Create the matching destination warp in the destination map, then select its warp ID as the source warp's destination.
6. For an overworld map, add map connections where its edges meet adjacent maps. The connection direction and offset must agree with the adjoining map.
7. Save in Porymap. It updates the map and layout metadata that the build uses.
8. Run `make -j"$(nproc)"`, start a new save or warp to the map during testing, and check every edge, warp, and event.

The game's custom starting map is `StarterTown` (`MAP_STARTER_TOWN`) in map group 25.

## Map Events

Use Porymap's Events tab for the following event types:

| Type | Use |
| --- | --- |
| Object event | NPC, item ball, or other visible entity. Assign a sprite, position, movement, script, and optional hide flag. |
| Warp event | Door, cave entrance, stairs, or map transition. Points to a map and its destination warp ID. |
| Coord event | Runs a script when the player steps on a tile and its variable condition matches. Use a dedicated progress variable to prevent it from repeating. |
| BG event | Sign, bookshelf, hidden item, or other interaction attached to a tile. |

For story events, use a named `VAR_*` variable to track progress and a named `FLAG_*` flag to show or hide one-time objects. Add new constants only when an appropriate existing variable or flag does not exist.

## Adding Map Scripts and Dialogue

Each map's scripts are in `data/maps/<MapName>/scripts.inc`. Use the map-name prefix for labels so they remain unique.

An NPC script follows this basic pattern:

```asm
TestCave_1F_EventScript_Guide::
    lock
    faceplayer
    msgbox TestCave_1F_Text_Guide, MSGBOX_DEFAULT
    release
    end

TestCave_1F_Text_Guide:
    .string "Stay on the marked path.$"
```

Assign `TestCave_1F_EventScript_Guide` to the NPC's Script field in Porymap. Use `lockall` rather than `lock` for a scene that must prevent all nearby NPC movement. Every locked script must reach `release` or `releaseall` before `end`.

Dialogue strings use `.string` and end with `$`. Use `\n` for a manual line break. Check `charmap.txt` and existing map scripts before adding special text controls or new characters.

## Triggers and One-Time Events

1. Create a coordinate event in Porymap and assign its script label.
2. Gate it with a progression variable and value, such as `VAR_TEST_CAVE_STATE` equal to `0`.
3. In the trigger script, perform the scene, then advance the variable before ending.

```asm
TestCave_1F_EventScript_EntranceTrigger::
    lockall
    msgbox TestCave_1F_Text_Entrance, MSGBOX_DEFAULT
    setvar VAR_TEST_CAVE_STATE, 1
    releaseall
    end
```

This prevents the trigger from running again after the player leaves and returns. For an NPC that should disappear permanently, set its hide flag in the script after its final interaction.

## Poryscript

Porymap is configured to support Poryscript (`use_poryscript=1`), but the map scripts currently checked into this project are traditional assembly-style `.inc` files. Keep using the existing `.inc` style unless the build rules for the project are updated to compile Poryscript source files.

When Poryscript is adopted, document its source-file location, compilation rule, and the project's preferred formatting here. Do not mix generated Poryscript output with hand-written scripts in the same file.

## Review Checklist

- The map opens in Porymap without warnings.
- All doorways have two valid, tested warp endpoints.
- Connections line up and have correct offsets.
- NPCs, signs, coordinate events, and hidden items have the intended scripts.
- Progress variables and hide flags leave the map in the intended state after reload.
- `make -j"$(nproc)"` succeeds and the new content works in-game.
