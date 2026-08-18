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
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 72 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 84 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 73 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 101 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 0
	goto_if_eq Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 102 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_WillbendCanal_MapScripts_PathSign::
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 119 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 120 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 121 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 128 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 129 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 130 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 131 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 147 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 148 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 150 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 159 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 162 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 165 "data/maps/Route1_WillbendCanal/scripts.pory"
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
	.string "He dropped his bag...$"

Route1_EventScript_StarterDrop_Text_1:
# 71 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 73 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname\nto your POKéMON?$"

Route1_EventScript_TurnAround_Text_0:
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
