#include "global.h"
#include "event_data.h"
#include "pokedex.h"
#include "quest.h"
#include "string_util.h"

enum QuestCategory
{
    QUEST_CATEGORY_PRIMARY,
    QUEST_CATEGORY_SECONDARY,
};

enum QuestObjectiveType
{
    QUEST_OBJECTIVE_NONE,
    QUEST_OBJECTIVE_CAUGHT_SPECIES,
};

struct QuestStageDefinition
{
    const u8 *objective;
    enum QuestObjectiveType objectiveType;
    u16 target;
};

struct QuestDefinition
{
    const u8 *title;
    enum QuestCategory category;
    u16 stateVar;
    const struct QuestStageDefinition *stages;
};

static const u8 sText_Primary[] = _("PRIMARY");
static const u8 sText_Secondary[] = _("SECONDARY");
static const u8 sText_Empty[] = _("");
static const u8 sText_TutorChallenge[] = _("TUTOR'S CHALLENGE");
static const u8 sText_CatchPokemon[] = _("CATCH POKéMON");
static const u8 sText_ReturnToTutor[] = _("RETURN TO TUTOR");

static const struct QuestStageDefinition sQuestTutorCatchStages[] =
{
    [QUEST_TUTOR_CATCH_STAGE_CATCH_15] =
    {
        .objective = sText_CatchPokemon,
        .objectiveType = QUEST_OBJECTIVE_CAUGHT_SPECIES,
        .target = 15,
    },
    [QUEST_TUTOR_CATCH_STAGE_RETURN_15] =
    {
        .objective = sText_ReturnToTutor,
    },
    [QUEST_TUTOR_CATCH_STAGE_CATCH_35] =
    {
        .objective = sText_CatchPokemon,
        .objectiveType = QUEST_OBJECTIVE_CAUGHT_SPECIES,
        .target = 35,
    },
    [QUEST_TUTOR_CATCH_STAGE_RETURN_35] =
    {
        .objective = sText_ReturnToTutor,
    },
};

static const struct QuestDefinition sQuestDefinitions[QUEST_COUNT] =
{
    [QUEST_TUTOR_CATCH] =
    {
        .title = sText_TutorChallenge,
        .category = QUEST_CATEGORY_SECONDARY,
        .stateVar = VAR_QUEST_TUTOR_CATCH_STATE,
        .stages = sQuestTutorCatchStages,
    },
};

static bool8 IsQuestIdValid(u8 questId)
{
    return questId < QUEST_COUNT;
}

static u16 GetQuestState(u8 questId)
{
    return VarGet(sQuestDefinitions[questId].stateVar);
}

static void SetQuestState(u8 questId, u16 stage)
{
    VarSet(sQuestDefinitions[questId].stateVar, stage);
}

void Quest_Add(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId))
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    if (GetQuestState(questId) == QUEST_TUTOR_CATCH_STAGE_INACTIVE)
        SetQuestState(questId, QUEST_TUTOR_CATCH_STAGE_CATCH_15);

    Quest_RefreshStages();
    gSpecialVar_Result = TRUE;
}

void Quest_SetStage(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId) || gSpecialVar_0x8005 >= QUEST_TUTOR_CATCH_STAGE_COMPLETE)
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    SetQuestState(questId, gSpecialVar_0x8005);
    Quest_RefreshStages();
    gSpecialVar_Result = TRUE;
}

void Quest_Complete(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId))
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    SetQuestState(questId, QUEST_TUTOR_CATCH_STAGE_COMPLETE);
    gSpecialVar_Result = TRUE;
}

void Quest_GetStage(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId))
    {
        gSpecialVar_Result = QUEST_TUTOR_CATCH_STAGE_INACTIVE;
        return;
    }

    gSpecialVar_Result = GetQuestState(questId);
}

void Quest_RefreshStages(void)
{
    u8 questId;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        u16 stage = GetQuestState(questId);
        const struct QuestStageDefinition *stageDefinition;

        if (stage == QUEST_TUTOR_CATCH_STAGE_INACTIVE || stage >= QUEST_TUTOR_CATCH_STAGE_COMPLETE)
            continue;

        stageDefinition = &sQuestDefinitions[questId].stages[stage];
        if (stageDefinition->objectiveType == QUEST_OBJECTIVE_CAUGHT_SPECIES
         && GetRegionalPokedexCount(FLAG_GET_CAUGHT) >= stageDefinition->target)
            SetQuestState(questId, stage + 1);
    }
}

u8 Quest_GetActiveCount(void)
{
    u8 questId;
    u8 count = 0;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        u16 stage = GetQuestState(questId);

        if (stage != QUEST_TUTOR_CATCH_STAGE_INACTIVE && stage < QUEST_TUTOR_CATCH_STAGE_COMPLETE)
            count++;
    }

    return count;
}

u8 Quest_GetActiveQuestId(u8 activeIndex)
{
    u8 questId;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        u16 stage = GetQuestState(questId);

        if (stage != QUEST_TUTOR_CATCH_STAGE_INACTIVE && stage < QUEST_TUTOR_CATCH_STAGE_COMPLETE)
        {
            if (activeIndex == 0)
                return questId;
            activeIndex--;
        }
    }

    return QUEST_COUNT;
}

const u8 *Quest_GetCategoryName(u8 questId)
{
    if (!IsQuestIdValid(questId))
        return sText_Empty;

    switch (sQuestDefinitions[questId].category)
    {
    case QUEST_CATEGORY_PRIMARY:
        return sText_Primary;
    case QUEST_CATEGORY_SECONDARY:
        return sText_Secondary;
    }

    return sText_Empty;
}

const u8 *Quest_GetTitle(u8 questId)
{
    if (!IsQuestIdValid(questId))
        return sText_Empty;

    return sQuestDefinitions[questId].title;
}

const u8 *Quest_GetObjective(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return sText_Empty;

    stage = GetQuestState(questId);
    if (stage == QUEST_TUTOR_CATCH_STAGE_INACTIVE || stage >= QUEST_TUTOR_CATCH_STAGE_COMPLETE)
        return sText_Empty;

    return sQuestDefinitions[questId].stages[stage].objective;
}

u16 Quest_GetProgress(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return 0;

    stage = GetQuestState(questId);
    if (sQuestDefinitions[questId].stages[stage].objectiveType == QUEST_OBJECTIVE_CAUGHT_SPECIES)
        return GetRegionalPokedexCount(FLAG_GET_CAUGHT);

    return 0;
}

u16 Quest_GetTarget(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return 0;

    stage = GetQuestState(questId);
    return sQuestDefinitions[questId].stages[stage].target;
}
