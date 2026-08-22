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
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
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
# 102 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 108 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 1
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 121 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 127 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 129 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 170 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 173 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 174 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 136 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 139 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 141 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 147 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 148 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 185 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 186 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 187 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 188 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 189 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 190 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 195 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 196 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 197 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 198 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 203 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 205 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 208 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 210 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 213 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 214 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 217 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 218 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 219 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 223 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 224 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 225 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 230 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 231 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 235 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 235 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 237 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 238 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 249 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 254 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 257 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 262 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 263 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
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
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 129 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\pI can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 130 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\nYou can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\pYou can catch wild POKéMON by weakening\nthem in battle and then throwing a\lPOKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you\nsome tips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\nare out there!\pListen out for the cries\nof wild POKéMON, you never know what you\lmight find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\nyou've caught 15 Pokemon,\lI'll have a gift ready for you!$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
