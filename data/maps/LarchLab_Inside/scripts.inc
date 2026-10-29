LarchLab_Inside_MapScripts::
# 2 "data/maps/LarchLab_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LarchLab_Inside_MapScripts_Transition
	.byte 0


LarchLab_Inside_MapScripts_Transition::
# 6 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 0
	goto_if_eq LarchLab_Inside_MapScripts_Transition_1
# 12 "data/maps/LarchLab_Inside/scripts.pory"
	clearflag FLAG_HIDE_PROF_LARCH
# 13 "data/maps/LarchLab_Inside/scripts.pory"
	addobject LOCALID_PROF_LARCH_LAB
	return

LarchLab_Inside_MapScripts_Transition_1:
# 8 "data/maps/LarchLab_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
	return


LarchLab_Inside_MapScripts_ProfessorLarch::
# 18 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 19 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 21 "data/maps/LarchLab_Inside/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, LarchLab_Inside_MapScripts_ProfessorLarch_2
# 28 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_2, MSGBOX_DEFAULT
# 30 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_3, MSGBOX_DEFAULT
# 31 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_4, MSGBOX_DEFAULT
# 32 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_6, MSGBOX_DEFAULT
# 46 "data/maps/LarchLab_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_7, MSGBOX_DEFAULT
# 48 "data/maps/LarchLab_Inside/scripts.pory"
	waitfanfare
# 49 "data/maps/LarchLab_Inside/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 51 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_8, MSGBOX_DEFAULT
# 53 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_9, MSGBOX_DEFAULT
# 54 "data/maps/LarchLab_Inside/scripts.pory"
	additem ITEM_POKE_BALL, 5
# 55 "data/maps/LarchLab_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_10, MSGBOX_DEFAULT
# 57 "data/maps/LarchLab_Inside/scripts.pory"
	waitfanfare
# 59 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_11, MSGBOX_DEFAULT
# 66 "data/maps/LarchLab_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 3
# 68 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorLarch_2:
# 23 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end


LarchLab_Inside_MapScripts_WallNote::
# 73 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_WallNote_Text_0, MSGBOX_SIGN
	end


LarchLab_Inside_MapScripts_ProfessorAide::
# 78 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 79 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 81 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 0
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_2
# 95 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_3, MSGBOX_DEFAULT
LarchLab_Inside_MapScripts_ProfessorAide_1:
# 103 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorAide_2:
# 83 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_0, MSGBOX_YESNO
# 84 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_5
# 90 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_2, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1

LarchLab_Inside_MapScripts_ProfessorAide_5:
# 86 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_1, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1


LarchLab_Inside_MapScripts_ProfessorLarch_Text_0:
# 23 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Good luck on your journey, {PLAYER}.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_1:
# 28 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah! {PLAYER}, welcome to my humble\n"
	.string "laboratory!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_2:
# 29 "data/maps/LarchLab_Inside/scripts.pory"
	.string "That's Derek over there, he's my\n"
	.string "assistant.\p"
	.string "Say hello, Derek!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_3:
# 30 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Derek: Hello!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_4:
# 31 "data/maps/LarchLab_Inside/scripts.pory"
	.string "We're over here, Derek.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_5:
# 32 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Derek: Oh...\p"
	.string "...$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_6:
# 35 "data/maps/LarchLab_Inside/scripts.pory"
	.string "...\p"
	.string "Ah, he's a good lad.\p"
	.string "...\p"
	.string "Now, {PLAYER}. Congratulations on your\n"
	.string "first Pokémon!\p"
	.string "A rather unusual first Pokémon, too.\n"
	.string "You certainly have a talent for finding\l"
	.string "interesting things...\p"
	.string "Pokémon are full of surprises. The more\n"
	.string "you travel, the more you will meet, and\l"
	.string "unless you have a truly remarkable\l"
	.string "memory, you will eventually lose track\l"
	.string "of which one had the ALARMING teeth.\p"
	.string "That is where this comes in.\p"
	.string "It is a Pokédex: a device that records\n"
	.string "information about the Pokémon you see\l"
	.string "and catch.\p"
	.string "Think of it as a field notebook that\n"
	.string "does all the writing for you.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_7:
# 47 "data/maps/LarchLab_Inside/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_8:
# 51 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Use it well, {PLAYER}. And do let me know\n"
	.string "if you find anything else... unusual\l"
	.string "along that canal.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_9:
# 53 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Before you go, take these POKé BALLS.\n"
	.string "You will need them for your journey.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_10:
# 56 "data/maps/LarchLab_Inside/scripts.pory"
	.string "{PLAYER} received 5 POKé BALLS!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_11:
# 60 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Now, go and see your grandmother.\p"
	.string "Tell Rhona that... well, just tell her\n"
	.string "that twenty years wasn't long enough..\l"
	.string "Tell her the old ways are stirring again.\p"
	.string "She will know what I mean.\p"
	.string "$"

LarchLab_Inside_MapScripts_WallNote_Text_0:
# 73 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Gone to Westlock Village - AOPL$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_0:
# 83 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Are you looking for the Professor?$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_1:
# 86 "data/maps/LarchLab_Inside/scripts.pory"
	.string "I'm afraid he's not here right now.\p"
	.string "He has been acting a bit strange\n"
	.string "recently... I'm not sure when he'll be\l"
	.string "back.$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_2:
# 90 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah, well enjoy your visit to the lab\n"
	.string "then!$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_3:
# 96 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Hello, I'm the Professor's aide!\p"
	.string "I mostly help with research, but he has\n"
	.string "been sending me on a lot of errands\l"
	.string "lately...I should talk to him about\l"
	.string "that...\p"
	.string "$"
