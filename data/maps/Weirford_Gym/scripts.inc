Weirford_Gym_MapScripts::
# 2 "data/maps/Weirford_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Gym_MapScripts_FirstEntry
# 3 "data/maps/Weirford_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Weirford_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Weirford_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Weirford_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Weirford_Gym_MapScripts_FirstEntryScene
	.2byte 0


Weirford_Gym_MapScripts_FirstEntry::
# 10 "data/maps/Weirford_Gym/scripts.pory"
	goto_if_set FLAG_VISITED_WEIRFORD_GYM, Weirford_Gym_MapScripts_FirstEntry_2
# 17 "data/maps/Weirford_Gym/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 18 "data/maps/Weirford_Gym/scripts.pory"
	addobject LOCALID_GYMLEADER_MILO
# 19 "data/maps/Weirford_Gym/scripts.pory"
	setvar VAR_TEMP_0, 0
Weirford_Gym_MapScripts_FirstEntry_1:
	end

Weirford_Gym_MapScripts_FirstEntry_2:
# 12 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 13 "data/maps/Weirford_Gym/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Weirford_Gym_MapScripts_FirstEntry_1


Weirford_Gym_MapScripts_FirstEntryScene::
# 27 "data/maps/Weirford_Gym/scripts.pory"
	lock
# 28 "data/maps/Weirford_Gym/scripts.pory"
	call Weirford_Gym_MapScripts_MiloInteraction
# 30 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_VISITED_WEIRFORD_GYM
# 31 "data/maps/Weirford_Gym/scripts.pory"
	setvar VAR_TEMP_0, 1
# 33 "data/maps/Weirford_Gym/scripts.pory"
	release
	end


Weirford_Gym_MapScripts_MiloInteraction::
# 39 "data/maps/Weirford_Gym/scripts.pory"
	special SpawnCameraObject
# 40 "data/maps/Weirford_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveUp
# 41 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 42 "data/maps/Weirford_Gym/scripts.pory"
	delay 30
# 44 "data/maps/Weirford_Gym/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Weirford_Gym/scripts.pory"
	applymovement LOCALID_GYMLEADER_MILO, Common_Movement_ExclamationMark
# 46 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement LOCALID_GYMLEADER_MILO
# 48 "data/maps/Weirford_Gym/scripts.pory"
	msgbox Weirford_Gym_MapScripts_MiloInteraction_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/Weirford_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Weirford_Gym_PlayerMoveUp
# 50 "data/maps/Weirford_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraMoveUp
# 51 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 52 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 54 "data/maps/Weirford_Gym/scripts.pory"
	delay 30
# 55 "data/maps/Weirford_Gym/scripts.pory"
	applymovement LOCALID_GYMLEADER_MILO, Movement_MiloFaceDown
# 56 "data/maps/Weirford_Gym/scripts.pory"
	msgbox Weirford_Gym_MapScripts_MiloInteraction_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/Weirford_Gym/scripts.pory"
	playse SE_PIN
# 62 "data/maps/Weirford_Gym/scripts.pory"
	applymovement LOCALID_GYMLEADER_MILO, Common_Movement_ExclamationMark
# 63 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement LOCALID_GYMLEADER_MILO
# 64 "data/maps/Weirford_Gym/scripts.pory"
	delay 30
# 65 "data/maps/Weirford_Gym/scripts.pory"
	msgbox Weirford_Gym_MapScripts_MiloInteraction_Text_2, MSGBOX_DEFAULT
# 82 "data/maps/Weirford_Gym/scripts.pory"
	msgbox Weirford_Gym_MapScripts_MiloInteraction_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/Weirford_Gym/scripts.pory"
	special RemoveCameraObject
	return


Weirford_Gym_MapScripts_MiloAfterFirstEntry::
# 99 "data/maps/Weirford_Gym/scripts.pory"
	lock
# 100 "data/maps/Weirford_Gym/scripts.pory"
	faceplayer
# 102 "data/maps/Weirford_Gym/scripts.pory"
	msgbox Weirford_Gym_MapScripts_MiloAfterFirstEntry_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/Weirford_Gym/scripts.pory"
	release
	end


