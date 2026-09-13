Route3_Actual_MapScripts::
	.byte 0


Route3_Actual_MapScripts_Tim::
# 4 "data/maps/Route3_Actual/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_TIM, Route3_Actual_MapScripts_Tim_TrainerPreBattle, Route3_Actual_MapScripts_Tim_TrainerDefeated
# 10 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_MapScripts_Tim_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Actual_SouthWest_Sign::
# 15 "data/maps/Route3_Actual/scripts.pory"
	msgbox Route3_Actual_SouthWest_Sign_Text_0, MSGBOX_SIGN
	return


Route3_Actual_SouthWest_Sign_Text_0:
# 15 "data/maps/Route3_Actual/scripts.pory"
	.string "Weirford Town -->\n<-- Weirford Forest$"

Route3_Actual_MapScripts_Tim_TrainerPreBattle::
# 18 "data/maps/Route3_Actual/scripts.pory"
	.string "I've been training hard on this route!\n"
	.string "Let's battle!$"

Route3_Actual_MapScripts_Tim_TrainerDefeated::
# 23 "data/maps/Route3_Actual/scripts.pory"
	.string "Wow, you're strong!$"

Route3_Actual_MapScripts_Tim_TrainerPostBattle::
# 27 "data/maps/Route3_Actual/scripts.pory"
	.string "I'll keep training until I can beat you!$"
