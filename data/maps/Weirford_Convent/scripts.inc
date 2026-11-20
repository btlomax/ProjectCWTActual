Weirford_Convent_MapScripts::
# 2 "data/maps/Weirford_Convent/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Convent_MapScripts_OnTransition
	.byte 0


Weirford_Convent_MapScripts_OnTransition::
# 7 "data/maps/Weirford_Convent/scripts.pory"
	compare VAR_QUEST_A_NEW_BEGINNING_STATE, QUEST_A_NEW_BEGINNING_STAGE_WEIRFORD_CONVENT
	goto_if_eq Weirford_Convent_MapScripts_OnTransition_2
# 14 "data/maps/Weirford_Convent/scripts.pory"
	setflag FLAG_WEIRFORD_CONVENT_LIN
# 15 "data/maps/Weirford_Convent/scripts.pory"
	removeobject LOCALID_WEIRFORD_CONVENT_LIN
Weirford_Convent_MapScripts_OnTransition_1:
	end

Weirford_Convent_MapScripts_OnTransition_2:
# 9 "data/maps/Weirford_Convent/scripts.pory"
	clearflag FLAG_WEIRFORD_CONVENT_LIN
# 10 "data/maps/Weirford_Convent/scripts.pory"
	addobject LOCALID_WEIRFORD_CONVENT_LIN
	goto Weirford_Convent_MapScripts_OnTransition_1


Weirford_Convent_Abbess::
# 23 "data/maps/Weirford_Convent/scripts.pory"
	lock
# 25 "data/maps/Weirford_Convent/scripts.pory"
	compare VAR_QUEST_A_NEW_BEGINNING_STATE, QUEST_A_NEW_BEGINNING_STAGE_WEIRFORD_CONVENT
	goto_if_eq Weirford_Convent_Abbess_2
# 97 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_13, MSGBOX_DEFAULT
# 100 "data/maps/Weirford_Convent/scripts.pory"
	release
	end

Weirford_Convent_Abbess_2:
# 27 "data/maps/Weirford_Convent/scripts.pory"
	faceplayer
# 28 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Weirford_Convent_Lin_MovementLeft
# 32 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 34 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Weirford_Convent_Lin_MovementReturn
# 37 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 39 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_3, MSGBOX_DEFAULT
# 41 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_4, MSGBOX_DEFAULT
# 50 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_5, MSGBOX_DEFAULT
# 51 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Weirford_Convent_Lin_MovementReturn
# 52 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 53 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_6, MSGBOX_AUTOCLOSE
# 55 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_7, MSGBOX_AUTOCLOSE
# 56 "data/maps/Weirford_Convent/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Common_Movement_QuestionMark
# 58 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 59 "data/maps/Weirford_Convent/scripts.pory"
	delay 30
# 61 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_8, MSGBOX_AUTOCLOSE
# 65 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_9, MSGBOX_DEFAULT
# 70 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_10, MSGBOX_AUTOCLOSE
# 74 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Weirford_Convent_Lin_MovementLeave
# 75 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 76 "data/maps/Weirford_Convent/scripts.pory"
	delay 30
# 77 "data/maps/Weirford_Convent/scripts.pory"
	setflag FLAG_WEIRFORD_CONVENT_LIN
# 78 "data/maps/Weirford_Convent/scripts.pory"
	removeobject LOCALID_WEIRFORD_CONVENT_LIN
# 80 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_11, MSGBOX_DEFAULT
# 83 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Abbess_Text_12, MSGBOX_DEFAULT
# 86 "data/maps/Weirford_Convent/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_BEGINNING
# 87 "data/maps/Weirford_Convent/scripts.pory"
	setvar VAR_0x8005, QUEST_A_NEW_BEGINNING_STAGE_BEAT_GYM_TWO
# 88 "data/maps/Weirford_Convent/scripts.pory"
	special Quest_SetStage
# 90 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_ABBESS, Weirford_Convent_Abbess_Turn
# 91 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_ABBESS
# 93 "data/maps/Weirford_Convent/scripts.pory"
	release
	end


Weirford_Convent_Lin::
# 106 "data/maps/Weirford_Convent/scripts.pory"
	lock
# 107 "data/maps/Weirford_Convent/scripts.pory"
	faceplayer
# 109 "data/maps/Weirford_Convent/scripts.pory"
	msgbox Weirford_Convent_Lin_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/Weirford_Convent/scripts.pory"
	applymovement LOCALID_WEIRFORD_CONVENT_LIN, Weirford_Convent_Lin_MovementDown
# 112 "data/maps/Weirford_Convent/scripts.pory"
	waitmovement LOCALID_WEIRFORD_CONVENT_LIN
# 114 "data/maps/Weirford_Convent/scripts.pory"
	release
	end


# 118 "data/maps/Weirford_Convent/scripts.pory"
Weirford_Convent_Lin_MovementLeft:
# 120 "data/maps/Weirford_Convent/scripts.pory"
	face_left
	step_end

# 123 "data/maps/Weirford_Convent/scripts.pory"
Weirford_Convent_Lin_MovementReturn:
# 125 "data/maps/Weirford_Convent/scripts.pory"
	face_down
	step_end

# 128 "data/maps/Weirford_Convent/scripts.pory"
Weirford_Convent_Lin_MovementDown:
# 130 "data/maps/Weirford_Convent/scripts.pory"
	face_down
	step_end

# 133 "data/maps/Weirford_Convent/scripts.pory"
Weirford_Convent_Lin_MovementLeave:
# 135 "data/maps/Weirford_Convent/scripts.pory"
	face_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
