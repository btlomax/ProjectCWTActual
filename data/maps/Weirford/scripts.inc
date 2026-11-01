Weirford_MapScripts::
# 3 "data/maps/Weirford/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_MapScripts_OnTransition
	.byte 0


Weirford_MapScripts_OnTransition::
# 8 "data/maps/Weirford/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Weirford_MapScripts_OnTransition_2
# 13 "data/maps/Weirford/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_JONAS_OUTSIDE
# 14 "data/maps/Weirford/scripts.pory"
	addobject LOCALID_WEIRFORD_JONAS_OUTSIDE
Weirford_MapScripts_OnTransition_1:
	end

Weirford_MapScripts_OnTransition_2:
# 9 "data/maps/Weirford/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_JONAS_OUTSIDE
# 10 "data/maps/Weirford/scripts.pory"
	removeobject LOCALID_WEIRFORD_JONAS_OUTSIDE
	goto Weirford_MapScripts_OnTransition_1


Weirford_MapScripts_GreetingsSign::
# 21 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GreetingsSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_GymSign::
# 25 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GymSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_MartNPC::
# 29 "data/maps/Weirford/scripts.pory"
	lock
# 30 "data/maps/Weirford/scripts.pory"
	faceplayer
# 31 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_MartNPC_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GardenNPC::
# 37 "data/maps/Weirford/scripts.pory"
	lock
# 38 "data/maps/Weirford/scripts.pory"
	faceplayer
# 39 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GardenNPC_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_BasinSign::
# 47 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_0, MSGBOX_SIGN
# 49 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 0
	goto_if_gt Weirford_MapScripts_BasinSign_3
	return

Weirford_MapScripts_BasinSign_1:
# 53 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_2, MSGBOX_YESNO
# 56 "data/maps/Weirford/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Weirford_MapScripts_BasinSign_7
# 64 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_4, MSGBOX_DEFAULT
	return

Weirford_MapScripts_BasinSign_2:
# 51 "data/maps/Weirford/scripts.pory"
	goto_if_unset FLAG_FOUND_LOST_DOLL, Weirford_MapScripts_BasinSign_1
	return

Weirford_MapScripts_BasinSign_3:
# 50 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 4
	goto_if_lt Weirford_MapScripts_BasinSign_2
	return

Weirford_MapScripts_BasinSign_7:
# 58 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/Weirford/scripts.pory"
	giveitem ITEM_DAMP_RAGDOLL
# 60 "data/maps/Weirford/scripts.pory"
	setflag FLAG_FOUND_LOST_DOLL
	return


Weirford_MapScripts_GreetingsSign_Text_0:
# 21 "data/maps/Weirford/scripts.pory"
	.string "Welcome to Weirford!$"

Weirford_MapScripts_GymSign_Text_0:
# 25 "data/maps/Weirford/scripts.pory"
	.string "The text has faded away...$"

Weirford_MapScripts_MartNPC_Text_0:
# 31 "data/maps/Weirford/scripts.pory"
	.string "Have you been inside that scary looking\nbuilding yet?$"

Weirford_MapScripts_GardenNPC_Text_0:
# 39 "data/maps/Weirford/scripts.pory"
	.string "A bit of greenery in a town is always\n"
	.string "welcome. It makes everything feel\l"
	.string "fresher.$"

Weirford_MapScripts_BasinSign_Text_0:
# 47 "data/maps/Weirford/scripts.pory"
	.string "The stone basin is filled with murky\n"
	.string "water after the recent storms.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_1:
# 53 "data/maps/Weirford/scripts.pory"
	.string "You notice a water-logged bundle of\n"
	.string "cloth floating in the basin.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_2:
# 54 "data/maps/Weirford/scripts.pory"
	.string "Reach in and grab it?$"

Weirford_MapScripts_BasinSign_Text_3:
# 58 "data/maps/Weirford/scripts.pory"
	.string "It's very wet and soggy, but it seems\n"
	.string "intact.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_4:
# 64 "data/maps/Weirford/scripts.pory"
	.string "You decide not to grab the bundle.$"
