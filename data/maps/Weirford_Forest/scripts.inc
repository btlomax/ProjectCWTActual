Weirford_Forest_MapScripts::
	.byte 0


Weirford_Forest_MapScripts_BugCatcherSam::
# 4 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_BUGCATCHER_SAM, Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle, Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated
# 9 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_CamperColin::
# 14 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CAMPER_COLIN, Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle, Weirford_Forest_MapScripts_CamperColin_TrainerDefeated
# 19 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_AcolyteLin::
# 24 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle, Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated
# 29 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_CorpoEric::
# 34 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CORPO_ERIC, Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle, Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated
# 39 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_LassLila::
# 44 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_LASS_LILA, Weirford_Forest_MapScripts_LassLila_TrainerPreBattle, Weirford_Forest_MapScripts_LassLila_TrainerDefeated
# 49 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_LassLila_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_FirstItem::
# 55 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 56 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_NET_BALL
# 57 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_SecondItem::
# 62 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 63 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_ANTIDOTE
# 64 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_ThirdItem_TM::
# 69 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 70 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_TM01
# 71 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_Entrance_Sign::
# 76 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Entrance_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Exit_Sign::
# 81 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Exit_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Weirford_House::
# 86 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Weirford_House_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Entrance_Sign_Text_0:
# 76 "data/maps/Weirford_Forest/scripts.pory"
	.string "Weirford Forest$"

Weirford_Forest_MapScripts_Exit_Sign_Text_0:
# 81 "data/maps/Weirford_Forest/scripts.pory"
	.string "<- Route 3$"

Weirford_Forest_MapScripts_Weirford_House_Text_0:
# 86 "data/maps/Weirford_Forest/scripts.pory"
	.string "Welcome to Weirford House$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle::
# 91 "data/maps/Weirford_Forest/scripts.pory"
	.string "AH! Where did you come from?!$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle::
# 95 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm hiding from my manager...$"

Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated::
# 99 "data/maps/Weirford_Forest/scripts.pory"
	.string "I only lost because you scared me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPreBattle::
# 103 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'll tell you a secret if you\ncan beat me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPostBattle::
# 107 "data/maps/Weirford_Forest/scripts.pory"
	.string "There's a house hidden deep in the forest.$"

Weirford_Forest_MapScripts_LassLila_TrainerDefeated::
# 111 "data/maps/Weirford_Forest/scripts.pory"
	.string "UH! FINE I'LL TELL YOU!$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle::
# 115 "data/maps/Weirford_Forest/scripts.pory"
	.string "Halt young trainer, allow me to test your\nprowess!$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle::
# 119 "data/maps/Weirford_Forest/scripts.pory"
	.string "The Weirford convent must hear of this.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated::
# 123 "data/maps/Weirford_Forest/scripts.pory"
	.string "Yes, there is power in you...$"

Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle::
# 128 "data/maps/Weirford_Forest/scripts.pory"
	.string "This is my first time camping in the\nforest!$"

Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle::
# 132 "data/maps/Weirford_Forest/scripts.pory"
	.string "The camping is NOT going well...$"

Weirford_Forest_MapScripts_CamperColin_TrainerDefeated::
# 136 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm trying my best not to SHAKE with\nFEAR.$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle::
# 140 "data/maps/Weirford_Forest/scripts.pory"
	.string "Have you got any Bug Pokémon?$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle::
# 144 "data/maps/Weirford_Forest/scripts.pory"
	.string "There are bug Pokemon here...\nI can feel them crawling up my OH SHI-\p$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated::
# 148 "data/maps/Weirford_Forest/scripts.pory"
	.string "I can't believe you beat my team of\nalmighty bugs!$"
