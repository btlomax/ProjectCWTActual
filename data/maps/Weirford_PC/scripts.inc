Weirford_PC_MapScripts::
	.byte 0


Weirford_PokeCentre_EventScript_Nurse::
# 5 "data/maps/Weirford_PC/scripts.pory"
	setvar VAR_0x800B, LOCALID_WEIRFORD_NURSE
# 6 "data/maps/Weirford_PC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/Weirford_PC/scripts.pory"
	waitmessage
# 8 "data/maps/Weirford_PC/scripts.pory"
	waitbuttonpress
# 9 "data/maps/Weirford_PC/scripts.pory"
	release
	end

