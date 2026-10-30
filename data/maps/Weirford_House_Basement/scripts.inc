Weirford_House_Basement_MapScripts::
	.byte 0


Weirford_House_Basement_ShuppetBoss::
# 4 "data/maps/Weirford_House_Basement/scripts.pory"
	lockall
# 6 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_Basement_ShuppetBoss_2
# 11 "data/maps/Weirford_House_Basement/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 12 "data/maps/Weirford_House_Basement/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_HOUSE_SHUPPET, Weirford_House_Basement_ShuppetBoss_PreBattle, Weirford_House_Basement_ShuppetBoss_Defeated, Weirford_House_Basement_ShuppetBoss_AfterBattle
	end

Weirford_House_Basement_ShuppetBoss_2:
# 7 "data/maps/Weirford_House_Basement/scripts.pory"
	releaseall
	end


Weirford_House_Basement_ShuppetBoss_AfterBattle::
# 23 "data/maps/Weirford_House_Basement/scripts.pory"
	lockall
# 24 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/Weirford_House_Basement/scripts.pory"
	multichoice 17, 6, MULTI_WEIRFORD_HOUSE_DECISION, TRUE
# 33 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Weirford_House_Basement_ShuppetBoss_AfterBattle_2
# 45 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_5, MSGBOX_DEFAULT
# 46 "data/maps/Weirford_House_Basement/scripts.pory"
	playse SE_FLEE
# 47 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_6, MSGBOX_DEFAULT
# 48 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_7, MSGBOX_DEFAULT
# 50 "data/maps/Weirford_House_Basement/scripts.pory"
	addvar VAR_PLAYER_MORALITY, 5
# 51 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_8, MSGBOX_DEFAULT
Weirford_House_Basement_ShuppetBoss_AfterBattle_1:
# 54 "data/maps/Weirford_House_Basement/scripts.pory"
	setvar VAR_WEIRFORD_HOUSE_STATE, 4
# 55 "data/maps/Weirford_House_Basement/scripts.pory"
	releaseall
	end

Weirford_House_Basement_ShuppetBoss_AfterBattle_2:
# 34 "data/maps/Weirford_House_Basement/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_CHOSE_SHUPPET
# 35 "data/maps/Weirford_House_Basement/scripts.pory"
	givemon SPECIES_SHUPPET, 16, ITEM_SPELL_TAG, ITEM_DUSK_BALL, NATURE_ADAMANT, 2, FEMALE, 0, 0, 0, 0, 0, 0, 31, 18, 20, 20, 15, 31, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_GRUDGE, MOVE_ASTONISH
# 38 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_2, MSGBOX_DEFAULT
# 39 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_3, MSGBOX_DEFAULT
# 41 "data/maps/Weirford_House_Basement/scripts.pory"
	subvar VAR_PLAYER_MORALITY, 5
# 42 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_4, MSGBOX_DEFAULT
	goto Weirford_House_Basement_ShuppetBoss_AfterBattle_1


Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_0:
# 25 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET is weak!\p"
	.string "Hanging on by a thread, TOBY reaches\n"
	.string "out to you.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_1:
# 30 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "What will you do?$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_2:
# 38 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET settles into its Poké Ball.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_3:
# 39 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "A sudden, cold silence fills the room.\p"
	.string "TOBY's arm drops to the floor.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_4:
# 42 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "The world seems a little darker.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_5:
# 45 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "You grab TOBY by the arm.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_6:
# 47 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET vanishes into the shadows.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_7:
# 48 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "TOBY collapses into your arms,\n"
	.string "breathing weakly but alive.$"

Weirford_House_Basement_ShuppetBoss_AfterBattle_Text_8:
# 51 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "The world seems a little brighter.$"

Weirford_House_Basement_ShuppetBoss_PreBattle::
# 59 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUUUPPET!$"

Weirford_House_Basement_ShuppetBoss_Defeated::
# 63 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "...$"
