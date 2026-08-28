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
	setvar VAR_ROUTE1_STATE, 3
# 29 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherNPC::
# 34 "data/maps/PlayerHouse_Inside/scripts.pory"
	lockall
# 35 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 36 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 37 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_GrandmotherNPC_3
# 40 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_GrandmotherNPC_4
# 43 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_GrandmotherNPC_5
# 46 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 3, PlayerHouse_Inside_GrandmotherNPC_6
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherOfferRest
PlayerHouse_Inside_GrandmotherNPC_1:
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherNPC_3:
# 38 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_4:
# 41 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_5:
# 44 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_6:
# 47 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherAfterPokedex
	goto PlayerHouse_Inside_GrandmotherNPC_1


PlayerHouse_Inside_GrandmotherAfterPokedex::
# 57 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2, MSGBOX_DEFAULT
# 80 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3, MSGBOX_DEFAULT
# 81 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4, MSGBOX_DEFAULT
# 83 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 84 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 85 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 86 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5, MSGBOX_DEFAULT
# 87 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6, MSGBOX_DEFAULT
# 89 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 4
# 90 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherOfferRest::
# 95 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_0, MSGBOX_YESNO
# 97 "data/maps/PlayerHouse_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouse_Inside_GrandmotherOfferRest_2
# 103 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_3, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherOfferRest_1:
# 107 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherOfferRest_2:
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_1, MSGBOX_DEFAULT
# 99 "data/maps/PlayerHouse_Inside/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_2, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherOfferRest_1


PlayerHouse_Inside_Dinner_Text_0:
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time for dinner!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I made your favorite food, so I hope\nyou're hungry!\pNow, tell me about your day.$"

PlayerHouse_Inside_Dinner_Text_2:
# 22 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\pLet me see...\p...\pIt suits you dear child.\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I think you should go and see\nProfessor Larch, he's an old friend.\pIf he's not at his lab he'll be in\nWestlock Village.\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you more about\nPokemon.\pBe careful in the tall grass,\nwild pokemon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've spoken to\nthe Professor, and please,\pdo be careful dear.$"

PlayerHouse_Inside_GrandmotherNPC_Text_0:
# 38 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back early!\pYour dinner won't be ready for a while.$"

PlayerHouse_Inside_GrandmotherNPC_Text_1:
# 44 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in Westlock Village.\pI'm sure he will want to see your new Pokemon!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0:
# 57 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back, good!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1:
# 58 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2:
# 61 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "The sun and moon will cross paths...\p"
	.string "Larch said that to you?\p"
	.string "...\p"
	.string "Come here, {PLAYER}. Let me have a look\n"
	.string "at you.\p"
	.string "Hm.\p"
	.string "Perhaps I am only seeing what I want to\n"
	.string "see after all these years.\p"
	.string "Still... there is a strength in you.\n"
	.string "A feeling that you are meant to go\l"
	.string "farther than this little town.\p"
	.string "...\p"
	.string "You should take on the League challenge.\n"
	.string "See the region. Meet its people.\p"
	.string "Learn what kind of trainer you want to be.\p"
	.string "And if Professor Larch asks you to do\n"
	.string "something strange... trust your instincts.$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3:
# 80 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Before you leave, I have something\nfor you.$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4:
# 82 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5:
# 86 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "These will allow you to get around quicker.\pHold B to run!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6:
# 87 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Take care of yourself my dear, and remember to come back and see me.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_0:
# 95 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Hello dear, do you and your POKéMON\nneed a rest?$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_1:
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Of course. Make yourselves at home.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_2:
# 100 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "There we are. You and your POKéMON\nlook much better already.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_3:
# 103 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "All right, dear. Take care of\n"
	.string "yourselves out there.$"
