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
	return


Route1_WillbendCanal_MapScripts_LarchTrigger::
# 16 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 19 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 20 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 21 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0
# 24 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 31 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1
# 32 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject 2
# 46 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 52 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 58 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 59 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 62 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_WillbendCanal_MapScripts_PathSign::
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 72 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 73 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 84 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_left
	step_end

# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	player_run_right
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 23 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Camera has stopped moving.$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 31 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Test message!$"

Route1_EventScript_StarterDrop_Text_0:
# 59 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "It's a discarded bag... There are Pokeballs inside!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
