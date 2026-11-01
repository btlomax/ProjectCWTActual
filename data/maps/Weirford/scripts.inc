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
# 22 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GreetingsSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_GymSign::
# 27 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GymSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_MartNPC::
# 32 "data/maps/Weirford/scripts.pory"
	lock
# 33 "data/maps/Weirford/scripts.pory"
	faceplayer
# 34 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_MartNPC_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GardenNPC::
# 41 "data/maps/Weirford/scripts.pory"
	lock
# 42 "data/maps/Weirford/scripts.pory"
	faceplayer
# 43 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GardenNPC_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_BasinSign::
# 51 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_0, MSGBOX_SIGN
# 53 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 0
	goto_if_gt Weirford_MapScripts_BasinSign_3
	return

Weirford_MapScripts_BasinSign_1:
# 57 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_2, MSGBOX_YESNO
# 60 "data/maps/Weirford/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Weirford_MapScripts_BasinSign_7
# 68 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_4, MSGBOX_DEFAULT
	return

Weirford_MapScripts_BasinSign_2:
# 55 "data/maps/Weirford/scripts.pory"
	goto_if_unset FLAG_FOUND_LOST_DOLL, Weirford_MapScripts_BasinSign_1
	return

Weirford_MapScripts_BasinSign_3:
# 54 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 4
	goto_if_lt Weirford_MapScripts_BasinSign_2
	return

Weirford_MapScripts_BasinSign_7:
# 62 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_3, MSGBOX_DEFAULT
# 63 "data/maps/Weirford/scripts.pory"
	giveitem ITEM_DAMP_RAGDOLL
# 64 "data/maps/Weirford/scripts.pory"
	setflag FLAG_FOUND_LOST_DOLL
	return


Weirford_MapScripts_JonasOutside::
# 75 "data/maps/Weirford/scripts.pory"
	lock
# 76 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/Weirford/scripts.pory"
	applymovement LOCALID_WEIRFORD_JONAS_OUTSIDE, Common_Movement_ExclamationMark
# 78 "data/maps/Weirford/scripts.pory"
	waitmovement LOCALID_WEIRFORD_JONAS_OUTSIDE
# 79 "data/maps/Weirford/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Weirford/scripts.pory"
	faceplayer
# 81 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_2, MSGBOX_DEFAULT
# 83 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_3, MSGBOX_DEFAULT
# 84 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_4, MSGBOX_DEFAULT
# 85 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_5, MSGBOX_DEFAULT
# 86 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_6, MSGBOX_DEFAULT
# 87 "data/maps/Weirford/scripts.pory"
	applymovement LOCALID_WEIRFORD_JONAS_OUTSIDE, Weirford_Movement_Jonas_Turn_Around
# 89 "data/maps/Weirford/scripts.pory"
	release
	end


# 93 "data/maps/Weirford/scripts.pory"
Weirford_Movement_Jonas_Turn_Around:
# 95 "data/maps/Weirford/scripts.pory"
	face_up
# 96 "data/maps/Weirford/scripts.pory"
	step_end

Weirford_MapScripts_GreetingsSign_Text_0:
# 22 "data/maps/Weirford/scripts.pory"
	.string "Welcome to Weirford!$"

Weirford_MapScripts_GymSign_Text_0:
# 27 "data/maps/Weirford/scripts.pory"
	.string "The text has faded away...$"

Weirford_MapScripts_MartNPC_Text_0:
# 34 "data/maps/Weirford/scripts.pory"
	.string "Have you been inside that scary looking\nbuilding yet?$"

Weirford_MapScripts_GardenNPC_Text_0:
# 43 "data/maps/Weirford/scripts.pory"
	.string "A bit of greenery in a town is always\n"
	.string "welcome. It makes everything feel\l"
	.string "fresher.$"

Weirford_MapScripts_BasinSign_Text_0:
# 51 "data/maps/Weirford/scripts.pory"
	.string "The stone basin is filled with murky\n"
	.string "water after the recent storms.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_1:
# 57 "data/maps/Weirford/scripts.pory"
	.string "You notice a water-logged bundle of\n"
	.string "cloth floating in the basin.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_2:
# 58 "data/maps/Weirford/scripts.pory"
	.string "Reach in and grab it?$"

Weirford_MapScripts_BasinSign_Text_3:
# 62 "data/maps/Weirford/scripts.pory"
	.string "It's very wet and soggy, but it seems\n"
	.string "intact.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_4:
# 68 "data/maps/Weirford/scripts.pory"
	.string "You decide not to grab the bundle.$"

Weirford_MapScripts_JonasOutside_Text_0:
# 76 "data/maps/Weirford/scripts.pory"
	.string "{FONT_NARROW}The young man before you is visibly\n"
	.string "shaking. He's clutching a tattered\l"
	.string "notebook to his chest, leaving a wet\l"
	.string "stain on his shirt.{FONT_NORMAL}$"

Weirford_MapScripts_JonasOutside_Text_1:
# 81 "data/maps/Weirford/scripts.pory"
	.string "AAAAH!$"

Weirford_MapScripts_JonasOutside_Text_2:
# 82 "data/maps/Weirford/scripts.pory"
	.string "Oh wait, wait I'm sorry, I didn't mean to\n"
	.string "scare you!$"

Weirford_MapScripts_JonasOutside_Text_3:
# 83 "data/maps/Weirford/scripts.pory"
	.string "It's just...this notebook. It was my\n"
	.string "little brother's, he went missing a\l"
	.string "couple of years ago.$"

Weirford_MapScripts_JonasOutside_Text_4:
# 84 "data/maps/Weirford/scripts.pory"
	.string "Wait, you're a trainer! You don't happen\n"
	.string "to know how to use CUT do you?$"

Weirford_MapScripts_JonasOutside_Text_5:
# 85 "data/maps/Weirford/scripts.pory"
	.string "...$"

Weirford_MapScripts_JonasOutside_Text_6:
# 86 "data/maps/Weirford/scripts.pory"
	.string "I see, please come back when you know\n"
	.string "how to use CUT.$"
