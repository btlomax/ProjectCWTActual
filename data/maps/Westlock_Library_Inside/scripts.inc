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
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 55 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_LookLeft
# 56 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4, MSGBOX_DEFAULT
# 62 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
# 63 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 65 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5, MSGBOX_YESNO
# 67 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_6
# 75 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7, MSGBOX_DEFAULT
Westlock_Library_Inside_EventScripts_MeetProfLarch_5:
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
Westlock_Library_Inside_EventScripts_MeetProfLarch_10:
# 82 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_11
# 92 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10, MSGBOX_DEFAULT
# 94 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11, MSGBOX_DEFAULT
# 104 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 105 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 106 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 107 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 109 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13, MSGBOX_DEFAULT
# 126 "data/maps/Westlock_Library_Inside/scripts.pory"
	call Westlock_Library_Inside_EventScripts_ProfLarchExit
# 127 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
# 128 "data/maps/Westlock_Library_Inside/scripts.pory"
	removeobject LOCALID_PROF_LARCH
# 129 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_WESTLOCK_LIBRARY_STATE, 1
# 130 "data/maps/Westlock_Library_Inside/scripts.pory"
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
# 69 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6, MSGBOX_DEFAULT
# 71 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_AGREE_WITH_PROF_LIBRARY
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_5

Westlock_Library_Inside_EventScripts_MeetProfLarch_11:
# 84 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9, MSGBOX_DEFAULT
# 88 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_10


Westlock_Library_Inside_EventScripts_ProfLarchExit::
# 135 "data/maps/Westlock_Library_Inside/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 137 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Westlock_Library_Inside_EventScripts_ProfLarchExit_2
# 144 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerEastOrWest
# 145 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
Westlock_Library_Inside_EventScripts_ProfLarchExit_1:
	return

Westlock_Library_Inside_EventScripts_ProfLarchExit_2:
# 139 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerNorth
# 140 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
	goto Westlock_Library_Inside_EventScripts_ProfLarchExit_1


# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerNorth:
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 162 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 163 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 163 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 163 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 165 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 166 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 166 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 166 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 169 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerEastOrWest:
# 171 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 172 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 174 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 175 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 175 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 175 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 178 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookLeft:
# 179 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_left
	step_end

# 182 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookDown:
# 183 "data/maps/Westlock_Library_Inside/scripts.pory"
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
	.string "You do seem familiar...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3:
# 41 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "A passing resemblance to...\n"
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

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4:
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I have been studying the Pokémon of\n"
	.string "this region for nearly five decades,\l"
	.string "and still they surprise me.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5:
# 65 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Wondrous creatures, aren't they?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6:
# 69 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Correct answer! You and I will get\n"
	.string "on famously, I'm sure.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7:
# 75 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I see. Well, I am sure you will\n"
	.string "come to appreciate them in time.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8:
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Will you allow me to see\n"
	.string "your Pokémon?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9:
# 84 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I assure you, I have your best\n"
	.string "interests in mind.\p"
	.string "Now please, show me your Pokémon.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10:
# 92 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Gah!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11:
# 94 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "A r-rarer species, uh, in these\n"
	.string "p-parts, indeed y-yes!\p"
	.string "Where, did you, erm, f-find it?\p"
	.string "On the c-canal, y-you say!\p"
	.string "I should go and, uh, look myself,\n"
	.string "yes!\p"
	.string "Who knows what other, uh, rare\n"
	.string "species may be in the area, heh...\p"
	.string "...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12:
# 109 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "GOODNESS ME, would you look at the\n"
	.string "time! I must be off, yes, yes,\l"
	.string "I must be off!\p"
	.string "Nocturnal Pokémon are much too\n"
	.string "unpredictable for an old scholar\l"
	.string "like myself, heh...\p"
	.string "...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13:
# 116 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I was not expecting your arrival,\l"
	.string "but...even chaotic events can be\l"
	.string "fortuitous, yes, yes...\p"
	.string "Come and visit me at the lab\n"
	.string "in Alderbrook Town.\p"
	.string "We have much to discuss, and I\n"
	.string "would like to see your Pokémon again.\l"
	.string "In a more, controlled environment...\p"
	.string "Until then, {PLAYER}, I bid you adieu!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 151 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man! You snuck up\non me, didn't you?\pMy head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 155 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady! You snuck up\non me, didn't you?\pMy head was buried in that book.$"
