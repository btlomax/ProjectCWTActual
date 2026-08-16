Route1_WillbendCanal_MapScripts::
# 2 "data/maps/Route1_WillbendCanal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_WillbendCanal_OnTransition
	.byte 0


Route1_WillbendCanal_OnTransition::
# 7 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 0
	goto_if_eq Route1_WillbendCanal_OnTransition_1
	return

Route1_WillbendCanal_OnTransition_1:
# 8 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 9 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
	return


Route1_WillbendCanal_MapScripts_LarchTrigger::
# 14 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 16 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 17 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_BRIDGE_NPC_ROUTE1
# 20 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 22 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRuns
# 26 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 29 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 32 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 33 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 38 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 39 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 45 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 46 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 48 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 49 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 51 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 52 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 55 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 61 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 62 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 67 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 68 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 71 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_WillbendCanal_MapScripts_PathSign::
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 84 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 92 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 110 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 111 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 112 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 114 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 117 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 118 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 119 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 120 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 121 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 29 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh DRAT, it's not this way either!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "I could have sworn the entrance\nwas on this route!\nI need to have a word with my crew...$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh BALLS, is that the time?\nI need to get back!$"

Route1_EventScript_StarterDrop_Text_0:
# 68 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "It's a discarded bag... There are Pokeballs inside!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
