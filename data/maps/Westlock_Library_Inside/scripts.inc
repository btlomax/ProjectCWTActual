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
	applymovement LOCALID_PROF_LARCH, Movement_Larch_LookLeft
# 56 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 63 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
# 64 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
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
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10, MSGBOX_DEFAULT
# 94 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11, MSGBOX_DEFAULT
# 103 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 104 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 105 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 106 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 108 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12, MSGBOX_DEFAULT
# 124 "data/maps/Westlock_Library_Inside/scripts.pory"
	call Westlock_Library_Inside_EventScripts_ProfLarchExit
# 125 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
# 126 "data/maps/Westlock_Library_Inside/scripts.pory"
	removeobject LOCALID_PROF_LARCH
# 127 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_WESTLOCK_LIBRARY_STATE, 1
# 128 "data/maps/Westlock_Library_Inside/scripts.pory"
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
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9, MSGBOX_YESNO
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_10


Westlock_Library_Inside_EventScripts_ProfLarchExit::
# 133 "data/maps/Westlock_Library_Inside/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 135 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Westlock_Library_Inside_EventScripts_ProfLarchExit_2
# 142 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerEastOrWest
# 143 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
Westlock_Library_Inside_EventScripts_ProfLarchExit_1:
	return

Westlock_Library_Inside_EventScripts_ProfLarchExit_2:
# 137 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerNorth
# 138 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
	goto Westlock_Library_Inside_EventScripts_ProfLarchExit_1


# 157 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerNorth:
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 160 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 162 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 162 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 162 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 162 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 163 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerEastOrWest:
# 169 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 171 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 171 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 171 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 171 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 176 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookLeft:
# 177 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_left
	step_end

# 180 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookDown:
# 181 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_down
	step_end

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 22 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "This room is far too humid for these\nbooks. I can barely make out the text...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1:
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "...'And when the great storm broke,the\namber force grew so intense that th-$"

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
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I have been studying the Pokémon of\n"
	.string "this region for nearly five decades,\l"
	.string "there are always new mysteries to be\n"
	.string "solved...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4:
# 66 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Wondrous creatures, aren't they?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5:
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Correct answer! You and I will get\n"
	.string "on famously, I'm sure.$"

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
# 88 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Will you allow me to see\n"
	.string "your Pokémon?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10:
# 92 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Gah!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11:
# 94 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "A r-rarer species, uh, in these p-parts,\n"
	.string "indeed y-yes!\p"
	.string "Where, did you, erm, f-find it?\p"
	.string "On the c-canal, y-you say!\p"
	.string "I should go and, uh, look myself, yes, yes!\p"
	.string "Who knows what other, uh, rare\n"
	.string "species may be in the area, heh...\p"
	.string "...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12:
# 108 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "GOODNESS ME, would you look at the\n"
	.string "time! I must be off, yes, yes, I must be off!\p"
	.string "Nocturnal Pokémon are much too\n"
	.string "unpredictable for an old scholar like\l"
	.string "myself, heh...\p"
	.string "...\p"
	.string "I was not expecting your arrival, but...\n"
	.string "Even chaotic events can be\l"
	.string "fortuitous, yes, yes...\p"
	.string "Come and visit me at the lab in\n"
	.string "Alderbrook Town.\p"
	.string "We have much to discuss, and I would\n"
	.string "like to see your Pokémon again.\l"
	.string "In a more, controlled environment...\p"
	.string "Until then, {PLAYER}, I bid you adieu!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 149 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man! You snuck up\non me, didn't you?\pMy head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 153 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady! You snuck up\non me, didn't you?\pMy head was buried in that book.$"
