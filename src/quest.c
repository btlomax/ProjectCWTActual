#include "global.h"
#include "event_data.h"
#include "field_message_box.h"
#include "main.h"
#include "menu.h"
#include "pokedex.h"
#include "quest.h"
#include "script.h"
#include "string_util.h"
#include "task.h"
#include "text.h"

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
    const u8 *location;
    enum QuestObjectiveType objectiveType;
    u16 target;
};

struct QuestDefinition
{
    const u8 *title;
    enum QuestCategory category;
    u16 stateVar;
    u16 firstStage;
    u16 completeStage;
    const struct QuestStageDefinition *stages;
};

static const u8 sText_Primary[] = _("PRIMARY");
static const u8 sText_Secondary[] = _("SECONDARY");
static const u8 sText_Empty[] = _("");
static const u8 sText_QuestUpdated[] = _("Quest updated!\n{STR_VAR_1}");

static EWRAM_DATA bool8 sQuestUpdatePending[QUEST_COUNT];

#include "quest_data.inc"

static void Task_CloseQuestUpdateMessage(u8 taskId);

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

static bool8 IsQuestActive(u8 questId)
{
    u16 stage = GetQuestState(questId);

    return stage >= sQuestDefinitions[questId].firstStage
        && stage < sQuestDefinitions[questId].completeStage;
}

static void QueueQuestUpdate(u8 questId)
{
    sQuestUpdatePending[questId] = TRUE;
}

void Quest_Add(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId))
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    if (GetQuestState(questId) < sQuestDefinitions[questId].firstStage)
    {
        SetQuestState(questId, sQuestDefinitions[questId].firstStage);
        QueueQuestUpdate(questId);
    }

    Quest_RefreshStages();
    gSpecialVar_Result = TRUE;
}

void Quest_SetStage(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId)
     || gSpecialVar_0x8005 < sQuestDefinitions[questId].firstStage
     || gSpecialVar_0x8005 >= sQuestDefinitions[questId].completeStage)
    {
        gSpecialVar_Result = FALSE;
        return;
    }

    if (GetQuestState(questId) != gSpecialVar_0x8005)
    {
        SetQuestState(questId, gSpecialVar_0x8005);
        QueueQuestUpdate(questId);
    }
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

    if (GetQuestState(questId) != sQuestDefinitions[questId].completeStage)
    {
        SetQuestState(questId, sQuestDefinitions[questId].completeStage);
        QueueQuestUpdate(questId);
    }
    gSpecialVar_Result = TRUE;
}

void Quest_GetStage(void)
{
    u8 questId = gSpecialVar_0x8004;

    if (!IsQuestIdValid(questId))
    {
        gSpecialVar_Result = 0;
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

        if (!IsQuestActive(questId))
            continue;

        stageDefinition = &sQuestDefinitions[questId].stages[stage];
        if (stageDefinition->objectiveType == QUEST_OBJECTIVE_CAUGHT_SPECIES
         && GetRegionalPokedexCount(FLAG_GET_CAUGHT) >= stageDefinition->target)
        {
            SetQuestState(questId, stage + 1);
            QueueQuestUpdate(questId);
        }
    }
}

void Quest_TryShowUpdateMessage(void)
{
    u8 questId;

    if (ArePlayerFieldControlsLocked() || !IsFieldMessageBoxHidden())
        return;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        if (sQuestUpdatePending[questId])
        {
            StringCopy(gStringVar1, Quest_GetTitle(questId));
            if (ShowFieldMessage(sText_QuestUpdated))
            {
                sQuestUpdatePending[questId] = FALSE;
                LockPlayerFieldControls();
                CreateTask(Task_CloseQuestUpdateMessage, 0);
            }
            break;
        }
    }
}

static void Task_CloseQuestUpdateMessage(u8 taskId)
{
    if (IsTextPrinterActiveOnWindow(0))
        return;

    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        HideFieldMessageBox();
        UnlockPlayerFieldControls();
        DestroyTask(taskId);
    }
}

u8 Quest_GetActiveCount(void)
{
    u8 questId;
    u8 count = 0;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        if (IsQuestActive(questId))
            count++;
    }

    return count;
}

u8 Quest_GetActiveQuestId(u8 activeIndex)
{
    u8 questId;

    for (questId = 0; questId < QUEST_COUNT; questId++)
    {
        if (IsQuestActive(questId))
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

const u8 *Quest_GetLocation(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return sText_Empty;

    stage = GetQuestState(questId);
    if (!IsQuestActive(questId))
        return sText_Empty;

    return sQuestDefinitions[questId].stages[stage].location;
}

const u8 *Quest_GetObjective(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return sText_Empty;

    stage = GetQuestState(questId);
    if (!IsQuestActive(questId))
        return sText_Empty;

    return sQuestDefinitions[questId].stages[stage].objective;
}

u16 Quest_GetProgress(u8 questId)
{
    u16 stage;

    if (!IsQuestIdValid(questId))
        return 0;

    stage = GetQuestState(questId);
    if (!IsQuestActive(questId))
        return 0;
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
    if (!IsQuestActive(questId))
        return 0;
    return sQuestDefinitions[questId].stages[stage].target;
}
