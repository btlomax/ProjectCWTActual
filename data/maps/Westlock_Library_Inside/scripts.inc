Westlock_Library_Inside_MapScripts::
# 2 "data/maps/Westlock_Library_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Westlock_Library_Inside_MapScripts_OnTransition
	.byte 0


Westlock_Library_Inside_MapScripts_OnTransition::
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 1
	goto_if_eq Westlock_Library_Inside_MapScripts_OnTransition_2
Westlock_Library_Inside_MapScripts_OnTransition_1:
	end

Westlock_Library_Inside_MapScripts_OnTransition_2:
# 7 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
	goto Westlock_Library_Inside_MapScripts_OnTransition_1


Westlock_Library_Inside_EventScripts_MeetProfLarch::
# 15 "data/maps/Westlock_Library_Inside/scripts.pory"
	lock
# 17 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 22 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 60
# 24 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
# 25 "data/maps/Westlock_Library_Inside/scripts.pory"
	checkplayergender
# 27 "data/maps/Westlock_Library_Inside/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 0, Westlock_Library_Inside_EventScripts_MeetProfLarch_3
# 31 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 1, Westlock_Library_Inside_EventScripts_MeetProfLarch_4
Westlock_Library_Inside_EventScripts_MeetProfLarch_1:
# 35 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 50 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_LookLeft
# 51 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 53 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4, MSGBOX_DEFAULT
# 57 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_LookDown
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 60 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5, MSGBOX_YESNO
# 62 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_6
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7, MSGBOX_DEFAULT
Westlock_Library_Inside_EventScripts_MeetProfLarch_5:
# 74 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
Westlock_Library_Inside_EventScripts_MeetProfLarch_10:
# 77 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_11
# 87 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10, MSGBOX_DEFAULT
# 89 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11, MSGBOX_DEFAULT
# 99 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 101 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 102 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 104 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12, MSGBOX_DEFAULT
# 121 "data/maps/Westlock_Library_Inside/scripts.pory"
	call Westlock_Library_Inside_EventScripts_ProfLarchExit
# 122 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
# 123 "data/maps/Westlock_Library_Inside/scripts.pory"
	removeobject LOCALID_PROF_LARCH
# 124 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_WESTLOCK_LIBRARY_STATE, 1
# 125 "data/maps/Westlock_Library_Inside/scripts.pory"
	release
	return

Westlock_Library_Inside_EventScripts_MeetProfLarch_3:
# 30 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Male, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_4:
# 32 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Female, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_6:
# 64 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6, MSGBOX_DEFAULT
# 66 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_AGREE_WITH_PROF_LIBRARY
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_5

Westlock_Library_Inside_EventScripts_MeetProfLarch_11:
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9, MSGBOX_DEFAULT
# 83 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_10


Westlock_Library_Inside_EventScripts_ProfLarchExit::
# 130 "data/maps/Westlock_Library_Inside/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 132 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Westlock_Library_Inside_EventScripts_ProfLarchExit_2
# 139 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerEastOrWest
# 140 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
Westlock_Library_Inside_EventScripts_ProfLarchExit_1:
	return

Westlock_Library_Inside_EventScripts_ProfLarchExit_2:
# 134 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerNorth
# 135 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
	goto Westlock_Library_Inside_EventScripts_ProfLarchExit_1


# 154 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerNorth:
# 156 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 156 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 157 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 158 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 158 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 158 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 159 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 160 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 161 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerEastOrWest:
# 166 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 167 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 168 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 168 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 168 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 168 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 169 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 170 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookLeft:
# 174 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_left
	step_end

# 177 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_LookDown:
# 178 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_in_place_down
	step_end

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 17 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "This room is far too humid for these\nbooks. I can barely make out the text...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1:
# 18 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "...'And when the great storm broke,the\namber force grew so intense that th-$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_2:
# 35 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "You do seem familiar...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3:
# 36 "data/maps/Westlock_Library_Inside/scripts.pory"
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
# 53 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I have been studying the Pokémon of\n"
	.string "this region for nearly five decades,\l"
	.string "and still they surprise me.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5:
# 60 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Wondrous creatures, aren't they?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6:
# 64 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Correct answer! You and I will get\n"
	.string "on famously, I'm sure.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7:
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I see. Well, I am sure you will\n"
	.string "come to appreciate them in time.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8:
# 74 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Will you allow me to see\n"
	.string "your Pokémon?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9:
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I assure you, I have your best\n"
	.string "interests in mind.\p"
	.string "Now please, show me your Pokémon.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10:
# 87 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Gah!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11:
# 89 "data/maps/Westlock_Library_Inside/scripts.pory"
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
# 104 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "GOODNESS ME, would you look at the\n"
	.string "time! I must be off, yes, yes,\l"
	.string "I must be off!\p"
	.string "Nocturnal Pokémon are much too\n"
	.string "unpredictable for an old scholar\l"
	.string "like myself, heh...\p"
	.string "I was not expecting your arrival,\n"
	.string "but...even chaotic events can be\n"
	.string "fortuitous, yes, yes...\p"
	.string "Come and visit me at the lab\n"
	.string "in Alderbrook Town.\p"
	.string "We have much to discuss, and I\n"
	.string "would like to see your Pokémon again.\n"
	.string "In a more, controlled environment...\p"
	.string "Until then, {PLAYER},\n"
	.string "I bid you adieu!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 146 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 150 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"
