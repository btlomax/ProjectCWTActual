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
	trainerbattle_single TRAINER_WEIRFORDFOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle, Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated, Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle
# 30 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_AcolyteLin_Text_0, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_CorpoEric::
# 35 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CORPO_ERIC, Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle, Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated
# 40 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_LassLila::
# 45 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_LASS_LILA, Weirford_Forest_MapScripts_LassLila_TrainerPreBattle, Weirford_Forest_MapScripts_LassLila_TrainerDefeated
# 50 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_LassLila_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_FirstItem::
# 56 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 57 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_NET_BALL
# 58 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_SecondItem::
# 63 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 64 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_ANTIDOTE
# 65 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_ThirdItem_TM::
# 70 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 71 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_TM01
# 72 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_Entrance_Sign::
# 77 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Entrance_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Exit_Sign::
# 82 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Exit_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Weirford_House::
# 87 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Weirford_House_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_HouseWarp::
# 93 "data/maps/Weirford_Forest/scripts.pory"
	playse SE_DOOR
# 94 "data/maps/Weirford_Forest/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 7, 11
# 95 "data/maps/Weirford_Forest/scripts.pory"
	waitstate
	end


Weirford_Forest_MapScripts_AcolyteLin_Text_0:
# 30 "data/maps/Weirford_Forest/scripts.pory"
	.string "The Convent must hear of this...$"

Weirford_Forest_MapScripts_Entrance_Sign_Text_0:
# 77 "data/maps/Weirford_Forest/scripts.pory"
	.string "Weirford Forest$"

Weirford_Forest_MapScripts_Exit_Sign_Text_0:
# 82 "data/maps/Weirford_Forest/scripts.pory"
	.string "<- Route 3$"

Weirford_Forest_MapScripts_Weirford_House_Text_0:
# 87 "data/maps/Weirford_Forest/scripts.pory"
	.string "Welcome to Weirford House$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle::
# 99 "data/maps/Weirford_Forest/scripts.pory"
	.string "AH! Where did you come from?!$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle::
# 103 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm hiding from my manager...$"

Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated::
# 107 "data/maps/Weirford_Forest/scripts.pory"
	.string "I only lost because you scared me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPreBattle::
# 111 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'll tell you a secret if you\ncan beat me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPostBattle::
# 115 "data/maps/Weirford_Forest/scripts.pory"
	.string "There's a house hidden deep in the\n"
	.string "forest. I heard that it's haunted...$"

Weirford_Forest_MapScripts_LassLila_TrainerDefeated::
# 119 "data/maps/Weirford_Forest/scripts.pory"
	.string "UH! FINE I'LL TELL YOU!$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle::
# 123 "data/maps/Weirford_Forest/scripts.pory"
	.string "Halt, young traveler!\n"
	.string "Show me the strength you carry.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle::
# 128 "data/maps/Weirford_Forest/scripts.pory"
	.string "You carry no Crest, yet your Pokémon\n"
	.string "strike with unyielding weight...\p"
	.string "The Weirford Convent must hear of this.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated::
# 134 "data/maps/Weirford_Forest/scripts.pory"
	.string "Undisciplined, yet there is power in\n"
	.string "you...$"

Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle::
# 138 "data/maps/Weirford_Forest/scripts.pory"
	.string "This is my first time camping in the\nforest!$"

Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle::
# 142 "data/maps/Weirford_Forest/scripts.pory"
	.string "The camping is NOT going well...$"

Weirford_Forest_MapScripts_CamperColin_TrainerDefeated::
# 146 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm trying my best not to SHAKE with\nFEAR.$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle::
# 150 "data/maps/Weirford_Forest/scripts.pory"
	.string "Have you got any Bug Pokémon?$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle::
# 154 "data/maps/Weirford_Forest/scripts.pory"
	.string "There are bug Pokemon here...\nI can feel them crawling up my OH SHI-\p$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated::
# 158 "data/maps/Weirford_Forest/scripts.pory"
	.string "I can't believe you beat my team of\nalmighty bugs!$"
