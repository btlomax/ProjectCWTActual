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
	call Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest
# 34 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge::
# 39 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_GEORGE, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten
# 45 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_Beaten::
# 50 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 51 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	call Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest
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
	call Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest
# 70 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy::
# 75 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALE_LUCY, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated, Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten
# 81 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_Beaten::
# 86 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	addvar VAR_ROUTE2_MEADOWVALE_FARM_STATE, 1
# 87 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	call Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest
# 88 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	msgbox Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest::
# 93 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	setvar VAR_0x8004, QUEST_MAX_FARM_BOSS
# 94 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	special Quest_GetStage
# 96 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	compare VAR_RESULT, QUEST_MAX_FARM_BOSS_STAGE_INACTIVE
	goto_if_eq Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest_2
Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest_1:
# 101 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	setvar VAR_0x8004, QUEST_MAX_FARM_BOSS
# 102 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	special Quest_IncrementTrainerDefeats
	return

Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest_2:
# 97 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	setvar VAR_0x8004, QUEST_MAX_FARM_BOSS
# 98 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	special Quest_Add
	goto Route2_Meadowvale_Farm_MapScripts_UpdateFarmBossQuest_1


Route2_Meadowvale_Farm_MapScripts_FirstItem::
# 107 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_POTION
	end


Route2_Meadowvale_Farm_MapScripts_SecondItem::
# 112 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


Route2_Meadowvale_Farm_MapScripts_ThirdItem::
# 117 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	finditem ITEM_POKE_BALL
	end


# 121 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
Route2_Meadowvale_Farm_Movement_ReturnToWestlock:
# 122 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 122 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	walk_left
# 123 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	step_end

Route2_Meadowvale_Farm_MapScripts_Route2Sign_Text_0:
# 4 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm -> Weirford Forest$"

Route2_Meadowvale_Farm_MapScripts_FarmSign_Text_0:
# 9 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Meadowvale Farm Please come in!$"

Route2_Meadowvale_Farm_MapScripts_ForestSign_Text_0:
# 14 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Entering Weirford Forest Ensure you're\n"
	.string "prepared!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPreBattle::
# 126 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "H-hey! You look like a trainer! I-I\n"
	.string "challenge you to a b-battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerDefeated::
# 132 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Dad told us to battle trainers if we saw\n"
	.string "any...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandTommy_TrainerPostBattle::
# 138 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "The farm is up the route, past the\n"
	.string "fields. You should go check it out!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPreBattle::
# 144 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Hey! You! I'm bored, let's battle!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerDefeated::
# 150 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Ugh! My dad's gonna be REAL mad when he\n"
	.string "finds out I lost...!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandGeorge_TrainerPostBattle::
# 156 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Farms are so boring, at least there are\n"
	.string "Pokemon to find.$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPreBattle::
# 162 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Haha I got you! Now we have to battle!\n"
	.string "Yay!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerDefeated::
# 168 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "Nooooooo! I'm telling my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandJenny_TrainerPostBattle::
# 174 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I don't like you anymore! I'm going to\n"
	.string "tell my dad about you!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPreBattle::
# 180 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "I'm the oldest, I bet you can't beat me!$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerDefeated::
# 186 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My dad will want to speak to you...$"

Route2_Meadowvale_Farm_MapScripts_FarmhandLucy_TrainerPostBattle::
# 192 "data/maps/Route2_Meadowvale_Farm/scripts.pory"
	.string "My little sister likes to hide in long\n"
	.string "grass and scare people.$"
