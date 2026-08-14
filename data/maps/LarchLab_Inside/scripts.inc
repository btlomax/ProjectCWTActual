LarchLab_Inside_MapScripts::
	.byte 0


LarchLab_Inside_MapScripts_WallNote::
# 4 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_WallNote_Text_0, MSGBOX_SIGN
	end


LarchLab_Inside_MapScripts_ProfessorAide::
# 9 "data/maps/LarchLab_Inside/scripts.pory"
	lock
# 10 "data/maps/LarchLab_Inside/scripts.pory"
	faceplayer
# 11 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_0, MSGBOX_YESNO
# 12 "data/maps/LarchLab_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LarchLab_Inside_MapScripts_ProfessorAide_2
# 15 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_2, MSGBOX_DEFAULT
LarchLab_Inside_MapScripts_ProfessorAide_1:
# 17 "data/maps/LarchLab_Inside/scripts.pory"
	release
	end

LarchLab_Inside_MapScripts_ProfessorAide_2:
# 13 "data/maps/LarchLab_Inside/scripts.pory"
	msgbox LarchLab_Inside_MapScripts_ProfessorAide_Text_1, MSGBOX_DEFAULT
	goto LarchLab_Inside_MapScripts_ProfessorAide_1


LarchLab_Inside_MapScripts_WallNote_Text_0:
# 4 "data/maps/LarchLab_Inside/scripts.pory"
	.string "On important errand, will be back tomorrow.\nAL$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_0:
# 11 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Are you looking for the Professor?$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_1:
# 13 "data/maps/LarchLab_Inside/scripts.pory"
	.string "I'm afraid he's not here right now.\pHe has been acting a bit\nstrange recently...\pI'm not sure when he'll be back,\nbut you can check the log for updates.$"

LarchLab_Inside_MapScripts_ProfessorAide_Text_2:
# 15 "data/maps/LarchLab_Inside/scripts.pory"
	.string "Ah, well enjoy your visit to the lab then!$"
