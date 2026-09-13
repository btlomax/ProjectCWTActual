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


Route3_Actual_SouthWest_Sign::
# 37 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_SouthWest_Sign_Text_0:
# 37 "data/maps/Route3_Actual/scripts.pory"
	.string "Weirford Town -->\n<-- Weirford Forest$"

Route3_Actual_LassSara_TrainerPreBattle::
# 40 "data/maps/Route3_Actual/scripts.pory"
	.string "STOP RIGHT THERE MISTER! This is MY turf!$"

Route3_Actual_LassSara_TrainerDefeated::
# 44 "data/maps/Route3_Actual/scripts.pory"
	.string "I'd like more turf...$"

Route3_Actual_LassSara_TrainerPostBattle::
# 48 "data/maps/Route3_Actual/scripts.pory"
	.string "I found an item hidden here so I\nclaimed the area in case there are more!$"

Route3_Actual_CamperGary_TrainerPreBattle::
# 52 "data/maps/Route3_Actual/scripts.pory"
	.string "That forest sure is a maze!\nYou gotta be tough to get through!$"

Route3_Actual_CamperGary_TrainerDefeated::
# 56 "data/maps/Route3_Actual/scripts.pory"
	.string "Yeah you're pretty tough...$"

Route3_Actual_CamperGary_TrainerPostBattle::
# 60 "data/maps/Route3_Actual/scripts.pory"
	.string "It took me a long time to get through the forest.\nDid you know there's a shortcut back down?$"

Route3_Actual_MapScripts_Tim_TrainerPreBattle::
# 64 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh FINALLY, someone chooses my side of\nthe path...$"

Route3_Actual_MapScripts_Tim_TrainerDefeated::
# 68 "data/maps/Route3_Actual/scripts.pory"
	.string "Oh for fu-...\nAll that waiting and THAT happens!$"

Route3_Actual_MapScripts_Tim_TrainerPostBattle::
# 72 "data/maps/Route3_Actual/scripts.pory"
	.string "I'm still not going to move.$"
