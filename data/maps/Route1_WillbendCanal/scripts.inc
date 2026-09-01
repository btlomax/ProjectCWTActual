Route1_WillbendCanal_MapScripts::
# 2 "data/maps/Route1_WillbendCanal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_WillbendCanal_OnTransition
	.byte 0


Route1_WillbendCanal_OnTransition::
# 7 "data/maps/Route1_WillbendCanal/scripts.pory"
	switch VAR_ROUTE1_STATE
# 9 "data/maps/Route1_WillbendCanal/scripts.pory"
	case 1, Route1_WillbendCanal_OnTransition_3
# 13 "data/maps/Route1_WillbendCanal/scripts.pory"
	case 3, Route1_WillbendCanal_OnTransition_4
# 20 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 21 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 22 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
Route1_WillbendCanal_OnTransition_1:
	end

Route1_WillbendCanal_OnTransition_3:
# 10 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 11 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
	goto Route1_WillbendCanal_OnTransition_1

Route1_WillbendCanal_OnTransition_4:
# 14 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 15 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_ROUTE1_TUTOR
# 16 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_ROUTE1_TUTOR
# 17 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
	goto Route1_WillbendCanal_OnTransition_1


Route1_WillbendCanal_MapScripts_LarchTrigger::
# 29 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 31 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 32 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_BRIDGE_NPC_ROUTE1
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 37 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRuns
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 44 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 48 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 54 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 61 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 64 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 67 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 71 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 84 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 98 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 101 "data/maps/Route1_WillbendCanal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitfanfare
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_6, MSGBOX_DEFAULT
# 111 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 112 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 114 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 121 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 126 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 127 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 135 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 140 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 141 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_PIN
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 147 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 150 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 180 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 183 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 184 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 186 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 187 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 189 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 190 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 192 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 193 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 4
# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 159 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 161 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 162 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 168 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 171 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 173 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 174 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 175 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 177 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


Route1_WillbendCanal_MapScripts_TutorSign::
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_TutorSign_Text_0, MSGBOX_SIGN
	end


# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 210 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 211 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 213 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 214 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 215 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 218 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 219 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 220 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 223 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 224 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 227 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 232 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 237 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 238 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 244 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 245 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 249 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 254 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 255 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 262 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 263 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 266 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 270 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 281 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 282 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 282 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 282 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 282 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 286 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 287 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 44 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh DRAT, it's not this way either!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "I could have sworn the entrance was on\nthis route! I need to deliver the\lpackage!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh BALLS, is that the time?\nI need to get back!$"

Route1_EventScript_StarterDrop_Text_0:
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "He dropped the package...$"

Route1_EventScript_StarterDrop_Text_1:
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname\nto your POKéMON?$"

Route1_EventScript_StarterDrop_Text_6:
# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Time to go home, your grandmother\nis waiting.$"

Route1_EventScript_TurnAround_Text_0:
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\pI can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 150 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\nYou can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 177 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\pYou can catch wild POKéMON by weakening\nthem in battle and then throwing a\lPOKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 180 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you some\ntips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 183 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\nare out there!\pListen out for the cries of wild POKéMON,\nyou never know what you might find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 184 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\nyou've caught 15 Pokemon, I'll have a\lgift ready for you.\p$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Alderbrook Town\nV Westlock Village -->$"

Route1_WillbendCanal_MapScripts_TutorSign_Text_0:
# 204 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Free Pokemon!\n<-- Inside$"
