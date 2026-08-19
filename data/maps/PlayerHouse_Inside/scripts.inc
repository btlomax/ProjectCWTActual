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
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_Left
# 15 "data/maps/PlayerHouse_Inside/scripts.pory"
	applymovement LOCALID_GRANDMOTHER, NPC_Face_Right
# 16 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitmovement 0
# 19 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_HOUSE_INSIDE
# 20 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat LOCALID_GRANDMOTHER, MAP_PLAYER_HOUSE_INSIDE
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_2, MSGBOX_DEFAULT
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_5, MSGBOX_DEFAULT
# 29 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 2
# 30 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherNPC::
# 35 "data/maps/PlayerHouse_Inside/scripts.pory"
	lockall
# 36 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 37 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 38 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_GrandmotherNPC_3
# 42 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_GrandmotherNPC_4
# 45 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_GrandmotherNPC_5
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_2, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherNPC_1:
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherNPC_3:
# 39 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 1
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_4:
# 43 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_5:
# 46 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1


# 56 "data/maps/PlayerHouse_Inside/scripts.pory"
Player_Face_Left:
# 57 "data/maps/PlayerHouse_Inside/scripts.pory"
	face_left
# 58 "data/maps/PlayerHouse_Inside/scripts.pory"
	step_end

# 61 "data/maps/PlayerHouse_Inside/scripts.pory"
NPC_Face_Right:
# 62 "data/maps/PlayerHouse_Inside/scripts.pory"
	face_right
# 63 "data/maps/PlayerHouse_Inside/scripts.pory"
	step_end

PlayerHouse_Inside_Dinner_Text_0:
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time for dinner!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, I made your favorite dish!\nI hope you're hungry!\pNow, tell me about your day.$"

PlayerHouse_Inside_Dinner_Text_2:
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\p...\pIt suits you dear child.\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I think you should go and see\nProfessor Larch.\pIf he's not at his lab he'll be in\nWestlock Village.\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 26 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you\nmore about Pokemon.\pBe careful in the tall grass.\nWild pokemon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 27 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've\nspoken to the Professor, and,\pdo be careful dear.$"

PlayerHouse_Inside_GrandmotherNPC_Text_0:
# 39 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back early!\pYour dinner won't be ready for a while.$"

PlayerHouse_Inside_GrandmotherNPC_Text_1:
# 46 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in Westlock Village.\pI'm sure he will want to see your new Pokemon!$"

PlayerHouse_Inside_GrandmotherNPC_Text_2:
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You know, I used to be quite the Pokemon trainer in my youth!$"
