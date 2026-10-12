#ifndef GUARD_QUEST_H
#define GUARD_QUEST_H

#include "constants/quests.h"

void Quest_Add(void);
void Quest_SetStage(void);
void Quest_Complete(void);
void Quest_GetStage(void);
void Quest_RefreshStages(void);
void Quest_TryShowUpdateMessage(void);
u8 Quest_GetActiveCount(void);
u8 Quest_GetActiveQuestId(u8 activeIndex);
const u8 *Quest_GetCategoryName(u8 questId);
const u8 *Quest_GetTitle(u8 questId);
const u8 *Quest_GetLocation(u8 questId);
const u8 *Quest_GetObjective(u8 questId);
u16 Quest_GetProgress(u8 questId);
u16 Quest_GetTarget(u8 questId);

#endif // GUARD_QUEST_H
