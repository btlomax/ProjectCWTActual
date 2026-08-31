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


Route2_Meadowvale_Farm_MapScripts_ForestSign::
# 14 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_ForestSign_Text_0, MSGBOX_SIGN
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandTommy::
# 21 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_TOMMY, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_Beaten
# 27 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_Beaten::
# 32 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 33 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge::
# 38 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_GEORGE, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten
# 44 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten::
# 49 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 50 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandJenny::
# 55 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_JENNY, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_Beaten
# 61 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_Beaten::
# 66 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 67 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy::
# 72 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_LUCY, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten
# 78 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten::
# 83 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 84 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FirstItem::
# 89 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_POTION
	end


Route2_Meadowvale_Farm_MapScripts_SecondItem::
# 94 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


Route2_Meadowvale_Farm_MapScripts_ThirdItem::
# 99 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_POKE_BALL
	end


# 103 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
Route2_Meadowvale_Farm_Movement_ReturnToWestlock:
# 104 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 104 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 105 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	step_end

Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0:
# 4 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm -> Weirford Forest$"

Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0:
# 9 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm\nPlease come in!$"

Route2_Meadowvale_Farm_MapScripts_ForestSign_Text_0:
# 14 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Entering Weirford Forest\n"
	.string "Ensure you're prepared!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle::
# 108 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "H-hey! You look like a trainer!\nI-I challenge you to a b-battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated::
# 112 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Dad told us to battle trainers if we\nsaw any...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle::
# 116 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "The farm is up the route, past the fields.\nYou should go check it out!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle::
# 120 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Hey! You! I'm bored, let's battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated::
# 124 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Ugh, now and I'm bored AND I have to go\nback to work...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle::
# 128 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Farms are so boring, at least there are\nPokemon to find.$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPreBattle::
# 132 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Haha I got you! Now we have to battle!\nYay!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerDefeated::
# 136 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Nooooooo! I'm telling my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle::
# 140 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I don't like you anymore!\nI'm going to tell my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle::
# 144 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I'm the oldest, I bet you can't beat me!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated::
# 148 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My dad will want to speak to you...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle::
# 152 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My little sister likes to hide in long\ngrass and scare people.$"
