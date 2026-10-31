Weirford_House_MapScripts::
# 3 "data/maps/Weirford_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_House_OnTransition
	.byte 0


Weirford_House_OnTransition::
# 8 "data/maps/Weirford_House/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_ENTERED, Weirford_House_OnTransition_2
# 12 "data/maps/Weirford_House/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_ENTERED
# 13 "data/maps/Weirford_House/scripts.pory"
	setvar VAR_0x8004, QUEST_THE_HOUSE_IN_THE_WOODS
# 14 "data/maps/Weirford_House/scripts.pory"
	setvar VAR_0x8005, QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_INVESTIGATE
# 15 "data/maps/Weirford_House/scripts.pory"
	special Quest_SetStage
	end

Weirford_House_OnTransition_2:
	end


Weirford_House_GoUpstairs::
# 21 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 22 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_UPSTAIRS, 1, 2
# 23 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_FrontDoorAccess::
# 29 "data/maps/Weirford_House/scripts.pory"
	goto_if_unset FLAG_WEIRFORD_HOUSE_DOOR_SEALED, Weirford_House_FrontDoorAccess_2
# 36 "data/maps/Weirford_House/scripts.pory"
	lock
# 37 "data/maps/Weirford_House/scripts.pory"
	playse SE_CLICK
# 38 "data/maps/Weirford_House/scripts.pory"
	msgbox Weirford_House_FrontDoorAccess_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/Weirford_House/scripts.pory"
	release
	end

Weirford_House_FrontDoorAccess_2:
# 31 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_FOREST, 36, 6
# 33 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_BasementDoorAccess::
# 45 "data/maps/Weirford_House/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 3
	goto_if_eq Weirford_House_BasementDoorAccess_2
# 45 "data/maps/Weirford_House/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_BasementDoorAccess_2
# 53 "data/maps/Weirford_House/scripts.pory"
	lock
# 55 "data/maps/Weirford_House/scripts.pory"
	msgbox Weirford_House_BasementDoorAccess_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/Weirford_House/scripts.pory"
	release
	end

Weirford_House_BasementDoorAccess_2:
# 47 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 48 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_BASEMENT, 4, 2
# 49 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_FrontDoorAccess_Text_0:
# 38 "data/maps/Weirford_House/scripts.pory"
	.string "The door is locked.$"

Weirford_House_BasementDoorAccess_Text_0:
# 55 "data/maps/Weirford_House/scripts.pory"
	.string "The basement door is locked.$"
