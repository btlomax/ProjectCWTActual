Route3_Actual_MapScripts::
# 2 "data/maps/Route3_Actual/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_Actual_MapScripts_OnTransition
	.byte 0


Route3_Actual_MapScripts_OnTransition::
# 7 "data/maps/Route3_Actual/scripts.pory"
	goto_if_set FLAG_ROUTE3_HIKER_BLOCK, Route3_Actual_MapScripts_OnTransition_2
Route3_Actual_MapScripts_OnTransition_1:
	end

Route3_Actual_MapScripts_OnTransition_2:
# 9 "data/maps/Route3_Actual/scripts.pory"
	removeobject LOCALID_HIKER1_BLOCK
# 10 "data/maps/Route3_Actual/scripts.pory"
	removeobject LOCALID_HIKER2_BLOCK
# 11 "data/maps/Route3_Actual/scripts.pory"
	removeobject LOCALID_HIKER3_BLOCK
	goto Route3_Actual_MapScripts_OnTransition_1


Route3_Actual_MapScripts_Tim::
# 18 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_TIM, Route3_Actual_MapScripts_Tim_TrainerPreBattle, Route3_Actual_MapScripts_Tim_TrainerDefeated
# 24 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScripts_Tim_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_CamperGary::
# 29 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_CAMPER_GARY, Route3_Actual_CamperGary_TrainerPreBattle, Route3_Actual_CamperGary_TrainerDefeated
# 35 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_CamperGary_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_LassSara::
# 40 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_LASS_SARA, Route3_Actual_LassSara_TrainerPreBattle, Route3_Actual_LassSara_TrainerDefeated
# 46 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_LassSara_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_MapScript_RiverMan::
# 51 "data/maps/Route3_Actual/scripts.pory"
	lock
# 52 "data/maps/Route3_Actual/scripts.pory"
	faceplayer
# 54 "data/maps/Route3_Actual/scripts.pory"
	goto_if_unset FLAG_ROUTE3_RECEIVED_SOOTHE_BELL, Route3_Actual_MapScript_RiverMan_2
Route3_Actual_MapScript_RiverMan_1:
# 63 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_2
# 64 "data/maps/Route3_Actual/scripts.pory"
	release
	end

Route3_Actual_MapScript_RiverMan_2:
# 56 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/Route3_Actual/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 60 "data/maps/Route3_Actual/scripts.pory"
	setflag FLAG_ROUTE3_RECEIVED_SOOTHE_BELL
	goto Route3_Actual_MapScript_RiverMan_1


Route3_Actual_MapScripts_HikerBlock::
# 70 "data/maps/Route3_Actual/scripts.pory"
	lock
# 71 "data/maps/Route3_Actual/scripts.pory"
	faceplayer
# 72 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScripts_HikerBlock_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/Route3_Actual/scripts.pory"
	release
	end


Route3_Actual_SouthWest_Sign::
# 78 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_NorthEast_Sign::
# 82 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_Item_SilverPowder::
# 86 "data/maps/Route3_Actual/scripts.pory"
	lock
# 87 "data/maps/Route3_Actual/scripts.pory"
	finditem ITEM_SILVER_POWDER
# 88 "data/maps/Route3_Actual/scripts.pory"
	release
	end


Route3_Actual_MapScript_RiverMan_Text_0:
# 56 "data/maps/Route3_Actual/scripts.pory"
	.string "My Wanda used to love this spot. She\n"
	.string "would spend hours here, watching the\l"
	.string "water flow by...\p"
	.string "$"

Route3_Actual_MapScript_RiverMan_Text_1:
# 57 "data/maps/Route3_Actual/scripts.pory"
	.string "Hold on to those cherished memories,\n"
	.string "dear child. One day it will all make\l"
	.string "sense.\p"
	.string "$"

Route3_Actual_MapScript_RiverMan_Text_2:
# 63 "data/maps/Route3_Actual/scripts.pory"
	.string "Your loved ones, your Pokemon, all are\n"
	.string "fleeting.$"

Route3_Actual_MapScripts_HikerBlock_Text_0:
# 72 "data/maps/Route3_Actual/scripts.pory"
	.string "There's been a landslide ahead on the\n"
	.string "mountain pass, we're clearing it but it\l"
	.string "will take some time.\p"
	.string "$"

Route3_Actual_SouthWest_Sign_Text_0:
# 78 "data/maps/Route3_Actual/scripts.pory"
	.string "Weirford Town --> <-- Weirford Forest$"

Route3_Actual_LassSara_TrainerPreBattle::
# 92 "data/maps/Route3_Actual/scripts.pory"
	.string "STOP RIGHT THERE MISTER! This is MY\n"
	.string "turf!$"

Route3_Actual_LassSara_TrainerDefeated::
# 98 "data/maps/Route3_Actual/scripts.pory"
	.string "I'd like more turf...$"

Route3_Actual_LassSara_TrainerPostBattle::
# 104 "data/maps/Route3_Actual/scripts.pory"
	.string "I found an item hidden here so I claimed\n"
	.string "the area in case there are more!$"

Route3_Actual_CamperGary_TrainerPreBattle::
# 110 "data/maps/Route3_Actual/scripts.pory"
	.string "That forest sure is a maze! You gotta\n"
	.string "be tough to get through!$"

Route3_Actual_CamperGary_TrainerDefeated::
# 116 "data/maps/Route3_Actual/scripts.pory"
	.string "Yeah you're pretty tough...$"

Route3_Actual_CamperGary_TrainerPostBattle::
# 122 "data/maps/Route3_Actual/scripts.pory"
	.string "It took me a long time to get through\n"
	.string "the forest. Did you know there's a\l"
	.string "shortcut back down?$"

Route3_Actual_MapScripts_Tim_TrainerPreBattle::
# 128 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh FINALLY, someone chooses the wrong\n"
	.string "path! Let's battle!$"

Route3_Actual_MapScripts_Tim_TrainerDefeated::
# 134 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh for fu-... All that waiting and THAT\n"
	.string "happens!$"

Route3_Actual_MapScripts_Tim_TrainerPostBattle::
# 140 "data/maps/Route3_Actual/scripts.pory"
	.string "I'm still not going to move.$"
