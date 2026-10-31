Weirford_House_2_MapScripts::
# 3 "data/maps/Weirford_House_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_House_2_OnTransition
	.byte 0


Weirford_House_2_OnTransition::
# 8 "data/maps/Weirford_House_2/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 2
	goto_if_eq Weirford_House_2_OnTransition_2
# 13 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 14 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
Weirford_House_2_OnTransition_1:
	end

Weirford_House_2_OnTransition_2:
# 9 "data/maps/Weirford_House_2/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 10 "data/maps/Weirford_House_2/scripts.pory"
	addobject LOCALID_TOBY
	goto Weirford_House_2_OnTransition_1


Weirford_House_2_GoUpstairs::
# 22 "data/maps/Weirford_House_2/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/Weirford_House_2/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_UPSTAIRS_2, 1, 2
# 24 "data/maps/Weirford_House_2/scripts.pory"
	waitstate
	end


Weirford_House_2_BasementDoorAccess::
# 30 "data/maps/Weirford_House_2/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 3
	goto_if_eq Weirford_House_2_BasementDoorAccess_2
# 38 "data/maps/Weirford_House_2/scripts.pory"
	lock
# 40 "data/maps/Weirford_House_2/scripts.pory"
	msgbox Weirford_House_2_BasementDoorAccess_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/Weirford_House_2/scripts.pory"
	release
	end

Weirford_House_2_BasementDoorAccess_2:
# 32 "data/maps/Weirford_House_2/scripts.pory"
	playse SE_EXIT
# 33 "data/maps/Weirford_House_2/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_BASEMENT, 4, 2
# 34 "data/maps/Weirford_House_2/scripts.pory"
	waitstate
	end


Weirford_House_2_FirstAlteredDownstairsEntry::
# 47 "data/maps/Weirford_House_2/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 1
	goto_if_ne Weirford_House_2_FirstAlteredDownstairsEntry_2
# 51 "data/maps/Weirford_House_2/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_ALTERED_DOWNSTAIRS_ENTERED, Weirford_House_2_FirstAlteredDownstairsEntry_5
# 55 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_ALTERED_DOWNSTAIRS_ENTERED
# 56 "data/maps/Weirford_House_2/scripts.pory"
	lock
# 57 "data/maps/Weirford_House_2/scripts.pory"
	msgbox Weirford_House_2_FirstAlteredDownstairsEntry_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/Weirford_House_2/scripts.pory"
	release
	return

Weirford_House_2_FirstAlteredDownstairsEntry_2:
	return

Weirford_House_2_FirstAlteredDownstairsEntry_5:
	return


Weirford_House_2_Toby_Interact::
# 64 "data/maps/Weirford_House_2/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 2
	goto_if_ne Weirford_House_2_Toby_Interact_2
# 68 "data/maps/Weirford_House_2/scripts.pory"
	lock
# 69 "data/maps/Weirford_House_2/scripts.pory"
	faceplayer
# 70 "data/maps/Weirford_House_2/scripts.pory"
	msgbox Weirford_House_2_Toby_Interact_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 73 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 74 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 76 "data/maps/Weirford_House_2/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 77 "data/maps/Weirford_House_2/scripts.pory"
	addobject LOCALID_TOBY
# 78 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 80 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 81 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 82 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 84 "data/maps/Weirford_House_2/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 85 "data/maps/Weirford_House_2/scripts.pory"
	addobject LOCALID_TOBY
# 86 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 88 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 89 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 91 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 92 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 93 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 95 "data/maps/Weirford_House_2/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 96 "data/maps/Weirford_House_2/scripts.pory"
	addobject LOCALID_TOBY
# 97 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 99 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 100 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 101 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 103 "data/maps/Weirford_House_2/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 104 "data/maps/Weirford_House_2/scripts.pory"
	addobject LOCALID_TOBY
# 105 "data/maps/Weirford_House_2/scripts.pory"
	delay 4
# 107 "data/maps/Weirford_House_2/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_HOUSE_DOWNSTAIRS_TOBY
# 108 "data/maps/Weirford_House_2/scripts.pory"
	removeobject LOCALID_TOBY
# 109 "data/maps/Weirford_House_2/scripts.pory"
	release
# 111 "data/maps/Weirford_House_2/scripts.pory"
	setvar VAR_WEIRFORD_HOUSE_STATE, 3
# 112 "data/maps/Weirford_House_2/scripts.pory"
	playse SE_CLICK
# 114 "data/maps/Weirford_House_2/scripts.pory"
	msgbox Weirford_House_2_Toby_Interact_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/Weirford_House_2/scripts.pory"
	release
	end

Weirford_House_2_Toby_Interact_2:
	end


Weirford_House_2_BasementDoorAccess_Text_0:
# 40 "data/maps/Weirford_House_2/scripts.pory"
	.string "The basement door is locked.$"

Weirford_House_2_FirstAlteredDownstairsEntry_Text_0:
# 57 "data/maps/Weirford_House_2/scripts.pory"
	.string "You hear a thud from above. Something\n"
	.string "heavy has been moving around upstairs.$"

Weirford_House_2_Toby_Interact_Text_0:
# 70 "data/maps/Weirford_House_2/scripts.pory"
	.string "I feel...cold...$"

Weirford_House_2_Toby_Interact_Text_1:
# 114 "data/maps/Weirford_House_2/scripts.pory"
	.string "The door is unlocked, but where did TOBY\n"
	.string "go?$"
