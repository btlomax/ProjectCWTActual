Weirford_Forest_MapScripts::
	.byte 0


Weirford_Forest_MapScripts_BugCatcherSam::
# 4 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_BUGCATCHER_SAM, Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle, Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated, Weirford_Forest_MapScripts_BugCatcherSam_Beaten
# 10 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle::
# 14 "data/maps/Weirford_Forest/scripts.pory"
	.string "Bug Catcher Sam wants to battle!$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle::
# 18 "data/maps/Weirford_Forest/scripts.pory"
	.string "Bug Catcher Sam: Thanks for the battle!$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated::
# 22 "data/maps/Weirford_Forest/scripts.pory"
	.string "Bug Catcher Sam: I can't believe I lost!$"

Weirford_Forest_MapScripts_BugCatcherSam_Beaten::
# 26 "data/maps/Weirford_Forest/scripts.pory"
	.string "Bug Catcher Sam has been defeated!$"
