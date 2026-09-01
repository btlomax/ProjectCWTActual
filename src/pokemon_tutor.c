#include "global.h"
#include "event_data.h"
#include "malloc.h"
#include "pokemon_tutor.h"
#include "random.h"
#include "script.h"
#include "script_menu.h"
#include "script_pokemon_util.h"
#include "string_util.h"
#include "constants/script_menu.h"

#define TUTOR_STARTER_LEVEL 5

enum TutorStarterPool
{
    TUTOR_STARTER_POOL_GRASS,
    TUTOR_STARTER_POOL_FIRE,
    TUTOR_STARTER_POOL_WATER,
    TUTOR_STARTER_POOL_COUNT,
};

struct TutorStarterPoolEntry
{
    enum Species species;
    u16 claimedFlag;
};

static const struct TutorStarterPoolEntry sTutorStarterPools[TUTOR_STARTER_POOL_COUNT][3] =
{
    [TUTOR_STARTER_POOL_GRASS] =
    {
        {SPECIES_CHIKORITA, FLAG_POKEMON_TUTOR_STARTER_CHIKORITA_CLAIMED},
        {SPECIES_TREECKO,   FLAG_POKEMON_TUTOR_STARTER_TREECKO_CLAIMED},
        {SPECIES_TURTWIG,   FLAG_POKEMON_TUTOR_STARTER_TURTWIG_CLAIMED},
    },
    [TUTOR_STARTER_POOL_FIRE] =
    {
        {SPECIES_CYNDAQUIL, FLAG_POKEMON_TUTOR_STARTER_CYNDAQUIL_CLAIMED},
        {SPECIES_TORCHIC,   FLAG_POKEMON_TUTOR_STARTER_TORCHIC_CLAIMED},
        {SPECIES_CHIMCHAR,  FLAG_POKEMON_TUTOR_STARTER_CHIMCHAR_CLAIMED},
    },
    [TUTOR_STARTER_POOL_WATER] =
    {
        {SPECIES_TOTODILE, FLAG_POKEMON_TUTOR_STARTER_TOTODILE_CLAIMED},
        {SPECIES_MUDKIP,   FLAG_POKEMON_TUTOR_STARTER_MUDKIP_CLAIMED},
        {SPECIES_PIPLUP,   FLAG_POKEMON_TUTOR_STARTER_PIPLUP_CLAIMED},
    },
};

static EWRAM_DATA const struct TutorStarterPoolEntry *sOfferedStarterPool[TUTOR_STARTER_POOL_COUNT];

static const struct TutorStarterPoolEntry *ChooseTutorStarter(enum TutorStarterPool pool)
{
    const struct TutorStarterPoolEntry *eligible[ARRAY_COUNT(sTutorStarterPools[0])];
    u8 eligibleCount = 0;
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sTutorStarterPools[0]); i++)
    {
        const struct TutorStarterPoolEntry *entry = &sTutorStarterPools[pool][i];

        if (!FlagGet(entry->claimedFlag))
            eligible[eligibleCount++] = entry;
    }

    if (eligibleCount == 0)
        return NULL;

    return eligible[Random() % eligibleCount];
}

u16 PokemonTutorRollStarterPool(void)
{
    const struct TutorStarterPoolEntry *eligible[TUTOR_STARTER_POOL_COUNT * ARRAY_COUNT(sTutorStarterPools[0])];
    u8 eligibleCount = 0;
    u8 i;
    u8 j;

    Script_RequestEffects(SCREFF_V1);
    gSpecialVar_Result = FALSE;

    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
        sOfferedStarterPool[i] = NULL;

    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
    {
        sOfferedStarterPool[i] = ChooseTutorStarter(i);
    }

    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
    {
        if (sOfferedStarterPool[i] == NULL)
            break;
    }

    if (i != TUTOR_STARTER_POOL_COUNT)
    {
        for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
        {
            for (j = 0; j < ARRAY_COUNT(sTutorStarterPools[0]); j++)
            {
                const struct TutorStarterPoolEntry *entry = &sTutorStarterPools[i][j];

                if (!FlagGet(entry->claimedFlag))
                    eligible[eligibleCount++] = entry;
            }
        }

        if (eligibleCount < TUTOR_STARTER_POOL_COUNT)
            return FALSE;

        for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
        {
            u8 choice = Random() % eligibleCount;

            sOfferedStarterPool[i] = eligible[choice];
            eligible[choice] = eligible[--eligibleCount];
        }
    }

    gSpecialVar_0x8004 = sOfferedStarterPool[TUTOR_STARTER_POOL_GRASS]->species;
    gSpecialVar_0x8005 = sOfferedStarterPool[TUTOR_STARTER_POOL_FIRE]->species;
    gSpecialVar_0x8006 = sOfferedStarterPool[TUTOR_STARTER_POOL_WATER]->species;
    gSpecialVar_Result = TRUE;
    return TRUE;
}

void PokemonTutorShowStarterPoolMenu(void)
{
    struct ListMenuItem *items;
    u8 i;

    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);

    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
    {
        if (sOfferedStarterPool[i] == NULL)
        {
            gSpecialVar_Result = MULTI_B_PRESSED;
            return;
        }
    }

    items = AllocZeroed(sizeof(*items) * TUTOR_STARTER_POOL_COUNT);
    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
    {
        u8 *name = Alloc(POKEMON_NAME_LENGTH + 1);

        StringCopy(name, GetSpeciesName(sOfferedStarterPool[i]->species));
        items[i].name = name;
        items[i].id = i;
    }

    if (ScriptMenu_MultichoiceDynamic(18, 7, TUTOR_STARTER_POOL_COUNT, items, FALSE, TUTOR_STARTER_POOL_COUNT, 0, DYN_MULTICHOICE_CB_NONE))
    {
        ScriptContext_Stop();
        return;
    }

    gSpecialVar_Result = MULTI_B_PRESSED;
}

u16 PokemonTutorGiveStarterReward(void)
{
    const struct TutorStarterPoolEntry *entry;
    enum Species species = gSpecialVar_0x800B;
    u8 i;
    u32 giftResult;

    Script_RequestEffects(SCREFF_V1 | SCREFF_SAVE);
    gSpecialVar_Result = MON_CANT_GIVE;

    for (i = 0; i < TUTOR_STARTER_POOL_COUNT; i++)
    {
        if (sOfferedStarterPool[i] != NULL && sOfferedStarterPool[i]->species == species)
            break;
    }

    if (i == TUTOR_STARTER_POOL_COUNT)
        return MON_CANT_GIVE;

    entry = sOfferedStarterPool[i];
    if (FlagGet(entry->claimedFlag))
        return MON_CANT_GIVE;

    giftResult = ScriptGiveMon(entry->species, TUTOR_STARTER_LEVEL, ITEM_NONE);
    gSpecialVar_Result = giftResult;
    if (giftResult == MON_GIVEN_TO_PARTY || giftResult == MON_GIVEN_TO_PC)
    {
        FlagSet(entry->claimedFlag);
    }

    return giftResult;
}
