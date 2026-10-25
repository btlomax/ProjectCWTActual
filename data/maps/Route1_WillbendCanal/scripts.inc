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
	msgbox Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 56 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_BRIDGE_NPC_ROUTE1, Movement_NPCRunsAway
# 57 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_BRIDGE_NPC_ROUTE1
# 59 "data/maps/Route1_WillbendCanal/scripts.pory"
	clearflag FLAG_HIDE_STARTER_ITEM
# 60 "data/maps/Route1_WillbendCanal/scripts.pory"
	addobject LOCALID_STARTER_DROP
# 62 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_BRIDGE_NPC_ROUTE1
# 63 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_BRIDGE_NPC_ROUTE1
# 65 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraDown
# 66 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 70 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 71 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	return


Route1_EventScript_StarterDrop::
# 75 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 76 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/Route1_WillbendCanal/scripts.pory"
	closemessage
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_1, MSGBOX_YESNO
# 81 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_StarterDrop_2
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_3, MSGBOX_DEFAULT
# 88 "data/maps/Route1_WillbendCanal/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/Route1_WillbendCanal/scripts.pory"
	special ChooseStarter
# 93 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_4, MSGBOX_DEFAULT
# 95 "data/maps/Route1_WillbendCanal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitfanfare
# 97 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_5, MSGBOX_YESNO
# 98 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_EventScript_StarterDrop_6
Route1_EventScript_StarterDrop_5:
# 103 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_SYS_QUESTS_ENABLED
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_6, MSGBOX_DEFAULT
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_7, MSGBOX_DEFAULT
# 107 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 108 "data/maps/Route1_WillbendCanal/scripts.pory"
	special Quest_Add
# 110 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_STARTER_DROP
# 111 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_STARTER_ITEM
# 112 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
# 113 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 114 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_2:
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_StarterDrop_Text_2, MSGBOX_DEFAULT
# 83 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_StarterDrop_6:
# 99 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, 0
# 100 "data/maps/Route1_WillbendCanal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route1_EventScript_StarterDrop_5


Route1_EventScript_TurnAround::
# 120 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_ne Route1_EventScript_TurnAround_1
	return

Route1_EventScript_TurnAround_1:
# 121 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	bufferstring STR_VAR_1, Route1_EventScript_TurnAround_Text_0
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_TurnAround_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeftTwoSteps
# 125 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 126 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end


Route1_EventScript_Trigger_Tutorial::
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 2
	goto_if_eq Route1_EventScript_Trigger_Tutorial_2
	return

Route1_EventScript_Trigger_Tutorial_1:
# 134 "data/maps/Route1_WillbendCanal/scripts.pory"
	goto Route1_EventScript_Catch_Pokemon_Tutorial
	return

Route1_EventScript_Trigger_Tutorial_2:
# 133 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_ROUTE1_STATE, 3
	goto_if_eq Route1_EventScript_Trigger_Tutorial_1
	return


Route1_EventScript_Catch_Pokemon_Tutorial::
# 139 "data/maps/Route1_WillbendCanal/scripts.pory"
	lock
# 140 "data/maps/Route1_WillbendCanal/scripts.pory"
	faceplayer
# 142 "data/maps/Route1_WillbendCanal/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Common_Movement_ExclamationMark
# 144 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 146 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 148 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_1, MSGBOX_YESNO
# 151 "data/maps/Route1_WillbendCanal/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Catch_Pokemon_Tutorial_2
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_6, MSGBOX_DEFAULT
Route1_EventScript_Catch_Pokemon_Tutorial_1:
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_7, MSGBOX_DEFAULT
# 183 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_8, MSGBOX_DEFAULT
# 184 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_0x8004, QUEST_TUTOR_CATCH
# 185 "data/maps/Route1_WillbendCanal/scripts.pory"
	special Quest_Add
# 187 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorLeaveScreenRight
# 188 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 190 "data/maps/Route1_WillbendCanal/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_TUTOR
# 191 "data/maps/Route1_WillbendCanal/scripts.pory"
	removeobject LOCALID_ROUTE1_TUTOR
# 193 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 194 "data/maps/Route1_WillbendCanal/scripts.pory"
	setvar VAR_ROUTE1_STATE, 4
# 195 "data/maps/Route1_WillbendCanal/scripts.pory"
	release
	end

Route1_EventScript_Catch_Pokemon_Tutorial_2:
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_3, MSGBOX_DEFAULT
# 155 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassDown
# 156 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorDown
# 157 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 158 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 160 "data/maps/Route1_WillbendCanal/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 161 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmoncry
# 162 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_4, MSGBOX_DEFAULT
# 163 "data/maps/Route1_WillbendCanal/scripts.pory"
	special RemoveCameraObject
# 165 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SavePlayerParty
# 166 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadWallyZigzagoon
# 167 "data/maps/Route1_WillbendCanal/scripts.pory"
	special StartWillowbendTutorBattle
# 168 "data/maps/Route1_WillbendCanal/scripts.pory"
	special LoadPlayerParty
# 170 "data/maps/Route1_WillbendCanal/scripts.pory"
	special SpawnCameraObject
