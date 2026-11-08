Westlock_Library_Inside_MapScripts::
# 2 "data/maps/Westlock_Library_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Westlock_Library_Inside_MapScripts_OnTransition
	.byte 0


Westlock_Library_Inside_MapScripts_OnTransition::
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 1
	goto_if_eq Westlock_Library_Inside_MapScripts_OnTransition_2
# 11 "data/maps/Westlock_Library_Inside/scripts.pory"
	clearflag FLAG_HIDE_PROF_LARCH
# 12 "data/maps/Westlock_Library_Inside/scripts.pory"
	addobject LOCALID_PROF_LARCH
Westlock_Library_Inside_MapScripts_OnTransition_1:
	end

Westlock_Library_Inside_MapScripts_OnTransition_2:
# 7 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
	goto Westlock_Library_Inside_MapScripts_OnTransition_1


Westlock_Library_Inside_EventScripts_MeetProfLarch::
# 20 "data/maps/Westlock_Library_Inside/scripts.pory"
	lock
# 22 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 26 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 27 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 28 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 60
# 29 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
# 30 "data/maps/Westlock_Library_Inside/scripts.pory"
	checkplayergender
# 32 "data/maps/Westlock_Library_Inside/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 0, Westlock_Library_Inside_EventScripts_MeetProfLarch_3
# 36 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 1, Westlock_Library_Inside_EventScripts_MeetProfLarch_4
Westlock_Library_Inside_EventScripts_MeetProfLarch_1:
# 40 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_2, MSGBOX_DEFAULT
# 55 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4, MSGBOX_YESNO
# 68 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_6
# 76 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6, MSGBOX_DEFAULT
Westlock_Library_Inside_EventScripts_MeetProfLarch_5:
# 80 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7, MSGBOX_YESNO
Westlock_Library_Inside_EventScripts_MeetProfLarch_10:
# 82 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_11
# 92 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9, MSGBOX_DEFAULT
# 93 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10, MSGBOX_DEFAULT
# 95 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11, MSGBOX_DEFAULT
# 105 "data/maps/Westlock_Library_Inside/scripts.pory"
	closemessage
# 107 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 109 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 110 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 112 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12, MSGBOX_DEFAULT
# 116 "data/maps/Westlock_Library_Inside/scripts.pory"
	closemessage
# 118 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 119 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 120 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 121 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 123 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13, MSGBOX_DEFAULT
# 133 "data/maps/Westlock_Library_Inside/scripts.pory"
	call Westlock_Library_Inside_EventScripts_ProfLarchExit
# 134 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
# 135 "data/maps/Westlock_Library_Inside/scripts.pory"
	removeobject LOCALID_PROF_LARCH
# 136 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_WESTLOCK_LIBRARY_STATE, 1
# 138 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 139 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_LARCH_POKEDEX
# 140 "data/maps/Westlock_Library_Inside/scripts.pory"
	special Quest_SetStage
# 142 "data/maps/Westlock_Library_Inside/scripts.pory"
	release
	return

Westlock_Library_Inside_EventScripts_MeetProfLarch_3:
# 35 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Male, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_4:
# 37 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Female, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_6:
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5, MSGBOX_DEFAULT
# 72 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_AGREE_WITH_PROF_LIBRARY
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_5

Westlock_Library_Inside_EventScripts_MeetProfLarch_11:
# 84 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_DEFAULT
# 88 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7, MSGBOX_YESNO
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_10


Westlock_Library_Inside_EventScripts_ProfLarchExit::
# 147 "data/maps/Westlock_Library_Inside/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 149 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Westlock_Library_Inside_EventScripts_ProfLarchExit_2
# 156 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerEastOrWest
# 157 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
Westlock_Library_Inside_EventScripts_ProfLarchExit_1:
	return

Westlock_Library_Inside_EventScripts_ProfLarchExit_2:
# 151 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerNorth
# 152 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
	goto Westlock_Library_Inside_EventScripts_ProfLarchExit_1


