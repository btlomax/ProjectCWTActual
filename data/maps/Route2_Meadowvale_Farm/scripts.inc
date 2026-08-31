Route2_Meadowvale_Farm_MapScripts::
	.byte 0


Route2_Meadowvale_Farm_EventScript_ReturnToAlderbrook::
# 4 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	lock
# 5 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_EventScript_ReturnToAlderbrook_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Meadowvale_Farm_Movement_ReturnToWestlock
# 7 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	waitmovement
# 8 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	release
	end


Route2_Meadowvale_Farm_MapScripts_Route2Sign::
# 13 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0, MSGBOX_SIGN
	end


Route2_Meadowvale_Farm_MapScripts_FarmSign::
# 18 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0, MSGBOX_SIGN
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandTommy::
# 23 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_TOMMY, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_Beaten
# 29 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_Beaten::
# 34 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 35 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge::
# 40 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_GEORGE, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten
# 46 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten::
# 51 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 52 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandJenny::
# 57 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_JENNY, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_Beaten
# 63 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_Beaten::
# 68 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 69 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy::
# 74 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_LUCY, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten
# 80 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten::
# 85 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 86 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


# 90 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
Route2_Meadowvale_Farm_Movement_ReturnToWestlock:
# 91 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 91 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 92 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	step_end

Route2_Meadowvale_Farm_EventScript_ReturnToAlderbrook_Text_0:
# 5 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "You should return to Alderbrook Town.\nRhona is waiting for you.$"

Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0:
# 13 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm -> Weirford Forest$"

Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0:
# 18 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm\nPlease come in!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle::
# 95 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "H-hey! You look like a trainer!\nI-I challenge you to a b-battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated::
# 99 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Dad told us to battle trainers if we\nsaw any...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle::
# 103 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "The farm is up the route, past the fields.\nYou should go check it out!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle::
# 107 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Hey! You! I'm bored, let's battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated::
# 111 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Ugh, now and I'm bored AND I have to go\nback to work...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle::
# 115 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Farms are so boring, at least there are\nPokemon to find.$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPreBattle::
# 119 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Haha I got you! Now we have to battle!\nYay!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerDefeated::
# 123 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Nooooooo! I'm telling my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle::
# 127 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I don't like you anymore!\nI'm going to tell my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle::
# 131 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I'm the oldest, I bet you can't beat me!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated::
# 135 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My dad will want to speak to you...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle::
# 139 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My little sister likes to hide in long\ngrass and scare people.$"
