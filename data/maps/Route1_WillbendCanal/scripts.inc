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
# 34 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraUp
# 36 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRuns
# 39 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 44 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 45 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 50 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCLookAround
# 51 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_DING_DONG
# 55 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 58 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_DING_DONG
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_4, MSGBOX_DEFAULT
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_DING_DONG
# 65 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_5
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 68 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 69 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_FLEE
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 71 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 72 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 74 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 90 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 92 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitfanfare
# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 110 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 115 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_QUESTS_ENABLED
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_6, MSGBOX_DEFAULT
# 117 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_7, MSGBOX_DEFAULT
# 119 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 120 "data/maps/Route1_WillbendCanal/scripts.pory"
	special Quest_Add
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 126 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 111 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 112 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 132 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 135 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 137 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 138 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 145 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 154 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_PIN
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 161 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 195 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 196 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, QUEST_TUTOR_CATCH
# 197 "data/maps/Route1_WillbendCanal/scripts.pory"
	special Quest_Add
# 199 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 202 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 203 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 205 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 206 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 4
# 207 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 165 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 168 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 169 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 170 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 173 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 174 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 175 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 177 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 178 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 180 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 183 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 184 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 185 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 186 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 188 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


Route1_WillbendCanal_MapScripts_TutorSign::
# 217 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_TutorSign_Text_0, MSGBOX_SIGN
	end


# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 223 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 224 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 225 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 226 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 227 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 231 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 232 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 235 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 236 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 237 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 245 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 251 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 252 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 254 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 255 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 257 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 258 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 262 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 266 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 268 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 274 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 275 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 276 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 279 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 280 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 284 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 284 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 284 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 285 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 286 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 290 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 290 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 290 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 290 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 291 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 294 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 295 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 295 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 295 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 295 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 296 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 299 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 300 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 301 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 302 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh no oh no OH NO! Which way was it?!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Did he say left then left then right?!\n"
	.string "Or right then left then left?!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 55 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Wait, what...?$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_3:
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{FONT_NARROW}The man looks in the bag he's carrying.\n"
	.string "His eyes widen in shock.{FONT_NORMAL}$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_4:
# 61 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OH FRAK, I grabbed the wrong bag! Oh no\n"
	.string "oh no OH NO!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_5:
# 65 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "AHHHH!FRAK THIS, I'M OUTTA HERE!$"

Route1_EventScript_StarterDrop_Text_0:
# 89 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{FONT_NARROW}The bag on the ground is shaking\n"
	.string "slightly, lit from within by a gently\l"
	.string "pulsing red light.{FONT_NORMAL}$"

Route1_EventScript_StarterDrop_Text_1:
# 92 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 106 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 109 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname to your\n"
	.string "POKéMON?$"

Route1_EventScript_StarterDrop_Text_6:
# 116 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "The quest system is now active!$"

Route1_EventScript_StarterDrop_Text_7:
# 117 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Press START and select QUESTS to view\n"
	.string "your current quests.$"

Route1_EventScript_TurnAround_Text_0:
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 135 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far\n"
	.string "please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\p"
	.string "I can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 161 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 164 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 165 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\n"
	.string "You can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 174 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 188 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\p"
	.string "You can catch wild POKéMON by\n"
	.string "weakening them in battle and then\l"
	.string "throwing a POKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you some\n"
	.string "tips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\n"
	.string "are out there!\p"
	.string "Listen out for the cries of wild\n"
	.string "POKéMON, you never know what you might\l"
	.string "find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 195 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\n"
	.string "you've caught 15 Pokemon, I'll have a\l"
	.string "gift ready for you.\p"
	.string "$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Alderbrook Town V Westlock Village -->$"

Route1_WillbendCanal_MapScripts_TutorSign_Text_0:
# 217 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Free Pokemon! <-- Inside$"