# 175 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerNorth:
# 177 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 177 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 178 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 179 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 179 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 179 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 180 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 180 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 180 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 180 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 181 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 182 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 182 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 182 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 185 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerEastOrWest:
# 187 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 188 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 188 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 188 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 188 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 188 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 189 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 189 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 189 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 189 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 190 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 191 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 191 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 191 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookLeft:
# 195 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_left
	step_end

# 198 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookDown:
# 199 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_down
	step_end

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 22 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "This room is far too humid for these\n"
	.string "books. I can barely make out the text...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1:
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "...'...un...t...mp...red, no m...rtal ve...l may\n"
	.string "h...ld the s...cr..d... and the s...lv..r...\l"
	.string "without fr...ctur..g...'\p"
	.string "$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_2:
# 40 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "You do seem familiar...\p"
	.string "Perhaps a passing resemblance to...\n"
	.string "...Erm...\p"
	.string "Alas, the thought has deserted me.\p"
	.string "Old age catching up to me, I suppose.\n"
	.string "Not quite as sharp as I used to be!\p"
	.string "Now, before I forget my manners, allow\n"
	.string "me to introduce myself.\p"
	.string "I am Professor Larch, the regional\n"
	.string "Pokémon Professor.\p"
	.string "...\p"
	.string "Ah! {PLAYER}! Wonderful to meet you!\p"
	.string "I do recognize you now, your\n"
	.string "grandmother and I go back many years.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3:
# 56 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I have spent most of my life studying\n"
	.string "the Pokémon of this region.\p"
	.string "You learn to trust what you can\n"
	.string "observe: a footprint, a call, the shape\l"
	.string "of a wing.\p"
	.string "But every so often, something appears\n"
	.string "that does not fit the pages.\p"
	.string "When that happens, you stop reading\n"
	.string "and start listening...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4:
# 66 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Fascinating creatures, aren't they?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5:
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Correct answer! You and I will get on\n"
	.string "famously, I'm sure.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6:
# 76 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I see. Well, I am sure you will come to\n"
	.string "appreciate them in time.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7:
# 80 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Will you allow me to see your Pokémon?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8:
# 84 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I assure you, I have your best\n"
	.string "interests in mind.\p"
	.string "Now please, show me your Pokémon.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9:
# 92 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Gah!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10:
# 93 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "{FONT_NARROW}Your new Pokemon waits patiently. The\n"
	.string "Professor hovers and fusses over it,\l"
	.string "but it is absolutely focused on you.{FONT_NORMAL}$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11:
# 96 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Good heavens...\p"
	.string "{PLAYER}... it's as if it has known you\n"
	.string "for years.\p"
	.string "A wild specimen shouldn't yield like\n"
	.string "this. Not to an untrained hand. It's\l"
	.string "almost... terrifyingly natural...\p"
	.string "Wh-where did you say you found this\n"
	.string "Pokémon?\p"
	.string "...\p"
	.string "The canal bank...?\p"
	.string "... Wait... this species... this is one of\n"
	.string "my...?\p"
	.string "$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12:
# 113 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "But that would mean... my satchel!\p"
	.string "I... I mean to say, I must have left it!\n"
	.string "Somewhere outside, yes!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13:
# 124 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "GOODNESS ME, would you look at the time!\n"
	.string "I must be off, yes, yes, I must be off!\p"
	.string "I have left some rather... sensitive\n"
	.string "apparatus unattended, yes!\p"
	.string "...\p"
	.string "Keep that Pokémon close, {PLAYER}. Do\n"
	.string "not let it out of your sight! Although\l"
	.string "truth be told, I'm not sure you could.\p"
	.string "Come and visit me at the lab in\n"
	.string "Alderbrook Town once I have, erm...\l"
	.string "retrieved my equipment.\p"
	.string "We have much to discuss, and I would\n"
	.string "like to inspect your Pokémon again. In a\l"
	.string "far more... controlled environment...\p"
	.string "Until then, {PLAYER}, I bid you adieu!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 163 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man! You snuck up\n"
	.string "on me, didn't you?\p"
	.string "My head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 169 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady! You snuck up\n"
	.string "on me, didn't you?\p"
	.string "My head was buried in that book.$"