# 171 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement LOCALID_ROUTE1_TUTOR, Movement_TutorWalkGrassUp
# 172 "data/maps/Route1_WillbendCanal/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveWithTutorUp
# 173 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 174 "data/maps/Route1_WillbendCanal/scripts.pory"
	waitmovement LOCALID_ROUTE1_TUTOR
# 176 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_EventScript_Catch_Pokemon_Tutorial_Text_5, MSGBOX_DEFAULT
	goto Route1_EventScript_Catch_Pokemon_Tutorial_1


Route1_WillbendCanal_MapScripts_PathSign::
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_PathSign_Text_0, MSGBOX_SIGN
	end


Route1_WillbendCanal_MapScripts_TutorSign::
# 205 "data/maps/Route1_WillbendCanal/scripts.pory"
	msgbox Route1_WillbendCanal_MapScripts_TutorSign_Text_0, MSGBOX_SIGN
	end


# 210 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraUp:
# 211 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 212 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 213 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 214 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 215 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 216 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 219 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraDown:
# 220 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 221 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 222 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 223 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 224 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 225 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 228 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRuns:
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 229 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_left
# 230 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 233 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCRunsAway:
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_fast_right
# 235 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 238 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_NPCLookAround:
# 239 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 240 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 241 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 242 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 243 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 244 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_right
# 245 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 246 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 248 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_faster_left
# 249 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_8
# 250 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 253 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_WalkLeftTwoSteps:
# 254 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 255 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 256 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 259 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassDown:
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 260 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 261 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 262 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 263 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 264 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 265 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_right
# 266 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 267 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_in_place_left
# 268 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 271 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorWalkGrassUp:
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 272 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 273 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_left
# 274 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 277 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorDown:
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 278 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_down
# 279 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 282 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_CameraMoveWithTutorUp:
# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 283 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_up
# 284 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

# 287 "data/maps/Route1_WillbendCanal/scripts.pory"
Movement_TutorLeaveScreenRight:
# 288 "data/maps/Route1_WillbendCanal/scripts.pory"
	delay_16
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 289 "data/maps/Route1_WillbendCanal/scripts.pory"
	walk_right
# 290 "data/maps/Route1_WillbendCanal/scripts.pory"
	step_end

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_0:
# 41 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Why is the meter reading getting\n"
	.string "higher?! There's nothing around here!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_1:
# 47 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "This just can't be right, these levels\n"
	.string "make no sense!$"

Route1_WillbendCanal_MapScripts_LarchTrigger_Text_2:
# 53 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Oh BALLS, it's going off the scale!\n"
	.string "Whatever's causing this, I am NOT\l"
	.string "staying around to meet it!$"

Route1_EventScript_StarterDrop_Text_0:
# 77 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "He dropped something...$"

Route1_EventScript_StarterDrop_Text_1:
# 80 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Take a look inside?$"

Route1_EventScript_StarterDrop_Text_2:
# 82 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You decided not to take a look.$"

Route1_EventScript_StarterDrop_Text_3:
# 87 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Just a quick peek...$"

Route1_EventScript_StarterDrop_Text_4:
# 94 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "You received a {STR_VAR_1}!$"

Route1_EventScript_StarterDrop_Text_5:
# 97 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you want to give a nickname\nto your POKéMON?$"

Route1_EventScript_StarterDrop_Text_6:
# 104 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "The quest system is now active!$"

Route1_EventScript_StarterDrop_Text_7:
# 105 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Press START and select QUESTS to view\nyour current quests.$"

Route1_EventScript_TurnAround_Text_0:
# 122 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{PLAYER}$"

Route1_EventScript_TurnAround_Text_1:
# 123 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "{STR_VAR_1}, don't go too far please!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_0:
# 148 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Hey kid! You look like a new trainer!\pI can see you have a POKéMON with you.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_1:
# 149 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Do you know how to catch wild POKéMON?$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_2:
# 152 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "OK no problem, let me show you how!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_3:
# 153 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "First, you need to find a wild POKéMON.\nYou can find them in tall grass.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_4:
# 162 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "WOOOOAH!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_5:
# 176 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "See, that wasn't so hard!\pYou can catch wild POKéMON by weakening\nthem in battle and then throwing a\lPOKéBALL at them.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_6:
# 179 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "No problem, but let me give you some\ntips at least.$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_7:
# 182 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Some Pokémon are hard to find, but they\nare out there!\pListen out for the cries of wild POKéMON,\nyou never know what you might find!$"

Route1_EventScript_Catch_Pokemon_Tutorial_Text_8:
# 183 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Come to my house on this route after\nyou've caught 15 Pokemon, I'll have a\lgift ready for you.\p$"

Route1_WillbendCanal_MapScripts_PathSign_Text_0:
# 200 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Alderbrook Town\nV Westlock Village -->$"

Route1_WillbendCanal_MapScripts_TutorSign_Text_0:
# 205 "data/maps/Route1_WillbendCanal/scripts.pory"
	.string "Free Pokemon!\n<-- Inside$"
