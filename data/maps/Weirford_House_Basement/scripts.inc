Weirford_House_Basement_MapScripts::
# 2 "data/maps/Weirford_House_Basement/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_House_Basement_OnTransition
	.byte 0


Weirford_House_Basement_OnTransition::
# 7 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_Basement_OnTransition_2
Weirford_House_Basement_OnTransition_1:
	end

Weirford_House_Basement_OnTransition_2:
# 8 "data/maps/Weirford_House_Basement/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_TOBY
# 9 "data/maps/Weirford_House_Basement/scripts.pory"
	removeobject LOCALID_TOBY
	goto Weirford_House_Basement_OnTransition_1


Weirford_House_Basement_ShuppetBoss::
# 17 "data/maps/Weirford_House_Basement/scripts.pory"
	lockall
# 19 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_Basement_ShuppetBoss_2
# 24 "data/maps/Weirford_House_Basement/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 25 "data/maps/Weirford_House_Basement/scripts.pory"
	waitmoncry
# 26 "data/maps/Weirford_House_Basement/scripts.pory"
	setvar VAR_0x8004, SCRIPTED_BOSS_WEIRFORD_HOUSE_SHUPPET
# 27 "data/maps/Weirford_House_Basement/scripts.pory"
	special StartScriptedBossBattle
# 29 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Weirford_House_Basement_ShuppetBoss_5
# 34 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/Weirford_House_Basement/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 40 "data/maps/Weirford_House_Basement/scripts.pory"
	waitmoncry
# 42 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_1
# 44 "data/maps/Weirford_House_Basement/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DOLL, Weirford_House_Basement_ShuppetBoss_8
Weirford_House_Basement_ShuppetBoss_7:
# 48 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/Weirford_House_Basement/scripts.pory"
	multichoice 17, 6, MULTI_WEIRFORD_HOUSE_DECISION, TRUE
# 51 "data/maps/Weirford_House_Basement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Weirford_House_Basement_ShuppetBoss_11
# 63 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_6, MSGBOX_DEFAULT
# 64 "data/maps/Weirford_House_Basement/scripts.pory"
	playse SE_FLEE
# 65 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_7, MSGBOX_DEFAULT
# 66 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_8, MSGBOX_DEFAULT
# 68 "data/maps/Weirford_House_Basement/scripts.pory"
	addvar VAR_PLAYER_MORALITY, 5
# 69 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_9, MSGBOX_DEFAULT
Weirford_House_Basement_ShuppetBoss_10:
# 72 "data/maps/Weirford_House_Basement/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_TOBY
# 73 "data/maps/Weirford_House_Basement/scripts.pory"
	clearflag FLAG_WEIRFORD_HOUSE_DOOR_SEALED
# 74 "data/maps/Weirford_House_Basement/scripts.pory"
	setvar VAR_WEIRFORD_HOUSE_STATE, 4
# 75 "data/maps/Weirford_House_Basement/scripts.pory"
	releaseall
	end

Weirford_House_Basement_ShuppetBoss_2:
# 20 "data/maps/Weirford_House_Basement/scripts.pory"
	releaseall
	end

Weirford_House_Basement_ShuppetBoss_5:
# 30 "data/maps/Weirford_House_Basement/scripts.pory"
	releaseall
	end

Weirford_House_Basement_ShuppetBoss_8:
# 45 "data/maps/Weirford_House_Basement/scripts.pory"
	call Weirford_House_Basement_LostDollResolution
	goto Weirford_House_Basement_ShuppetBoss_7

Weirford_House_Basement_ShuppetBoss_11:
# 52 "data/maps/Weirford_House_Basement/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_CHOSE_SHUPPET
# 53 "data/maps/Weirford_House_Basement/scripts.pory"
	givemon SPECIES_SHUPPET, 16, ITEM_SPELL_TAG, ITEM_DUSK_BALL, NATURE_ADAMANT, 2, FEMALE, 0, 0, 0, 0, 0, 0, 31, 18, 20, 20, 15, 31, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_GRUDGE, MOVE_ASTONISH
# 56 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_3, MSGBOX_DEFAULT
# 57 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_4, MSGBOX_DEFAULT
# 59 "data/maps/Weirford_House_Basement/scripts.pory"
	subvar VAR_PLAYER_MORALITY, 5
# 60 "data/maps/Weirford_House_Basement/scripts.pory"
	msgbox Weirford_House_Basement_ShuppetBoss_Text_5, MSGBOX_DEFAULT
	goto Weirford_House_Basement_ShuppetBoss_10


Weirford_House_Basement_LostDollResolution::
	return


Weirford_House_Basement_Stairs::
# 86 "data/maps/Weirford_House_Basement/scripts.pory"
	playse SE_EXIT
# 87 "data/maps/Weirford_House_Basement/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 13, 2
# 88 "data/maps/Weirford_House_Basement/scripts.pory"
	waitstate
	end


Weirford_House_Basement_ShuppetBoss_Text_0:
# 35 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET begins to retreat!$"

Weirford_House_Basement_ShuppetBoss_Text_1:
# 42 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "But Toby is fading away. You need to\n"
	.string "act quickly!$"

Weirford_House_Basement_ShuppetBoss_Text_2:
# 48 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "What will you do?$"

Weirford_House_Basement_ShuppetBoss_Text_3:
# 56 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET settles into its Poké Ball.$"

Weirford_House_Basement_ShuppetBoss_Text_4:
# 57 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "A sudden, cold silence fills the room.\p"
	.string "TOBY's arm drops to the floor.$"

Weirford_House_Basement_ShuppetBoss_Text_5:
# 60 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "The world seems a little darker.$"

Weirford_House_Basement_ShuppetBoss_Text_6:
# 63 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "You grab TOBY by the arm.$"

Weirford_House_Basement_ShuppetBoss_Text_7:
# 65 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "SHUPPET vanishes into the shadows.$"

Weirford_House_Basement_ShuppetBoss_Text_8:
# 66 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "TOBY collapses into your arms,\n"
	.string "breathing weakly but alive.$"

Weirford_House_Basement_ShuppetBoss_Text_9:
# 69 "data/maps/Weirford_House_Basement/scripts.pory"
	.string "The world seems a little brighter.$"
