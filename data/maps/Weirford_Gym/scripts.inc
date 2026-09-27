Weirford_Gym_MapScripts::
# 2 "data/maps/Weirford_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Gym_MapScripts_FirstEntry
	.byte 0


Weirford_Gym_MapScripts_FirstEntry::
# 7 "data/maps/Weirford_Gym/scripts.pory"
	goto_if_unset FLAG_VISITED_WEIRFORD_GYM, Weirford_Gym_MapScripts_FirstEntry_2
Weirford_Gym_MapScripts_FirstEntry_1:
	end

Weirford_Gym_MapScripts_FirstEntry_2:
# 9 "data/maps/Weirford_Gym/scripts.pory"
	lock
# 10 "data/maps/Weirford_Gym/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Weirford_Gym/scripts.pory"
	applymovement LOCALID_GYMLEADER_MILO, Common_Movement_ExclamationMark
# 12 "data/maps/Weirford_Gym/scripts.pory"
	waitmovement LOCALID_GYMLEADER_MILO
# 13 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_VISITED_WEIRFORD_GYM
# 14 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 15 "data/maps/Weirford_Gym/scripts.pory"
	release
	goto Weirford_Gym_MapScripts_FirstEntry_1

