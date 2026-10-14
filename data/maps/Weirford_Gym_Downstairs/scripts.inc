Weirford_Gym_Downstairs_MapScripts::
# 2 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Gym_Downstairs_MapScripts_FirstVisit
	.byte 0


Weirford_Gym_Downstairs_MapScripts_FirstVisit::
# 7 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	goto_if_set FLAG_VISITED_WEIRFORD_GYM, Weirford_Gym_Downstairs_MapScripts_FirstVisit_1
	return

Weirford_Gym_Downstairs_MapScripts_FirstVisit_1:
# 9 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 10 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	addobject LOCALID_GYMLEADER_MILO
	return


Weirford_Gym_Downstairs_MapScripts_Tanya::
# 16 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_GYM_TANYA, Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPreBattle, Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerDefeated
# 20 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Gym_Downstairs_MapScripts_Cal::
# 26 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_GYM_CAL, Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPreBattle, Weirford_Gym_Downstairs_MapScripts_Cal_TrainerDefeated
# 30 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPreBattle::
# 34 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "This Gym has held on for decades,\n"
	.string "hidden away in the heart of town.\p"
	.string "Our Pokémon are much the same.\n"
	.string "They may be small, but good luck getting\l"
	.string "them to stay down!\p$"

Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerDefeated::
# 43 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Wow I didn't expect you to\n"
	.string "be so fierce!\p$"

Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPostBattle::
# 49 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "We all use small, scrappy Pokemon that\n"
	.string "tend to be Normal, Fighting or Dark\l"
	.string "types. $"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPreBattle::
# 56 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Cal: Get ready for a tough fight!\p$"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerDefeated::
# 61 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Cal: You defeated me...\p$"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPostBattle::
# 66 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Cal: That was a challenging battle!\p$"
