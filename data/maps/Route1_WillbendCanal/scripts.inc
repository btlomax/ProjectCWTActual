Route1_WillbendCanal_MapScripts::
# 2 "data/maps/Route1_WillbendCanal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_WillbendCanal_OnTransition
	.byte 0


Route1_WillbendCanal_OnTransition::
# 7 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 9 "data/maps/Route1_WillbendCanal/scripts.pory"
	switch VAR_ROUTE1_STATE
# 11 "data/maps/Route1_WillbendCanal/scripts.pory"
	case 1, Route1_WillbendCanal_OnTransition_3
# 15 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
Route1_WillbendCanal_OnTransition_1:
	end

Route1_WillbendCanal_OnTransition_3:
# 12 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_ROUTE1_TUTOR
# 13 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_ROUTE1_TUTOR
	goto Route1_WillbendCanal_OnTransition_1


Route1_WillbendCanal_MapScripts_LarchTrigger::
# 22 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 24 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 25 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_BRIDGE_NPC_ROUTE1
# 28 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 30 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRuns
# 34 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 37 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 40 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 43 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 46 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 49 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 54 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 59 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 64 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 69 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 92 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitfanfare
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 97 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 102 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_6, MSGBOX_DEFAULT
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 98 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 114 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 117 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 118 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 119 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 126 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 127 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 126 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 1
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 135 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 139 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 175 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 176 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 178 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 181 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 184 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 185 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 186 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 148 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 150 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 159 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 161 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 165 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


# 197 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 198 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 201 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 202 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 203 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 206 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 208 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 209 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 210 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 211 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 215 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 217 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 220 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 225 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 226 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 230 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 231 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 232 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 235 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 237 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 249 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 251 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 254 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 255 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 266 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 269 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 270 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 270 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 270 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 270 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 274 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 275 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 37 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh DRAT, it's not this way either!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 43 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "I could have sworn the entrance was on\nthis route! I need to deliver the\lpackage!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 49 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh BALLS, is that the time?\nI need to get back!$"

Route1_EventScript_StarterDrop_Text_0:
# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "He dropped the package...$"

Route1_EventScript_StarterDrop_Text_1:
# 79 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 86 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname\nto your POKéMON?$"

Route1_EventScript_StarterDrop_Text_6:
# 102 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Dinner will be ready soon, so don't be late!$"

Route1_EventScript_TurnAround_Text_0:
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 141 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\pI can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\nYou can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\pYou can catch wild POKéMON by weakening\nthem in battle and then throwing a\lPOKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you some\ntips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 175 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\nare out there!\pListen out for the cries\nof wild POKéMON, you never know what you\lmight find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 176 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\nyou've caught 15 Pokemon, I'll have a\lgift ready for you.\p$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "<- Alderbrook Town\nWestlock Village ->$"
