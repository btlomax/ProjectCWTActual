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
# 17 "data/maps/Weirford/scripts.pory"
	goto_if_set FLAG_WEIRFORD_ACOLYTE_LIN_APPEARS, Weirford_MapScripts_OnTransition_6
Weirford_MapScripts_OnTransition_5:
	end

Weirford_MapScripts_OnTransition_2:
# 9 "data/maps/Weirford/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_JONAS_OUTSIDE
# 10 "data/maps/Weirford/scripts.pory"
	removeobject LOCALID_WEIRFORD_JONAS_OUTSIDE
	goto Weirford_MapScripts_OnTransition_1

Weirford_MapScripts_OnTransition_6:
# 19 "data/maps/Weirford/scripts.pory"
	removeobject LOCALID_WEIRFORD_ACOLYTE_LIN
	goto Weirford_MapScripts_OnTransition_5


Weirford_MapScripts_GreetingsSign::
# 27 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GreetingsSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_GymSign::
# 32 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GymSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_MartNPC::
# 37 "data/maps/Weirford/scripts.pory"
	lock
# 38 "data/maps/Weirford/scripts.pory"
	faceplayer
# 39 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_MartNPC_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GardenNPC::
# 46 "data/maps/Weirford/scripts.pory"
	lock
# 47 "data/maps/Weirford/scripts.pory"
	faceplayer
# 48 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GardenNPC_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_AcolyteLin::
# 56 "data/maps/Weirford/scripts.pory"
	lock
# 58 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_AcolyteLin_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/Weirford/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Weirford_MapScripts_AcolyteLin_2
# 70 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_AcolyteLin_Text_2, MSGBOX_DEFAULT
Weirford_MapScripts_AcolyteLin_1:
# 74 "data/maps/Weirford/scripts.pory"
	applymovement LOCALID_WEIRFORD_ACOLYTE_LIN, Weirford_Movement_AcolyteLin
# 75 "data/maps/Weirford/scripts.pory"
	waitmovement LOCALID_WEIRFORD_ACOLYTE_LIN
# 77 "data/maps/Weirford/scripts.pory"
	setflag FLAG_WEIRFORD_ACOLYTE_LIN_APPEARS
# 78 "data/maps/Weirford/scripts.pory"
	release
	end

Weirford_MapScripts_AcolyteLin_2:
# 63 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_AcolyteLin_Text_1, MSGBOX_DEFAULT
	goto Weirford_MapScripts_AcolyteLin_1


Weirford_MapScripts_BasinSign::
# 84 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_0, MSGBOX_SIGN
# 86 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 0
	goto_if_gt Weirford_MapScripts_BasinSign_3
	return

Weirford_MapScripts_BasinSign_1:
# 90 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_2, MSGBOX_YESNO
# 93 "data/maps/Weirford/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Weirford_MapScripts_BasinSign_7
# 101 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_4, MSGBOX_DEFAULT
	return

Weirford_MapScripts_BasinSign_2:
# 88 "data/maps/Weirford/scripts.pory"
	goto_if_unset FLAG_FOUND_LOST_DOLL, Weirford_MapScripts_BasinSign_1
	return

Weirford_MapScripts_BasinSign_3:
# 87 "data/maps/Weirford/scripts.pory"
	compare VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE, 4
	goto_if_lt Weirford_MapScripts_BasinSign_2
	return

Weirford_MapScripts_BasinSign_7:
# 95 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_BasinSign_Text_3, MSGBOX_DEFAULT
# 96 "data/maps/Weirford/scripts.pory"
	giveitem ITEM_DAMP_RAGDOLL
# 97 "data/maps/Weirford/scripts.pory"
	setflag FLAG_FOUND_LOST_DOLL
	return


Weirford_MapScripts_JonasOutside::
# 108 "data/maps/Weirford/scripts.pory"
	lock
# 109 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/Weirford/scripts.pory"
	applymovement LOCALID_WEIRFORD_JONAS_OUTSIDE, Common_Movement_ExclamationMark
# 111 "data/maps/Weirford/scripts.pory"
	waitmovement LOCALID_WEIRFORD_JONAS_OUTSIDE
# 112 "data/maps/Weirford/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Weirford/scripts.pory"
	faceplayer
# 114 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_2, MSGBOX_DEFAULT
# 116 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_3, MSGBOX_DEFAULT
# 117 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_4, MSGBOX_DEFAULT
# 118 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_5, MSGBOX_DEFAULT
# 119 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_JonasOutside_Text_6, MSGBOX_DEFAULT
# 120 "data/maps/Weirford/scripts.pory"
	applymovement LOCALID_WEIRFORD_JONAS_OUTSIDE, Weirford_Movement_Jonas_Turn_Around
# 122 "data/maps/Weirford/scripts.pory"
	release
	end


# 126 "data/maps/Weirford/scripts.pory"
Weirford_Movement_Jonas_Turn_Around:
# 128 "data/maps/Weirford/scripts.pory"
	face_up
# 129 "data/maps/Weirford/scripts.pory"
	step_end

