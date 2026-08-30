Route2_Meadowvale_Farm_MapScripts::
	.byte 0


Route2_Meadowvale_Farm_MapScripts_Route2Sign::
# 4 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0, MSGBOX_SIGN
	end


Route2_Meadowvale_Farm_MapScripts_FarmSign::
# 9 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0, MSGBOX_SIGN
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandTommy::
# 14 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_TOMMY, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated
# 19 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge::
# 24 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_GEORGE, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated
# 29 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0:
# 4 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm -> Weirford Forest$"

Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0:
# 9 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm\nPlease come in!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle::
# 33 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "H-hey! You look like a trainer!\nI-I challenge you to a b-battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated::
# 37 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Dad told us to battle trainers if we\nsaw any...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle::
# 41 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "The farm is up the route, past the fields.\nYou should go check it out!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle::
# 45 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Hey! You! I'm bored, let's battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated::
# 49 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Ugh, now and I'm bored AND I have to go/\nback to work...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle::
# 53 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Farms are so boring, at least there are\nPokemon to find.$"
