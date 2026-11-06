Weirford_Forest_MapScripts::
# 3 "data/maps/Weirford_Forest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Forest_MapScripts_OnTransition
	.byte 0


Weirford_Forest_MapScripts_OnTransition::
# 8 "data/maps/Weirford_Forest/scripts.pory"
	goto_if_set FLAG_HIDE_WEIRFORD_FOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_OnTransition_2
# 14 "data/maps/Weirford_Forest/scripts.pory"
	addobject LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
Weirford_Forest_MapScripts_OnTransition_1:
	end

Weirford_Forest_MapScripts_OnTransition_2:
# 10 "data/maps/Weirford_Forest/scripts.pory"
	removeobject LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
	goto Weirford_Forest_MapScripts_OnTransition_1


Weirford_Forest_MapScripts_BugCatcherSam::
# 21 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_BUGCATCHER_SAM, Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle, Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated
# 26 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_CamperColin::
# 31 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CAMPER_COLIN, Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle, Weirford_Forest_MapScripts_CamperColin_TrainerDefeated
# 36 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_AcolyteLin::
# 41 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle, Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated, Weirford_Forest_MapScripts_AcolyteLin_AfterBattle
	end


Weirford_Forest_MapScripts_AcolyteLin_AfterBattle::
# 51 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Weirford_Forest/scripts.pory"
	applymovement LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_AcolyteLin_Leave
# 54 "data/maps/Weirford_Forest/scripts.pory"
	waitmovement LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
# 55 "data/maps/Weirford_Forest/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_FOREST_ACOLYTE_LIN
# 56 "data/maps/Weirford_Forest/scripts.pory"
	removeobject LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
	end


Weirford_Forest_MapScripts_CorpoEric::
# 62 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CORPO_ERIC, Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle, Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated
# 67 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_LassLila::
# 72 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_LASS_LILA, Weirford_Forest_MapScripts_LassLila_TrainerPreBattle, Weirford_Forest_MapScripts_LassLila_TrainerDefeated
# 77 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_LassLila_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_FirstItem::
# 83 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 84 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_NET_BALL
# 85 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_SecondItem::
# 90 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 91 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_ANTIDOTE
# 92 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_ThirdItem_TM::
# 97 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 98 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_TM01
# 99 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_Entrance_Sign::
# 104 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Entrance_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Exit_Sign::
# 109 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Exit_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Weirford_House::
# 114 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Weirford_House_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_HouseWarp::
# 120 "data/maps/Weirford_Forest/scripts.pory"
	playse SE_DOOR
# 121 "data/maps/Weirford_Forest/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 7, 11
# 122 "data/maps/Weirford_Forest/scripts.pory"
	waitstate
	end


# 189 "data/maps/Weirford_Forest/scripts.pory"
Weirford_Forest_MapScripts_AcolyteLin_Leave:
# 190 "data/maps/Weirford_Forest/scripts.pory"
	walk_up
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 191 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
	step_end

Weirford_Forest_MapScripts_Entrance_Sign_Text_0:
# 104 "data/maps/Weirford_Forest/scripts.pory"
	.string "Weirford Forest$"

Weirford_Forest_MapScripts_Exit_Sign_Text_0:
# 109 "data/maps/Weirford_Forest/scripts.pory"
	.string "<- Route 3$"

Weirford_Forest_MapScripts_Weirford_House_Text_0:
# 114 "data/maps/Weirford_Forest/scripts.pory"
	.string "Welcome to Weirford House$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle::
# 126 "data/maps/Weirford_Forest/scripts.pory"
	.string "AH! Where did you come from?!$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle::
# 130 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm hiding from my manager...$"

Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated::
# 134 "data/maps/Weirford_Forest/scripts.pory"
	.string "I only lost because you scared me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPreBattle::
# 138 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'll tell you a secret if you\ncan beat me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPostBattle::
# 142 "data/maps/Weirford_Forest/scripts.pory"
	.string "There's a house hidden deep in the\n"
	.string "forest. I heard that it's haunted...$"

Weirford_Forest_MapScripts_LassLila_TrainerDefeated::
# 146 "data/maps/Weirford_Forest/scripts.pory"
	.string "UH! FINE I'LL TELL YOU!$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle::
# 150 "data/maps/Weirford_Forest/scripts.pory"
	.string "Halt, young traveler!\n"
	.string "Show me the strength you carry.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle::
# 155 "data/maps/Weirford_Forest/scripts.pory"
	.string "You carry no Crest, yet your Pokémon\n"
	.string "strike with unyielding weight...\p"
	.string "The Weirford Convent must hear of this.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated::
# 161 "data/maps/Weirford_Forest/scripts.pory"
	.string "Undisciplined, yet there is power in\n"
	.string "you...$"

Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle::
# 165 "data/maps/Weirford_Forest/scripts.pory"
	.string "This is my first time camping in the\nforest!$"

Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle::
# 169 "data/maps/Weirford_Forest/scripts.pory"
	.string "The camping is NOT going well...$"

Weirford_Forest_MapScripts_CamperColin_TrainerDefeated::
# 173 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm trying my best not to SHAKE with\nFEAR.$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle::
# 177 "data/maps/Weirford_Forest/scripts.pory"
	.string "Have you got any Bug Pokémon?$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle::
# 181 "data/maps/Weirford_Forest/scripts.pory"
	.string "There are bug Pokemon here...\nI can feel them crawling up my OH SHI-\p$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated::
# 185 "data/maps/Weirford_Forest/scripts.pory"
	.string "I can't believe you beat my team of\nalmighty bugs!$"
