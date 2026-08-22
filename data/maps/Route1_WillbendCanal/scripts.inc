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
# 15 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 17 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 18 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_BRIDGE_NPC_ROUTE1
# 21 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 23 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRuns
# 27 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 30 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 33 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 34 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 39 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 40 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 42 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 46 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 49 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 52 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 62 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 67 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 68 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 69 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 72 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 73 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 84 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 85 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 97 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 108 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 2
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 118 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 119 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 118 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 1
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 127 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 128 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 130 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 135 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 170 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 173 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 175 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 176 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 177 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 136 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 139 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 140 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 141 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 147 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 150 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 188 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 189 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 190 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 192 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 193 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 197 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 198 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 201 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 202 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 203 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 206 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 208 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 211 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 217 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 219 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 220 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 223 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 224 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 225 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 226 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 227 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 231 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 232 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 237 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 238 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 238 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 244 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 245 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 249 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 251 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 255 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 257 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 262 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 266 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 268 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 30 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh DRAT, it's not this way either!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "I could have sworn the entrance\nwas on this route!\nI need to have a word with my crew...$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 42 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh BALLS, is that the time?\nI need to get back!$"

Route1_EventScript_StarterDrop_Text_0:
# 69 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "He dropped his bag...$"

Route1_EventScript_StarterDrop_Text_1:
# 72 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname\nto your POKéMON?$"

Route1_EventScript_TurnAround_Text_0:
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\pI can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 136 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\nYou can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\pYou can catch wild POKéMON by weakening\nthem in battle and then throwing a\lPOKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you\nsome tips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\nare out there!\pListen out for the cries\nof wild POKéMON, you never know what you\lmight find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\nyou've caught 15 Pokemon,\lI'll have a gift ready for you!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
