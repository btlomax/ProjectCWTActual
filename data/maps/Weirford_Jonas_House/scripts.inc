Weirford_Jonas_House_MapScripts::
# 3 "data/maps/Weirford_Jonas_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Jonas_House_MapScripts_OnTransition
	.byte 0


Weirford_Jonas_House_MapScripts_OnTransition::
# 8 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Weirford_Jonas_House_MapScripts_OnTransition_2
# 13 "data/maps/Weirford_Jonas_House/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_JONAS_INSIDE
# 14 "data/maps/Weirford_Jonas_House/scripts.pory"
	removeobject LOCALID_WEIRFORD_JONAS_INSIDE
Weirford_Jonas_House_MapScripts_OnTransition_1:
	end

Weirford_Jonas_House_MapScripts_OnTransition_2:
# 9 "data/maps/Weirford_Jonas_House/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_JONAS_INSIDE
# 10 "data/maps/Weirford_Jonas_House/scripts.pory"
	addobject LOCALID_WEIRFORD_JONAS_INSIDE
	goto Weirford_Jonas_House_MapScripts_OnTransition_1

