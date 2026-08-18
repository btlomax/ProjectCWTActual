# Project CWT

Project CWT is an in-progress Pokemon GBA ROM-hacking project. It is built on
[RHH's pokeemerald-expansion 1.16.3](https://github.com/rh-hideout/pokeemerald-expansion/),
which in turn is based on [pret's pokeemerald](https://github.com/pret/pokeemerald)
decompilation project. The expansion provides the development framework and
modern Pokemon mechanics; Project CWT supplies its own world, events, and
story.

## Progress so far

The opening area is now playable and connected:

- **Alderbrook Town** has been created as the starting town, with working
  signposts, a cuttable tree, and links to the player's house, a local house,
  and Professor Larch's Lab.
- **Player House** includes both ground-floor and upstairs maps with working
  transitions.
- **Professor Larch's Lab** and the additional town house have been added,
  including an NPC interaction in the lab.
- **Route 1: Willbend Canal** connects to Alderbrook Town. It includes a
  signpost, a cuttable tree, and the first story event.

## Intro cutscene

Entering Route 1 for the first time triggers the current introduction:

1. The camera follows a hurried NPC as he searches for an entrance.
2. After realizing he is late, the NPC runs away and drops a bag.
3. The player can inspect the bag, choose a starter Pokemon, and optionally
   nickname it.

This repository also includes the build tools, data, and documentation
required by pokeemerald-expansion. See [INSTALL.md](INSTALL.md) for setup and
build instructions.

## Credits

This project uses `pokeemerald-expansion`; please credit the
[Rom Hacking Hideout contributors](CREDITS.md) when using its work.
