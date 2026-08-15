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
# 17 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 19 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 20 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject 2
# 23 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 25 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0
# 28 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 31 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement 2, Movement_NPCRuns
# 32 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 2
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 39 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 40 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject 3
# 43 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement 2, Movement_NPCRunsAway
# 44 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 2
# 46 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject 2
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 51 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 61 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 62 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_WillbendCanal_MapScripts_PathSign::
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
	step_end

# 98 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 27 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Camera has stopped moving.$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Test message!$"

Route1_EventScript_StarterDrop_Text_0:
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "It's a discarded bag... There are Pokeballs inside!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