# 136 "data/maps/Weirford_Convent/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/Weirford_Convent/scripts.pory"
Weirford_Convent_Abbess_Turn:
# 141 "data/maps/Weirford_Convent/scripts.pory"
	face_up
	step_end

Weirford_Convent_Abbess_Text_0:
# 28 "data/maps/Weirford_Convent/scripts.pory"
	.string "{FONT_NARROW}The old woman before you is wizened and\n"
	.string "frail, her age evident in every line of\l"
	.string "her face. Her richly adorned robes hang\l"
	.string "loosely on her frame, but her eyes are\l"
	.string "alert and sharp.{FONT_NORMAL}/p Lin, is this the child\l"
	.string "you spoke of?$"

Weirford_Convent_Abbess_Text_1:
# 34 "data/maps/Weirford_Convent/scripts.pory"
	.string "LIN: Yes, Abbess. This is the one.$"

Weirford_Convent_Abbess_Text_2:
# 39 "data/maps/Weirford_Convent/scripts.pory"
	.string "{FONT_NARROW}The Abbess studies you carefully, her\n"
	.string "eyes sharp and discerning, taking in\l"
	.string "every detail of your appearance.{FONT_NORMAL}\p"
	.string "$"

Weirford_Convent_Abbess_Text_3:
# 40 "data/maps/Weirford_Convent/scripts.pory"
	.string "{FONT_NARROW}Her gaze lingers on you for a moment\n"
	.string "longer, before she seemingly makes a\l"
	.string "decision.{FONT_NORMAL}\p"
	.string "$"

Weirford_Convent_Abbess_Text_4:
# 41 "data/maps/Weirford_Convent/scripts.pory"
	.string "I see. Who are your parents, child?\p"
	.string "...\p"
	.string "You don't know? Your grandmother takes\n"
	.string "care of you? What is her name?\p"
	.string "...\p"
	.string "Rhona... that name wakes something in\n"
	.string "the depths of my memory, but I cannot\l"
	.string "quite place it.\p"
	.string "No matter; old roots still run deep\n"
	.string "under forgotten soil. A name may fade,\l"
	.string "but blood never forgets, it merely...\l"
	.string "waits.\p"
	.string "The soil has been still for an age, child.\n"
	.string "We shall see what stirs beneath it now.\l"
	.string "...\p"
	.string "$"

Weirford_Convent_Abbess_Text_5:
# 50 "data/maps/Weirford_Convent/scripts.pory"
	.string "Lin?$"

Weirford_Convent_Abbess_Text_6:
# 53 "data/maps/Weirford_Convent/scripts.pory"
	.string "LIN: Yes, Abbess?$"

Weirford_Convent_Abbess_Text_7:
# 55 "data/maps/Weirford_Convent/scripts.pory"
	.string "Take your leave of the Convent. Travel\n"
	.string "the road ahead, observe the trials,\l"
	.string "offer your counsel where it is needed.$"

Weirford_Convent_Abbess_Text_8:
# 62 "data/maps/Weirford_Convent/scripts.pory"
	.string "LIN: Abbess? Surely you don't think...\p"
	.string "With respect... they barely scraped\n"
	.string "past the first Gym. Any rookie could\l"
	.string "manage as much with a bit of luck, Milo\l"
	.string "isn't as formidable as-$"

Weirford_Convent_Abbess_Text_9:
# 66 "data/maps/Weirford_Convent/scripts.pory"
	.string "Luck is a convenient name for things we\n"
	.string "do not yet understand, Lin.\p"
	.string "You have spent too long behind stone\n"
	.string "walls reading of the past. Go see what\l"
	.string "is unfolding beyond them. Go pack a\l"
	.string "clean robe while you're at it; you still\l"
	.string "smell like damp moss from your little\l"
	.string "excursion in the forest. Now get on with\l"
	.string "it, the silence when you leave is one of\l"
	.string "my few remaining pleasures.$"

Weirford_Convent_Abbess_Text_10:
# 71 "data/maps/Weirford_Convent/scripts.pory"
	.string "LIN: ...As you command, Abbess.$"

Weirford_Convent_Abbess_Text_11:
# 80 "data/maps/Weirford_Convent/scripts.pory"
	.string "{FONT_NARROW}The Abbess waits for the sound of Lin's\n"
	.string "departing footsteps to fade, before\l"
	.string "turning her gaze back on to you{FONT_NORMAL}$"

Weirford_Convent_Abbess_Text_12:
# 83 "data/maps/Weirford_Convent/scripts.pory"
	.string "Ahhhh much better. Now then child, do\n"
	.string "you know where to go next? Go west\l"
	.string "back along Route 3, make your way\l"
	.string "through the mountain pass until you\l"
	.string "reach the coastal town.\p"
	.string "The road ahead will test your resolve,\n"
	.string "your character and your spirit. If you\l"
	.string "truly are what you appear, you will\l"
	.string "prevail. If not, then the soil will simply\l"
	.string "remain, undisturbed.$"

Weirford_Convent_Abbess_Text_13:
# 97 "data/maps/Weirford_Convent/scripts.pory"
	.string "{FONT_NARROW}The old woman is seemingly locked in a\n"
	.string "trance, her eyes focused on the tablet\l"
	.string "in front of her. She does not seem to\l"
	.string "notice your presence.{FONT_NORMAL}\p"
	.string "$"

Weirford_Convent_Lin_Text_0:
# 109 "data/maps/Weirford_Convent/scripts.pory"
	.string "The Abbess wants to speak with you.$"
