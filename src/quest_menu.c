#include "global.h"
#include "bg.h"
#include "gpu_regs.h"
#include "line_break.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "quest.h"
#include "quest_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

enum
{
    WIN_QUEST_LIST,
    WIN_QUEST_LOCATION,
    WIN_QUEST_DETAILS,
};

#define QUESTS_PER_PAGE 2
#define QUEST_MENU_BLANK_TILE 0x1E0

static void CB2_InitQuestMenu(void);
static void CB2_QuestMenu(void);
static void VBlankCB_QuestMenu(void);
static void Task_QuestMenuInput(u8 taskId);
static void Task_CloseQuestMenu(u8 taskId);
static void DrawQuestList(void);
static void DrawQuestLocation(void);
static void DrawQuestDetails(void);
static void CopyQuestListTitle(u8 questId);
static void UpdateQuestSelection(s8 direction);

static EWRAM_DATA u8 sQuestCursorPos = 0;
static EWRAM_DATA u8 sQuestScrollOffset = 0;

static const struct BgTemplate sQuestMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
};

static const struct WindowTemplate sQuestMenuWindowTemplates[] =
{
    [WIN_QUEST_LIST] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 13,
        .height = 7,
        .paletteNum = 15,
        .baseBlock = 0,
    },
    [WIN_QUEST_LOCATION] = {
        .bg = 0,
        .tilemapLeft = 17,
        .tilemapTop = 1,
        .width = 12,
        .height = 7,
        .paletteNum = 15,
        .baseBlock = 0x60,
    },
    [WIN_QUEST_DETAILS] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 10,
        .width = 28,
        .height = 9,
        .paletteNum = 15,
        .baseBlock = 0xC0,
    },
    DUMMY_WIN_TEMPLATE,
};

static const u8 sText_Quests[] = _("QUESTS");
static const u8 sText_Location[] = _("LOCATION");
static const u8 sText_Details[] = _("DETAILS");
static const u8 sText_NoActiveQuests[] = _("No active quests.");
static const u8 sText_Ellipsis[] = _("...");

void QuestMenu_Open(void)
{
    sQuestCursorPos = 0;
    sQuestScrollOffset = 0;
    gMain.state = 0;
    SetMainCallback2(CB2_InitQuestMenu);
}

static void CB2_InitQuestMenu(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sQuestMenuBgTemplates, ARRAY_COUNT(sQuestMenuBgTemplates));
        InitWindows(sQuestMenuWindowTemplates);
        FillBgTilemapBufferRect(0, QUEST_MENU_BLANK_TILE, 0, 0, 32, 32, 0);
        DeactivateAllTextPrinters();
        ResetTasks();
        ResetSpriteData();
        ScanlineEffect_Stop();
        ShowBg(0);
        gMain.state++;
        break;
    case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(WIN_QUEST_LIST, FALSE);
        DrawStdWindowFrame(WIN_QUEST_LOCATION, FALSE);
        DrawStdWindowFrame(WIN_QUEST_DETAILS, FALSE);
        DrawQuestList();
        DrawQuestLocation();
        DrawQuestDetails();
        CopyWindowToVram(WIN_QUEST_LIST, COPYWIN_FULL);
        CopyWindowToVram(WIN_QUEST_LOCATION, COPYWIN_FULL);
        CopyWindowToVram(WIN_QUEST_DETAILS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 3:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        CreateTask(Task_QuestMenuInput, 0);
        SetVBlankCallback(VBlankCB_QuestMenu);
        SetMainCallback2(CB2_QuestMenu);
        break;
    }
}

static void CB2_QuestMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_QuestMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void DrawQuestList(void)
{
    u8 questCount = Quest_GetActiveCount();
    u8 row;

    FillWindowPixelBuffer(WIN_QUEST_LIST, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_QUEST_LIST, FONT_SMALL, sText_Quests, 32, 1, TEXT_SKIP_DRAW, NULL);
    if (questCount == 0)
    {
        AddTextPrinterParameterized(WIN_QUEST_LIST, FONT_SMALL_NARROWER, sText_NoActiveQuests, 8, 25, TEXT_SKIP_DRAW, NULL);
    }
    else
    {
        for (row = 0; row < QUESTS_PER_PAGE && sQuestScrollOffset + row < questCount; row++)
        {
            u8 questId = Quest_GetActiveQuestId(sQuestScrollOffset + row);

            CopyQuestListTitle(questId);
            AddTextPrinterParameterized(WIN_QUEST_LIST, FONT_SMALL_NARROWER, gStringVar1, 8, (row * 16) + 17, TEXT_SKIP_DRAW, NULL);
        }

        AddTextPrinterParameterized(WIN_QUEST_LIST, FONT_SMALL, gText_SelectorArrow3, 0, ((sQuestCursorPos - sQuestScrollOffset) * 16) + 17, TEXT_SKIP_DRAW, NULL);
    }
}

