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
# 52 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 54 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Weirford_Forest/scripts.pory"
	applymovement LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN, Weirford_Forest_MapScripts_AcolyteLin_Leave
# 57 "data/maps/Weirford_Forest/scripts.pory"
	waitmovement LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
# 58 "data/maps/Weirford_Forest/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_FOREST_ACOLYTE_LIN
# 59 "data/maps/Weirford_Forest/scripts.pory"
	removeobject LOCALID_WEIRFORD_FOREST_ACOLYTE_LIN
# 61 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_CorpoEric::
# 66 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_CORPO_ERIC, Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle, Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated
# 71 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_LassLila::
# 76 "data/maps/Weirford_Forest/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORDFOREST_LASS_LILA, Weirford_Forest_MapScripts_LassLila_TrainerPreBattle, Weirford_Forest_MapScripts_LassLila_TrainerDefeated
# 81 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_LassLila_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Forest_MapScripts_FirstItem::
# 87 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 88 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_NET_BALL
# 89 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_SecondItem::
# 94 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 95 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_ANTIDOTE
# 96 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_ThirdItem_TM::
# 101 "data/maps/Weirford_Forest/scripts.pory"
	lock
# 102 "data/maps/Weirford_Forest/scripts.pory"
	finditem ITEM_TM01
# 103 "data/maps/Weirford_Forest/scripts.pory"
	release
	end


Weirford_Forest_MapScripts_Entrance_Sign::
# 108 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Entrance_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Exit_Sign::
# 113 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Exit_Sign_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_Weirford_House::
# 118 "data/maps/Weirford_Forest/scripts.pory"
	msgbox Weirford_Forest_MapScripts_Weirford_House_Text_0, MSGBOX_SIGN
	end


Weirford_Forest_MapScripts_HouseWarp::
# 124 "data/maps/Weirford_Forest/scripts.pory"
	playse SE_DOOR
# 125 "data/maps/Weirford_Forest/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 7, 11
# 126 "data/maps/Weirford_Forest/scripts.pory"
	waitstate
	end


# 219 "data/maps/Weirford_Forest/scripts.pory"
Weirford_Forest_MapScripts_AcolyteLin_Leave:
# 220 "data/maps/Weirford_Forest/scripts.pory"
	walk_up
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
# 221 "data/maps/Weirford_Forest/scripts.pory"
	walk_right
	step_end

Weirford_Forest_MapScripts_Entrance_Sign_Text_0:
# 108 "data/maps/Weirford_Forest/scripts.pory"
	.string "Weirford Forest$"

Weirford_Forest_MapScripts_Exit_Sign_Text_0:
# 113 "data/maps/Weirford_Forest/scripts.pory"
	.string "<- Route 3$"

Weirford_Forest_MapScripts_Weirford_House_Text_0:
# 118 "data/maps/Weirford_Forest/scripts.pory"
	.string "Welcome to Weirford House$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPreBattle::
# 130 "data/maps/Weirford_Forest/scripts.pory"
	.string "AH! Where did you come from?!$"

Weirford_Forest_MapScripts_CorpoEric_TrainerPostBattle::
# 136 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm hiding from my manager...$"

Weirford_Forest_MapScripts_CorpoEric_TrainerDefeated::
# 142 "data/maps/Weirford_Forest/scripts.pory"
	.string "I only lost because you scared me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPreBattle::
# 148 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'll tell you a secret if you can beat\n"
	.string "me!$"

Weirford_Forest_MapScripts_LassLila_TrainerPostBattle::
# 154 "data/maps/Weirford_Forest/scripts.pory"
	.string "There's a house hidden deep in the\n"
	.string "forest. I heard that it's haunted...$"

Weirford_Forest_MapScripts_LassLila_TrainerDefeated::
# 158 "data/maps/Weirford_Forest/scripts.pory"
	.string "UH! FINE I'LL TELL YOU!$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPreBattle::
# 164 "data/maps/Weirford_Forest/scripts.pory"
	.string "Halt, young traveler! Show me the\n"
	.string "strength you carry.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerPostBattle::
# 171 "data/maps/Weirford_Forest/scripts.pory"
	.string "You carry no Crest, yet your Pokémon\n"
	.string "strike with unyielding weight...\p"
	.string "The Weirford Convent must hear of this.$"

Weirford_Forest_MapScripts_AcolyteLin_TrainerDefeated::
# 179 "data/maps/Weirford_Forest/scripts.pory"
	.string "Undisciplined, yet there is power in\n"
	.string "you...$"

Weirford_Forest_MapScripts_CamperColin_TrainerPreBattle::
# 183 "data/maps/Weirford_Forest/scripts.pory"
	.string "This is my first time camping in the\n"
	.string "forest!$"

Weirford_Forest_MapScripts_CamperColin_TrainerPostBattle::
# 189 "data/maps/Weirford_Forest/scripts.pory"
	.string "The camping is NOT going well...$"

Weirford_Forest_MapScripts_CamperColin_TrainerDefeated::
# 195 "data/maps/Weirford_Forest/scripts.pory"
	.string "I'm trying my best not to SHAKE with\n"
	.string "FEAR.$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPreBattle::
# 201 "data/maps/Weirford_Forest/scripts.pory"
	.string "Have you got any Bug Pokémon?$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerPostBattle::
# 207 "data/maps/Weirford_Forest/scripts.pory"
	.string "There are bug Pokemon here... I can feel\n"
	.string "them crawling up my OH SHI-\p"
	.string "$"

Weirford_Forest_MapScripts_BugCatcherSam_TrainerDefeated::
# 213 "data/maps/Weirford_Forest/scripts.pory"
	.string "I can't believe you beat my team of\n"
	.string "almighty bugs!$"
