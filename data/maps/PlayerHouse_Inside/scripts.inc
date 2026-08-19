PlayerHouse_Inside_MapScripts::
	.byte 0


PlayerHouse_Inside_Dinner::
# 4 "data/maps/PlayerHouse_Inside/scripts.pory"
	lockall
# 5 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/PlayerHouse_Inside/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_HOUSE_INSIDE
# 9 "data/maps/PlayerHouse_Inside/scripts.pory"
	hideobjectat LOCALID_GRANDMOTHER, MAP_PLAYER_HOUSE_INSIDE
# 10 "data/maps/PlayerHouse_Inside/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/PlayerHouse_Inside/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 4
# 13 "data/maps/PlayerHouse_Inside/scripts.pory"
	setobjectxy LOCALID_GRANDMOTHER, 2, 4
# 14 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 15 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject LOCALID_GRANDMOTHER, DIR_EAST
# 17 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_HOUSE_INSIDE
# 18 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat LOCALID_GRANDMOTHER, MAP_PLAYER_HOUSE_INSIDE
# 19 "data/maps/PlayerHouse_Inside/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_4, MSGBOX_DEFAULT
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_5, MSGBOX_DEFAULT
# 27 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 2
# 28 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherNPC::
# 33 "data/maps/PlayerHouse_Inside/scripts.pory"
	lockall
# 34 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 35 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 36 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_GrandmotherNPC_3
# 40 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_GrandmotherNPC_4
# 43 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_GrandmotherNPC_5
# 47 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_2, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherNPC_1:
# 50 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherNPC_3:
# 37 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_4:
# 41 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_5:
# 44 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1


PlayerHouse_Inside_Dinner_Text_0:
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time for dinner!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, I made your favorite dish!\nI hope you're hungry!\pNow, tell me about your day.$"

PlayerHouse_Inside_Dinner_Text_2:
# 22 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\pLet me see...\p...\pIt suits you dear child.\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I think you should go and see\nProfessor Larch, he's an old friend.\pIf he's not at his lab he'll be in\nWestlock Village.\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you\nmore about Pokemon.\pBe careful in the tall grass,\nwild pokemon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've\nspoken to the Professor, and please,\pdo be careful dear.$"

PlayerHouse_Inside_GrandmotherNPC_Text_0:
# 37 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back early!\pYour dinner won't be ready for a while.$"

PlayerHouse_Inside_GrandmotherNPC_Text_1:
# 44 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in Westlock Village.\pI'm sure he will want to see your new Pokemon!$"

PlayerHouse_Inside_GrandmotherNPC_Text_2:
# 47 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You know, I used to be quite the Pokemon trainer in my youth!$"
