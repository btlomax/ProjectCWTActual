PlayerHouse_Inside_Upstairs_MapScripts::
# 2 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse_Inside_Upstairs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse_Inside_Upstairs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, PlayerHouse_Inside_Upstairs_OnFrame
	.2byte 0


PlayerHouse_Inside_Upstairs_OnFrame::
# 8 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	goto_if_unset FLAG_PLAYER_WOKE_UP, PlayerHouse_Inside_Upstairs_OnFrame_2
PlayerHouse_Inside_Upstairs_OnFrame_1:
# 12 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	setvar VAR_TEMP_0, 1
	end

PlayerHouse_Inside_Upstairs_OnFrame_2:
# 9 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	goto PlayerHouse_Inside_WakeUp
	goto PlayerHouse_Inside_Upstairs_OnFrame_1


PlayerHouse_Inside_WakeUp::
# 17 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	lock
# 18 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	msgbox PlayerHouse_Inside_WakeUp_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	setflag FLAG_PLAYER_WOKE_UP
# 20 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	release
	end


PlayerHouse_Inside_WakeUp_Text_0:
# 18 "data/maps/PlayerHouse_Inside_Upstairs/scripts.pory"
	.string "It's your birthday…\p$"