# 118 "data/maps/Weirford_Gym/scripts.pory"
Weirford_Gym_PlayerMoveUp:
# 120 "data/maps/Weirford_Gym/scripts.pory"
	walk_up
# 121 "data/maps/Weirford_Gym/scripts.pory"
	walk_right
# 121 "data/maps/Weirford_Gym/scripts.pory"
	walk_right
# 121 "data/maps/Weirford_Gym/scripts.pory"
	walk_right
# 122 "data/maps/Weirford_Gym/scripts.pory"
	walk_up
# 122 "data/maps/Weirford_Gym/scripts.pory"
	walk_up
# 123 "data/maps/Weirford_Gym/scripts.pory"
	step_end

# 126 "data/maps/Weirford_Gym/scripts.pory"
Movement_CameraMoveUp:
# 128 "data/maps/Weirford_Gym/scripts.pory"
	walk_up
# 128 "data/maps/Weirford_Gym/scripts.pory"
	walk_up
# 129 "data/maps/Weirford_Gym/scripts.pory"
	walk_right
# 129 "data/maps/Weirford_Gym/scripts.pory"
	walk_right
# 130 "data/maps/Weirford_Gym/scripts.pory"
	step_end

# 133 "data/maps/Weirford_Gym/scripts.pory"
Movement_MiloFaceDown:
# 135 "data/maps/Weirford_Gym/scripts.pory"
	face_down
# 136 "data/maps/Weirford_Gym/scripts.pory"
	step_end

Weirford_Gym_MapScripts_MiloInteraction_Text_0:
# 48 "data/maps/Weirford_Gym/scripts.pory"
	.string "Hello? Can I help you?\p$"

Weirford_Gym_MapScripts_MiloInteraction_Text_1:
# 56 "data/maps/Weirford_Gym/scripts.pory"
	.string "You're here for the what?\n"
	.string "The Gym Challenge?\p"
	.string "And you-you're serious?\p"
	.string "...\p"
	.string "Errrr...well I gue-$"

Weirford_Gym_MapScripts_MiloInteraction_Text_2:
# 65 "data/maps/Weirford_Gym/scripts.pory"
	.string "Hold still a moment, trainer.\p"
	.string "Let me look at you properly...\p"
	.string "Interesting...\p"
	.string "In that case, allow me to see if you are\n"
	.string "prepared for battle.\p"
	.string "Hmmm...\p"
	.string "Your gear suggests experience you\n"
	.string "should not yet possess...\p"
	.string "Who showed you how to arrange your\n"
	.string "Poké Balls like that?\p"
	.string "...\p"
	.string "It just seemed appropriate you say?\p"
	.string "...\p"
	.string "It comes naturally to you, doesn't it?\p"
	.string "So, it is time again, after all these\n"
	.string "years. A new challenger steps up.\p$"

Weirford_Gym_MapScripts_MiloInteraction_Text_3:
# 82 "data/maps/Weirford_Gym/scripts.pory"
	.string "...\p"
	.string "Trainer I apologise but you have caught\n"
	.string "me in a state of severe unreadiness.\p"
	.string "Please go out and come back in again.\p"
	.string "Literally just do that.\p"
	.string "I will call the others in and wait for\n"
	.string "you downstairs.\p"
	.string "I never thought I would need to make\n"
	.string "that call again.\p"
	.string "Be ready Trainer, we won't go down\n"
	.string "easily.$"

Weirford_Gym_MapScripts_MiloAfterFirstEntry_Text_0:
# 102 "data/maps/Weirford_Gym/scripts.pory"
	.string "To dust off the old cobwebs, I feel the\n"
	.string "fighting spirit stir within.\p"
	.string "It has been a many a generation since\n"
	.string "someone like you, has appeared.\p"
	.string "The others and I have waited, passing\n"
	.string "the mantle from one generation to the\l"
	.string "next, until one of the bloodlines\l"
	.string "surfaced again. Yet, you carry no Crest.\p"
	.string "...\p"
	.string "It is no matter, battle will reveal to us\n"
	.string "the truth.\p$"
