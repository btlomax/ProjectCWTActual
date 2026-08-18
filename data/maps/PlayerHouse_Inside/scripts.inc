PlayerHouse_Inside_MapScripts::
	.byte 0


PlayerHouse_Inside_MapScripts_GrandmotherNPC::
# 4 "data/maps/PlayerHouse_Inside/scripts.pory"
	lock
# 5 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 7 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_MapScripts_GrandmotherNPC_3
# 10 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_MapScripts_GrandmotherNPC_4
# 16 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_MapScripts_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
PlayerHouse_Inside_MapScripts_GrandmotherNPC_1:
# 19 "data/maps/PlayerHouse_Inside/scripts.pory"
	release
	end

PlayerHouse_Inside_MapScripts_GrandmotherNPC_3:
# 8 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_MapScripts_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_MapScripts_GrandmotherNPC_1

PlayerHouse_Inside_MapScripts_GrandmotherNPC_4:
# 11 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_MapScripts_GrandmotherNPC_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 2
	goto PlayerHouse_Inside_MapScripts_GrandmotherNPC_1


PlayerHouse_Inside_MapScripts_GrandmotherNPC_Text_0:
# 8 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back early!\pYour dinner won't be ready for a while.$"

PlayerHouse_Inside_MapScripts_GrandmotherNPC_Text_1:
# 11 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time for dinner!\pCome and sit down.$"
