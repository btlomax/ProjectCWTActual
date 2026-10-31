Weirford_House_Upstairs_MapScripts::
	.byte 0


Weirford_House_Upstairs_StairRouting::
# 5 "data/maps/Weirford_House_Upstairs/scripts.pory"
	playse SE_EXIT
# 7 "data/maps/Weirford_House_Upstairs/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 0
	goto_if_eq Weirford_House_Upstairs_StairRouting_2
# 7 "data/maps/Weirford_House_Upstairs/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 4
	goto_if_eq Weirford_House_Upstairs_StairRouting_2
# 13 "data/maps/Weirford_House_Upstairs/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_2, 8, 2
Weirford_House_Upstairs_StairRouting_1:
# 15 "data/maps/Weirford_House_Upstairs/scripts.pory"
	waitstate
	end

Weirford_House_Upstairs_StairRouting_2:
# 9 "data/maps/Weirford_House_Upstairs/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 8, 2
	goto Weirford_House_Upstairs_StairRouting_1


Weirford_House_Upstairs_FirstClue::
# 21 "data/maps/Weirford_House_Upstairs/scripts.pory"
	lock
# 22 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_FirstClue_Text_0
# 23 "data/maps/Weirford_House_Upstairs/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_1
# 25 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_SealDoorAfterFirstClueFound
# 26 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_Upstairs_CheckClues
# 27 "data/maps/Weirford_House_Upstairs/scripts.pory"
	release
	return


Weirford_House_Upstairs_SecondClue::
# 32 "data/maps/Weirford_House_Upstairs/scripts.pory"
	lock
# 33 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_SecondClue_Text_0
# 34 "data/maps/Weirford_House_Upstairs/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_2
# 36 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_SealDoorAfterFirstClueFound
# 37 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_Upstairs_CheckClues
# 39 "data/maps/Weirford_House_Upstairs/scripts.pory"
	release
	return


Weirford_House_Upstairs_ThirdClue::
# 44 "data/maps/Weirford_House_Upstairs/scripts.pory"
	lock
# 45 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_ThirdClue_Text_0
# 47 "data/maps/Weirford_House_Upstairs/scripts.pory"
	goto_if_unset FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_3, Weirford_House_Upstairs_ThirdClue_2
Weirford_House_Upstairs_ThirdClue_1:
# 64 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_SealDoorAfterFirstClueFound
# 65 "data/maps/Weirford_House_Upstairs/scripts.pory"
	call Weirford_House_Upstairs_CheckClues
# 67 "data/maps/Weirford_House_Upstairs/scripts.pory"
	release
	return

Weirford_House_Upstairs_ThirdClue_2:
# 49 "data/maps/Weirford_House_Upstairs/scripts.pory"
	delay 60
# 50 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_ThirdClue_Text_1
# 51 "data/maps/Weirford_House_Upstairs/scripts.pory"
	fadescreen FADE_TO_WHITE
# 52 "data/maps/Weirford_House_Upstairs/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 53 "data/maps/Weirford_House_Upstairs/scripts.pory"
	delay 10
# 54 "data/maps/Weirford_House_Upstairs/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 55 "data/maps/Weirford_House_Upstairs/scripts.pory"
	waitmoncry
# 57 "data/maps/Weirford_House_Upstairs/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Weirford_House_Upstairs_Movement_Player_JumpBack
# 58 "data/maps/Weirford_House_Upstairs/scripts.pory"
	waitmovement
# 59 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_ThirdClue_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/Weirford_House_Upstairs/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_3
	goto Weirford_House_Upstairs_ThirdClue_1


Weirford_House_SealDoorAfterFirstClueFound::
# 72 "data/maps/Weirford_House_Upstairs/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_DOOR_SEALED, Weirford_House_SealDoorAfterFirstClueFound_2
# 76 "data/maps/Weirford_House_Upstairs/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_DOOR_SEALED
# 77 "data/maps/Weirford_House_Upstairs/scripts.pory"
	playse SE_CLICK
# 78 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_SealDoorAfterFirstClueFound_Text_0, MSGBOX_DEFAULT
	return

Weirford_House_SealDoorAfterFirstClueFound_2:
	return


Weirford_House_Upstairs_CheckClues::
# 84 "data/maps/Weirford_House_Upstairs/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 0
	goto_if_ne Weirford_House_Upstairs_CheckClues_2
# 88 "data/maps/Weirford_House_Upstairs/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_1, Weirford_House_Upstairs_CheckClues_6
	return

Weirford_House_Upstairs_CheckClues_2:
	return

Weirford_House_Upstairs_CheckClues_4:
# 92 "data/maps/Weirford_House_Upstairs/scripts.pory"
	setvar VAR_WEIRFORD_HOUSE_STATE, 1
# 93 "data/maps/Weirford_House_Upstairs/scripts.pory"
	msgbox Weirford_House_Upstairs_CheckClues_Text_0, MSGBOX_DEFAULT
	return

Weirford_House_Upstairs_CheckClues_5:
# 90 "data/maps/Weirford_House_Upstairs/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_3, Weirford_House_Upstairs_CheckClues_4
	return

Weirford_House_Upstairs_CheckClues_6:
# 89 "data/maps/Weirford_House_Upstairs/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_INITIAL_CLUE_2, Weirford_House_Upstairs_CheckClues_5
	return


# 97 "data/maps/Weirford_House_Upstairs/scripts.pory"
Weirford_House_Upstairs_Movement_Player_JumpBack:
# 99 "data/maps/Weirford_House_Upstairs/scripts.pory"
	jump_down
# 100 "data/maps/Weirford_House_Upstairs/scripts.pory"
	face_up
	step_end

Weirford_House_Upstairs_FirstClue_Text_0:
# 22 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "The painting has been slashed. There\n"
	.string "are fragments of the canvas scattered\l"
	.string "on the floor.$"

Weirford_House_Upstairs_SecondClue_Text_0:
# 33 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "The bed feels strangely warm, as if\n"
	.string "someone has been lying in it recently.$"

Weirford_House_Upstairs_ThirdClue_Text_0:
# 45 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "The TV screen is cracked, but you can\n"
	.string "hear the faint sound of static coming\l"
	.string "from it.$"

Weirford_House_Upstairs_ThirdClue_Text_1:
# 50 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "Dark fabric suddenly bursts through\n"
	.string "the shattered glass, reaching out\l"
	.string "towards you!$"

Weirford_House_Upstairs_ThirdClue_Text_2:
# 59 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "Was that...a doll?$"

Weirford_House_SealDoorAfterFirstClueFound_Text_0:
# 78 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "Somewhere downstairs, a lock clicks\n"
	.string "shut.$"

Weirford_House_Upstairs_CheckClues_Text_0:
# 93 "data/maps/Weirford_House_Upstairs/scripts.pory"
	.string "The temperature suddenly drops, your\n"
	.string "breath misting in the cold air. A faint\l"
	.string "whisper drifts from the stairway...$"
