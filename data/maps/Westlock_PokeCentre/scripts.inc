Westlock_PokeCentre_MapScripts::
# 2 "data/maps/Westlock_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Westlock_PokeCentre_MapScripts_OnTransition
# 3 "data/maps/Westlock_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Westlock_PokeCentre_MapScripts_OnTransition::
# 7 "data/maps/Westlock_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_WESTLOCK_POKE_CENTRE
	end


Westlock_PokeCentre_EventScript_Nurse::
# 13 "data/maps/Westlock_PokeCentre/scripts.pory"
	setvar VAR_0x800B, LOCALID_WESTLOCK_NURSE
# 14 "data/maps/Westlock_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/Westlock_PokeCentre/scripts.pory"
	waitmessage
# 16 "data/maps/Westlock_PokeCentre/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Westlock_PokeCentre/scripts.pory"
	release
	end

