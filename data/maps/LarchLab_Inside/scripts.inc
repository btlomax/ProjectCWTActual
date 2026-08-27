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
	msgbox LarchLab_Inside_MapScripts_ProfessorLarch_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end


LarchLab_Inside_MapScripts_WallNote::
# 41 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_WallNote_Text_0, MSGBOX_SIGN
	end


LarchLab_Inside_MapScripts_ProfessorAide::
# 46 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 47 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 49 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 0
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_2
# 63 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_3
LarchLab_Inside_MapScripts_ProfessorAide_1:
# 71 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorAide_2:
# 51 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_0, MSGBOX_YESNO
# 52 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_5
# 58 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_2, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1

LarchLab_Inside_MapScripts_ProfessorAide_5:
# 54 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_1, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1


LarchLab_Inside_MapScripts_ProfessorLarch_Text_0:
# 22 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah! {PLAYER}, welcome to my humble\n"
	.string "laboratory!\p"
	.string "That's Derek over there, he's my assistant.\n"
	.string "Hello!\l"
	.string "We're over here, Derek.\l"
	.string "Oh...\p"
	.string "...\p"
	.string "Erm, anyway, first of all, allow me to\n"
	.string "congratulate you on your first Pokemon.\p"
	.string "The live of a trainer is a life of\n"
	.string "adventure, and wonder; but it is also\l"
	.string "a life of hardship, and often times, sadness.\p$"

LarchLab_Inside_MapScripts_WallNote_Text_0:
# 41 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Gone to Westlock Village - AOPL$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_0:
# 51 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Are you looking for the Professor?$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_1:
# 54 "data/maps/LarchLab_Inside/scripts.pory"
	.string "I'm afraid he's not here right now.\pHe has been acting a bit strange recently...\nI'm not sure when he'll be back.$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_2:
# 58 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah, well enjoy your visit to the lab then!$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_3:
# 64 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Hello, I'm the Professor's aide!\p"
	.string "I mostly help with research, but he\n"
	.string "has been sending me on a lot of errands\l"
	.string "lately...I should talk to him about that...\p$"
