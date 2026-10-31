Weirford_House_MapScripts::
	.byte 0


Weirford_House_GoUpstairs::
# 5 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 6 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_UPSTAIRS, 1, 2
# 7 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_FrontDoorAccess::
# 13 "data/maps/Weirford_House/scripts.pory"
	goto_if_unset FLAG_WEIRFORD_HOUSE_DOOR_SEALED, Weirford_House_FrontDoorAccess_2
# 20 "data/maps/Weirford_House/scripts.pory"
	lock
# 21 "data/maps/Weirford_House/scripts.pory"
	playse SE_CLICK
# 22 "data/maps/Weirford_House/scripts.pory"
	msgbox Weirford_House_FrontDoorAccess_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Weirford_House/scripts.pory"
	release
	end

Weirford_House_FrontDoorAccess_2:
# 15 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 16 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_FOREST, 36, 6
# 17 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_BasementDoorAccess::
# 29 "data/maps/Weirford_House/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 3
	goto_if_eq Weirford_House_BasementDoorAccess_2
# 29 "data/maps/Weirford_House/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_BasementDoorAccess_2
# 37 "data/maps/Weirford_House/scripts.pory"
	lock
# 39 "data/maps/Weirford_House/scripts.pory"
	msgbox Weirford_House_BasementDoorAccess_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/Weirford_House/scripts.pory"
	release
	end

Weirford_House_BasementDoorAccess_2:
# 31 "data/maps/Weirford_House/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/Weirford_House/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_BASEMENT, 4, 2
# 33 "data/maps/Weirford_House/scripts.pory"
	waitstate
	end


Weirford_House_FrontDoorAccess_Text_0:
# 22 "data/maps/Weirford_House/scripts.pory"
	.string "The door is locked.$"

Weirford_House_BasementDoorAccess_Text_0:
# 39 "data/maps/Weirford_House/scripts.pory"
	.string "The basement door is locked.$"
