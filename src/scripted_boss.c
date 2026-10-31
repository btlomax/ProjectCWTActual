#include "global.h"
#include "scripted_boss.h"
#include "constants/battle_ai.h"
#include "constants/songs.h"

const struct ScriptedBoss gScriptedBosses[SCRIPTED_BOSS_COUNT] =
{
    [SCRIPTED_BOSS_WEIRFORD_HOUSE_SHUPPET] =
    {
        .mon =
        {
            .iv = TRAINER_PARTY_IVS(3, 1, 2, 2, 2, 1),
            .moves =
            {
                MOVE_SHADOW_SNEAK,
                MOVE_WILL_O_WISP,
                MOVE_GRUDGE,
                MOVE_ASTONISH,
            },
            .species = SPECIES_SHUPPET,
            .heldItem = ITEM_NONE,
            .ability = ABILITY_NONE,
            .lvl = 16,
            .ball = POKEBALL_COUNT,
            .friendship = 0,
            .nature = NATURE_HARDY,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .isShiny = FALSE,
            .teraType = TYPE_MYSTERY,
            .gigantamaxFactor = FALSE,
            .shouldUseDynamax = FALSE,
            .dynamaxLevel = 0,
        },
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .battleMusic = MUS_VS_WILD,
        .allowItems = TRUE,
        .allowCapture = FALSE,
        .allowEscape = FALSE,
    },
};
