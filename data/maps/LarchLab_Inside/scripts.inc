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
# 57 "data/maps/LarchLab_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/LarchLab_Inside/scripts.pory"
	waitfanfare
# 60 "data/maps/LarchLab_Inside/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 62 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_3, MSGBOX_DEFAULT
# 68 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_4, MSGBOX_DEFAULT
# 72 "data/maps/LarchLab_Inside/scripts.pory"
	additem ITEM_POKE_BALL, 5
# 73 "data/maps/LarchLab_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_5, MSGBOX_DEFAULT
# 75 "data/maps/LarchLab_Inside/scripts.pory"
	waitfanfare
# 77 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_6, MSGBOX_DEFAULT
# 85 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorLarch_2:
# 23 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end


LarchLab_Inside_MapScripts_WallNote::
# 90 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_WallNote_Text_0, MSGBOX_SIGN
	end


LarchLab_Inside_MapScripts_ProfessorAide::
# 95 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 96 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 98 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 0
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_2
# 112 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_3
LarchLab_Inside_MapScripts_ProfessorAide_1:
# 120 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorAide_2:
# 100 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_0, MSGBOX_YESNO
# 101 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_5
# 107 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_2, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1

LarchLab_Inside_MapScripts_ProfessorAide_5:
# 103 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_1, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1


LarchLab_Inside_MapScripts_ProfessorLarch_Text_0:
# 23 "data/maps/LarchLab_Inside/scripts.pory"
	.string "$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_1:
# 29 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah! {PLAYER}, welcome to my humble laboratory!\p"
	.string "That's Derek over there, he's my\n"
	.string "assistant.\p"
	.string "Say hello Derek!\p"
	.string "Derek: Hello!\p"
	.string "We're over here, Derek.\p"
	.string "Derek: Oh...\p"
	.string "...\p"
	.string "Ah, he's a good lad.\p"
	.string "...\p"
	.string "Now, {PLAYER}. Congratulations on\n"
	.string "your first Pokémon!\p"
	.string "A rather unusual first Pokémon, too.\n"
	.string "You certainly have a talent for finding\l"
	.string "interesting things.\p"
	.string "Pokémon are full of surprises. The more\n"
	.string "you travel, the more you will meet.\p"
	.string "And unless you have a truly remarkable\n"
	.string "memory, you will eventually lose track\l"
	.string "of which one had the ALARMING teeth.\p"
	.string "That is where this comes in.\p"
	.string "It is a Pokédex: a small device that\n"
	.string "records information about the Pokémon\l"
	.string "you see and catch.\p"
	.string "Think of it as a field notebook that\n"
	.string "does all the writing for you.\p$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_2:
# 58 "data/maps/LarchLab_Inside/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_3:
# 63 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Use it well, {PLAYER}. And do let me\n"
	.string "know if you find anything else unusual\l"
	.string "along that canal.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_4:
# 69 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Before you go, take these POKé BALLS.\n"
	.string "You will need them for your journey.$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_5:
# 74 "data/maps/LarchLab_Inside/scripts.pory"
	.string "{PLAYER} received 5 POKé BALLS!$"

LarchLab_Inside_MapScripts_ProfessorLarch_Text_6:
# 78 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Now, go and see your grandmother.\p"
	.string "Tell Rhona that... hmm.\p"
	.string "Tell her the sun and the moon will\n"
	.string "soon cross paths.\p"
	.string "She will know what I mean.\p$"

LarchLab_Inside_MapScripts_WallNote_Text_0:
# 90 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Gone to Westlock Village - AOPL$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_0:
# 100 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Are you looking for the Professor?$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_1:
# 103 "data/maps/LarchLab_Inside/scripts.pory"
	.string "I'm afraid he's not here right now.\pHe has been acting a bit strange recently...\nI'm not sure when he'll be back.$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_2:
# 107 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah, well enjoy your visit to the lab then!$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_3:
# 113 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Hello, I'm the Professor's aide!\p"
	.string "I mostly help with research, but he\n"
	.string "has been sending me on a lot of errands\l"
	.string "lately...I should talk to him about that...\p$"
