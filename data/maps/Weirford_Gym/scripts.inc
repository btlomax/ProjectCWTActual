Weirford_Gym_MapScripts::
# 2 "data/maps/Weirford_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Gym_MapScripts_FirstEntry
	.byte 0


Weirford_Gym_MapScripts_FirstEntry::
# 7 "data/maps/Weirford_Gym/scripts.pory"
	goto_if_set FLAG_VISITED_WEIRFORD_GYM, Weirford_Gym_MapScripts_FirstEntry_2
# 13 "data/maps/Weirford_Gym/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 14 "data/maps/Weirford_Gym/scripts.pory"
	addobject LOCALID_GYMLEADER_MILO
# 15 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_VISITED_WEIRFORD_GYM
Weirford_Gym_MapScripts_FirstEntry_1:
	end

Weirford_Gym_MapScripts_FirstEntry_2:
# 9 "data/maps/Weirford_Gym/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_GYM_MILO
	goto Weirford_Gym_MapScripts_FirstEntry_1