static void CopyQuestListTitle(u8 questId)
{
    u8 *end;
    u16 maxWidth = WindowWidthPx(WIN_QUEST_LIST) - 16;
    u16 ellipsisWidth = GetStringWidth(FONT_SMALL_NARROWER, sText_Ellipsis, 0);

    end = StringCopy(gStringVar1, Quest_GetTitle(questId));
    while (GetStringWidth(FONT_SMALL_NARROWER, gStringVar1, 0) > maxWidth)
    {
        *--end = EOS;
        if (GetStringWidth(FONT_SMALL_NARROWER, gStringVar1, 0) + ellipsisWidth <= maxWidth)
        {
            StringCopy(end, sText_Ellipsis);
            break;
        }
    }
}

static void DrawQuestLocation(void)
{
    FillWindowPixelBuffer(WIN_QUEST_LOCATION, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_QUEST_LOCATION, FONT_SMALL, sText_Location, 24, 1, TEXT_SKIP_DRAW, NULL);
    if (Quest_GetActiveCount() != 0)
    {
        u8 questId = Quest_GetActiveQuestId(sQuestCursorPos);

        StringCopy(gStringVar4, Quest_GetLocation(questId));
        BreakStringNaive(gStringVar4, WindowWidthPx(WIN_QUEST_LOCATION) - 16, 2, FONT_SMALL, HIDE_SCROLL_PROMPT);
        AddTextPrinterParameterized(WIN_QUEST_LOCATION, FONT_SMALL, gStringVar4, 8, 21, TEXT_SKIP_DRAW, NULL);
    }
}

static void DrawQuestDetails(void)
{
    u8 questCount = Quest_GetActiveCount();

    FillWindowPixelBuffer(WIN_QUEST_DETAILS, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_QUEST_DETAILS, FONT_SMALL, sText_Details, 88, 1, TEXT_SKIP_DRAW, NULL);
    if (questCount != 0)
    {
        u8 questId = Quest_GetActiveQuestId(sQuestCursorPos);
        u16 target = Quest_GetTarget(questId);

        if (target != 0)
        {
            ConvertIntToDecimalStringN(gStringVar1, Quest_GetProgress(questId), STR_CONV_MODE_LEFT_ALIGN, 3);
            ConvertIntToDecimalStringN(gStringVar2, target, STR_CONV_MODE_LEFT_ALIGN, 3);
            StringExpandPlaceholders(gStringVar4, Quest_GetObjective(questId));
            AddTextPrinterParameterized(WIN_QUEST_DETAILS, FONT_SMALL, gStringVar4, 8, 21, TEXT_SKIP_DRAW, NULL);
        }
        else
        {
            StringCopy(gStringVar4, Quest_GetObjective(questId));
            BreakStringNaive(gStringVar4, WindowWidthPx(WIN_QUEST_DETAILS) - 16, 3, FONT_SMALL, HIDE_SCROLL_PROMPT);
            AddTextPrinterParameterized(WIN_QUEST_DETAILS, FONT_SMALL, gStringVar4, 8, 21, TEXT_SKIP_DRAW, NULL);
        }
    }
}

static void UpdateQuestSelection(s8 direction)
{
    u8 questCount = Quest_GetActiveCount();

    if (direction < 0)
        sQuestCursorPos = (sQuestCursorPos == 0) ? questCount - 1 : sQuestCursorPos - 1;
    else
        sQuestCursorPos = (sQuestCursorPos + 1) % questCount;

    if (sQuestCursorPos < sQuestScrollOffset)
        sQuestScrollOffset = sQuestCursorPos;
    else if (sQuestCursorPos >= sQuestScrollOffset + QUESTS_PER_PAGE)
        sQuestScrollOffset = sQuestCursorPos - QUESTS_PER_PAGE + 1;

    DrawQuestList();
    DrawQuestLocation();
    DrawQuestDetails();
    CopyWindowToVram(WIN_QUEST_LIST, COPYWIN_GFX);
    CopyWindowToVram(WIN_QUEST_LOCATION, COPYWIN_GFX);
    CopyWindowToVram(WIN_QUEST_DETAILS, COPYWIN_GFX);
}

static void Task_QuestMenuInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_CloseQuestMenu;
    }
    else if (Quest_GetActiveCount() != 0 && JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        UpdateQuestSelection(-1);
    }
    else if (Quest_GetActiveCount() != 0 && JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        UpdateQuestSelection(1);
    }
}

static void Task_CloseQuestMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAllWindowBuffers();
        DestroyTask(taskId);
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
    }
}
