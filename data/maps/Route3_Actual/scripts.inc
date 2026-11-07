Route3_Actual_MapScripts::
	.byte 0


Route3_Actual_MapScripts_Tim::
# 4 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_TIM, Route3_Actual_MapScripts_Tim_TrainerPreBattle, Route3_Actual_MapScripts_Tim_TrainerDefeated
# 10 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScripts_Tim_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_CamperGary::
# 15 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_CAMPER_GARY, Route3_Actual_CamperGary_TrainerPreBattle, Route3_Actual_CamperGary_TrainerDefeated
# 21 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_CamperGary_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_LassSara::
# 26 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_LASS_SARA, Route3_Actual_LassSara_TrainerPreBattle, Route3_Actual_LassSara_TrainerDefeated
# 32 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_LassSara_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_MapScript_RiverMan::
# 37 "data/maps/Route3_Actual/scripts.pory"
	lock
# 38 "data/maps/Route3_Actual/scripts.pory"
	faceplayer
# 40 "data/maps/Route3_Actual/scripts.pory"
	goto_if_unset FLAG_ROUTE3_RECEIVED_SOOTHE_BELL, Route3_Actual_MapScript_RiverMan_2
Route3_Actual_MapScript_RiverMan_1:
# 49 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_2
# 50 "data/maps/Route3_Actual/scripts.pory"
	release
	end

Route3_Actual_MapScript_RiverMan_2:
# 42 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScript_RiverMan_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/Route3_Actual/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 46 "data/maps/Route3_Actual/scripts.pory"
	setflag FLAG_ROUTE3_RECEIVED_SOOTHE_BELL
	goto Route3_Actual_MapScript_RiverMan_1


Route3_Actual_SouthWest_Sign::
# 55 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_NorthEast_Sign::
# 59 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_Item_SilverPowder::
# 63 "data/maps/Route3_Actual/scripts.pory"
	lock
# 64 "data/maps/Route3_Actual/scripts.pory"
	finditem ITEM_SILVER_POWDER
# 65 "data/maps/Route3_Actual/scripts.pory"
	release
	end


Route3_Actual_MapScript_RiverMan_Text_0:
# 42 "data/maps/Route3_Actual/scripts.pory"
	.string "My Wanda used to love this spot. She\n"
	.string "would spend hours here, watching the\l"
	.string "water flow by...\p"
	.string "$"

Route3_Actual_MapScript_RiverMan_Text_1:
# 43 "data/maps/Route3_Actual/scripts.pory"
	.string "Hold on to those cherished memories,\n"
	.string "dear child. One day it will all make\l"
	.string "sense.\p"
	.string "$"

Route3_Actual_MapScript_RiverMan_Text_2:
# 49 "data/maps/Route3_Actual/scripts.pory"
	.string "Your loved ones, your Pokemon, all are\n"
	.string "fleeting.$"

Route3_Actual_SouthWest_Sign_Text_0:
# 55 "data/maps/Route3_Actual/scripts.pory"
	.string "Weirford Town --> <-- Weirford Forest$"

Route3_Actual_LassSara_TrainerPreBattle::
# 69 "data/maps/Route3_Actual/scripts.pory"
	.string "STOP RIGHT THERE MISTER! This is MY\n"
	.string "turf!$"

Route3_Actual_LassSara_TrainerDefeated::
# 75 "data/maps/Route3_Actual/scripts.pory"
	.string "I'd like more turf...$"

Route3_Actual_LassSara_TrainerPostBattle::
# 81 "data/maps/Route3_Actual/scripts.pory"
	.string "I found an item hidden here so I claimed\n"
	.string "the area in case there are more!$"

Route3_Actual_CamperGary_TrainerPreBattle::
# 87 "data/maps/Route3_Actual/scripts.pory"
	.string "That forest sure is a maze! You gotta\n"
	.string "be tough to get through!$"

Route3_Actual_CamperGary_TrainerDefeated::
# 93 "data/maps/Route3_Actual/scripts.pory"
	.string "Yeah you're pretty tough...$"

Route3_Actual_CamperGary_TrainerPostBattle::
# 99 "data/maps/Route3_Actual/scripts.pory"
	.string "It took me a long time to get through\n"
	.string "the forest. Did you know there's a\l"
	.string "shortcut back down?$"

Route3_Actual_MapScripts_Tim_TrainerPreBattle::
# 105 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh FINALLY, someone chooses the wrong\n"
	.string "path! Let's battle!$"

Route3_Actual_MapScripts_Tim_TrainerDefeated::
# 111 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh for fu-... All that waiting and THAT\n"
	.string "happens!$"

Route3_Actual_MapScripts_Tim_TrainerPostBattle::
# 117 "data/maps/Route3_Actual/scripts.pory"
	.string "I'm still not going to move.$"
