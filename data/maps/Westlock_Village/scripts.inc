Westlock_Village_MapScripts::
	.byte 0


Westlock_Village_EventScript_MainSign::
# 5 "data/maps/Westlock_Village/scripts.pory"
	msgbox Westlock_Village_EventScript_MainSign_Text_0, MSGBOX_SIGN
	end


Westlock_Village_EventScript_LibrarySign::
# 11 "data/maps/Westlock_Village/scripts.pory"
	msgbox Westlock_Village_EventScript_LibrarySign_Text_0, MSGBOX_SIGN
	end


Westlock_Village_EventScript_ReturnToAlderbrook::
# 17 "data/maps/Westlock_Village/scripts.pory"
	compare VAR_ALDERBROOK_TOWN_STATE, 4
	goto_if_ne Westlock_Village_EventScript_ReturnToAlderbrook_1
	return

Westlock_Village_EventScript_ReturnToAlderbrook_1:
# 19 "data/maps/Westlock_Village/scripts.pory"
	lock
# 20 "data/maps/Westlock_Village/scripts.pory"
	msgbox Westlock_Village_EventScript_ReturnToAlderbrook_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/Westlock_Village/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route2_Meadowvale_Farm_Movement_ReturnToWestlock
# 23 "data/maps/Westlock_Village/scripts.pory"
	waitmovement
# 24 "data/maps/Westlock_Village/scripts.pory"
	release
	end


Westlock_Village_EventScript_FatGuy::
# 31 "data/maps/Westlock_Village/scripts.pory"
	lock
# 32 "data/maps/Westlock_Village/scripts.pory"
	faceplayer
# 34 "data/maps/Westlock_Village/scripts.pory"
	msgbox Westlock_Village_EventScript_FatGuy_Text_0
# 36 "data/maps/Westlock_Village/scripts.pory"
	release
	end


Westlock_Village_EventScript_OldMan::
# 42 "data/maps/Westlock_Village/scripts.pory"
	lock
# 43 "data/maps/Westlock_Village/scripts.pory"
	faceplayer
# 45 "data/maps/Westlock_Village/scripts.pory"
	msgbox Westlock_Village_EventScript_OldMan_Text_0
# 47 "data/maps/Westlock_Village/scripts.pory"
	release
	end


Westlock_Village_EventScript_MainSign_Text_0:
# 5 "data/maps/Westlock_Village/scripts.pory"
	.string "Welcome to Westlock Village!$"

Westlock_Village_EventScript_LibrarySign_Text_0:
# 11 "data/maps/Westlock_Village/scripts.pory"
	.string "Westlock Library Route 2 ->$"

Westlock_Village_EventScript_ReturnToAlderbrook_Text_0:
# 20 "data/maps/Westlock_Village/scripts.pory"
	.string "You should return to Alderbrook Town.\n"
	.string "The Professor is waiting for you.\p"
	.string "$"

Westlock_Village_EventScript_FatGuy_Text_0:
# 34 "data/maps/Westlock_Village/scripts.pory"
	.string "I'm trying to get my steps in but\n"
	.string "SOMEBODY has made it so I can only go\l"
	.string "two steps up and two steps down...$"

Westlock_Village_EventScript_OldMan_Text_0:
# 45 "data/maps/Westlock_Village/scripts.pory"
	.string "Oh hello child. Do you know Professor\n"
	.string "Larch once told me, 'Life uh, finds a\l"
	.string "way.'\p"
	.string "But, looking at the state of my\n"
	.string "petunias, I'm not so sure...$"