# 132 "data/maps/Weirford/scripts.pory"
Weirford_Movement_AcolyteLin:
# 134 "data/maps/Weirford/scripts.pory"
	walk_right
# 135 "data/maps/Weirford/scripts.pory"
	face_left
	step_end

Weirford_MapScripts_GreetingsSign_Text_0:
# 27 "data/maps/Weirford/scripts.pory"
	.string "Welcome to Weirford!$"

Weirford_MapScripts_GymSign_Text_0:
# 32 "data/maps/Weirford/scripts.pory"
	.string "The text has faded away...$"

Weirford_MapScripts_MartNPC_Text_0:
# 39 "data/maps/Weirford/scripts.pory"
	.string "Have you been inside that scary looking\n"
	.string "building yet?$"

Weirford_MapScripts_GardenNPC_Text_0:
# 48 "data/maps/Weirford/scripts.pory"
	.string "A bit of greenery in a town is always\n"
	.string "welcome. It makes everything feel\l"
	.string "fresher.$"

Weirford_MapScripts_AcolyteLin_Text_0:
# 58 "data/maps/Weirford/scripts.pory"
	.string "Ah, the child from the forest, I was\n"
	.string "hoping to meet you again. After you\l"
	.string "bested me, I returned to the Convent to\l"
	.string "meditate on my defeat.\p"
	.string "You possess talent, certainly... but it\n"
	.string "is crude. Unrefined. A raw confidence\l"
	.string "that borders on recklessness.\p"
	.string "$"

Weirford_MapScripts_AcolyteLin_Text_1:
# 63 "data/maps/Weirford/scripts.pory"
	.string "I see that Milo handed over his badge...\n"
	.string "Could it be? The first true challenger\l"
	.string "in centuries?\p"
	.string "Or perhaps Milo has simply grown old and\n"
	.string "soft behind his desk, and the trial has\l"
	.string "lost whatever luster it once had.\p"
	.string "If the other heirs are ready, they will\n"
	.string "make themselves known soon enough. We\l"
	.string "shall see if you last that long.\p"
	.string "The Abbess insists on meeting you. Come\n"
	.string "up to the Convent in the north of town\l"
	.string "before you leave...though I doubt she\l"
	.string "will find much to admire.$"

Weirford_MapScripts_AcolyteLin_Text_2:
# 70 "data/maps/Weirford/scripts.pory"
	.string "You have not even challenged the gym\n"
	.string "yet, I see. Lingering around, wasting\l"
	.string "daylight.\p"
	.string "Should you somehow manage to best Milo,\n"
	.string "bring yourself up to the Convent in the\l"
	.string "north of town. The Abbess wishes to\l"
	.string "examine you herself, if only to satisfy\l"
	.string "her curiosity.$"

Weirford_MapScripts_BasinSign_Text_0:
# 84 "data/maps/Weirford/scripts.pory"
	.string "The stone basin is filled with murky\n"
	.string "water after the recent storms.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_1:
# 90 "data/maps/Weirford/scripts.pory"
	.string "You notice a water-logged bundle of\n"
	.string "cloth floating in the basin.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_2:
# 91 "data/maps/Weirford/scripts.pory"
	.string "Reach in and grab it?$"

Weirford_MapScripts_BasinSign_Text_3:
# 95 "data/maps/Weirford/scripts.pory"
	.string "It's very wet and soggy, but it seems\n"
	.string "intact.\p"
	.string "$"

Weirford_MapScripts_BasinSign_Text_4:
# 101 "data/maps/Weirford/scripts.pory"
	.string "You decide not to grab the bundle.$"

Weirford_MapScripts_JonasOutside_Text_0:
# 109 "data/maps/Weirford/scripts.pory"
	.string "{FONT_NARROW}The young man before you is visibly\n"
	.string "shaking. He's clutching a tattered\l"
	.string "notebook to his chest, leaving a wet\l"
	.string "stain on his shirt.{FONT_NORMAL}$"

Weirford_MapScripts_JonasOutside_Text_1:
# 114 "data/maps/Weirford/scripts.pory"
	.string "AAAAH!$"

Weirford_MapScripts_JonasOutside_Text_2:
# 115 "data/maps/Weirford/scripts.pory"
	.string "Oh wait, wait I'm sorry, I didn't mean to\n"
	.string "scare you!$"

Weirford_MapScripts_JonasOutside_Text_3:
# 116 "data/maps/Weirford/scripts.pory"
	.string "It's just...this notebook. It was my\n"
	.string "little brother's, he went missing a\l"
	.string "couple of years ago.$"

Weirford_MapScripts_JonasOutside_Text_4:
# 117 "data/maps/Weirford/scripts.pory"
	.string "Wait, you're a trainer! You don't happen\n"
	.string "to know how to use CUT do you?$"

Weirford_MapScripts_JonasOutside_Text_5:
# 118 "data/maps/Weirford/scripts.pory"
	.string "...$"

Weirford_MapScripts_JonasOutside_Text_6:
# 119 "data/maps/Weirford/scripts.pory"
	.string "I see, please come back when you know\n"
	.string "how to use CUT.$"
