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
# 32 "data/maps/Westlock_Library_Inside/scripts.pory"
	call Westlock_Library_Inside_EventScripts_ProfLarchExit
# 33 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
# 34 "data/maps/Westlock_Library_Inside/scripts.pory"
	removeobject LOCALID_PROF_LARCH
# 35 "data/maps/Westlock_Library_Inside/scripts.pory"
	setvar VAR_WESTLOCK_LIBRARY_STATE, 1
# 36 "data/maps/Westlock_Library_Inside/scripts.pory"
	release
	return


Westlock_Library_Inside_EventScripts_ProfLarchExit::
# 41 "data/maps/Westlock_Library_Inside/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 43 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Westlock_Library_Inside_EventScripts_ProfLarchExit_2
# 50 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerEastOrWest
# 51 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
Westlock_Library_Inside_EventScripts_ProfLarchExit_1:
	return

Westlock_Library_Inside_EventScripts_ProfLarchExit_2:
# 45 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Movement_Larch_Exit_PlayerNorth
# 46 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
	goto Westlock_Library_Inside_EventScripts_ProfLarchExit_1


# 65 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerNorth:
# 67 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 67 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 68 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 69 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 69 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 69 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 70 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 71 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 72 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 72 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 72 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit_PlayerEastOrWest:
# 77 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 78 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 78 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 78 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 78 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 78 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_right
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 79 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 80 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_left
# 81 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 81 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
# 81 "data/maps/Westlock_Library_Inside/scripts.pory"
	walk_down
	step_end

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 17 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "You do seem familiar... A passing\n"
	.string "resemblance to...\p"
	.string "...Erm...\p"
	.string "Alas, the thought has deserted me.\p"
	.string "Old age catching up to me, I suppose.\n"
	.string "Not quite as sharp as I used to be!\p"
	.string "Now, before I forget my manners,\n"
	.string "allow me to introduce myself.\p"
	.string "I am Professor Larch, the regional\n"
	.string "Pokémon Professor.\p"
	.string "...\p"
	.string "Ah! {PLAYER}! Wonderful to meet you!\p"
	.string "I do recognize you now, your grandmother \n"
	.string "and I go back many years.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 57 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 61 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"
