#ifndef GUARD_SCRIPTED_BOSS_H
#define GUARD_SCRIPTED_BOSS_H

#include "data.h"
#include "constants/scripted_bosses.h"

struct ScriptedBoss
{
    struct TrainerMon mon;
    u64 aiFlags;
    u16 battleMusic;
    bool8 allowItems;
    bool8 allowCapture;
    bool8 allowEscape;
};

extern const struct ScriptedBoss gScriptedBosses[SCRIPTED_BOSS_COUNT];

#endif // GUARD_SCRIPTED_BOSS_H
