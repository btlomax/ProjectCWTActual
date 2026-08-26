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
	addobject LOCALID_PROF_LARCH
	return

LarchLab_Inside_MapScripts_Transition_1:
# 8 "data/maps/LarchLab_Inside/scripts.pory"
	setflag FLAG_HIDE_PROF_LARCH
	return


LarchLab_Inside_MapScripts_WallNote::
# 18 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_WallNote_Text_0, MSGBOX_SIGN
	end


LarchLab_Inside_MapScripts_ProfessorAide::
# 23 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 24 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 26 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_WESTLOCK_LIBRARY_STATE, 0
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_2
# 40 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_3
LarchLab_Inside_MapScripts_ProfessorAide_1:
# 48 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorAide_2:
# 28 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_0, MSGBOX_YESNO
# 29 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_5
# 35 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_2, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1

LarchLab_Inside_MapScripts_ProfessorAide_5:
# 31 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_1, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1


LarchLab_Inside_MapScripts_WallNote_Text_0:
# 18 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Gone to Westlock Village - AOPL$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_0:
# 28 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Are you looking for the Professor?$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_1:
# 31 "data/maps/LarchLab_Inside/scripts.pory"
	.string "I'm afraid he's not here right now.\pHe has been acting a bit strange recently...\pI'm not sure when he'll be back,but you\ncan check the log for updates.$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_2:
# 35 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah, well enjoy your visit to the lab then!$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_3:
# 41 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Hello, I'm the Professor's aide!\p"
	.string "I mostly help with research, but he\n"
	.string "has been sending me on a lot of errands lately...\p"
	.string "I should talk to him about that...$"
