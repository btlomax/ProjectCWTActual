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
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_GrandmotherNPC_4
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_GrandmotherNPC_5
# 55 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 3, PlayerHouse_Inside_GrandmotherNPC_6
# 58 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherOfferRest
PlayerHouse_Inside_GrandmotherNPC_1:
# 61 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherNPC_3:
# 38 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_0, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_4:
# 50 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_5:
# 53 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherNPC_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherNPC_1

PlayerHouse_Inside_GrandmotherNPC_6:
# 56 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherAfterPokedex
	goto PlayerHouse_Inside_GrandmotherNPC_1


PlayerHouse_Inside_GrandmotherAfterPokedex::
# 66 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2, MSGBOX_DEFAULT
# 89 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3, MSGBOX_DEFAULT
# 90 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 91 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4, MSGBOX_DEFAULT
# 92 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 93 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 94 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5, MSGBOX_DEFAULT
# 95 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6, MSGBOX_DEFAULT
# 97 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 4
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherOfferRest::
# 103 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_0, MSGBOX_YESNO
# 105 "data/maps/PlayerHouse_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouse_Inside_GrandmotherOfferRest_2
# 111 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_3, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherOfferRest_1:
# 115 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherOfferRest_2:
# 106 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/PlayerHouse_Inside/scripts.pory"
	special HealPlayerParty
# 108 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_2, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherOfferRest_1


PlayerHouse_Inside_Dinner_Text_0:
# 6 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Happy birthday {PLAYER}!\nMake a wish!\pNow, what have you been up to?$"

PlayerHouse_Inside_Dinner_Text_2:
# 22 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\pLet me see...\p...\pA surprise gift on your\nbirthday no less...\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I think you should go and see\nProfessor Larch, he's an old friend.\pIf he's not at his lab he'll be in\nWestlock Village library.\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you more about\nPokemon.\pBe careful in the tall grass,\nwild pokemon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've spoken to\nthe Professor, and please,\pdo be careful dear.$"

PlayerHouse_Inside_GrandmotherNPC_Text_0:
# 39 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You're finally up! I was starting to think\n"
	.string "you'd sleep through your own birthday.\p"
	.string "Happy birthday {PLAYER}!\p"
	.string "I'm just adding the finishing touches\n"
	.string "to your birthday cake, no peeking!\p"
	.string "Why don't you go and get some fresh air\n"
	.string "whilst I finish up in here.\p"
	.string "Just don't wander too far, okay?$"

PlayerHouse_Inside_GrandmotherNPC_Text_1:
# 53 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in Westlock Village.\pI'm sure he will want to see your new Pokemon!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0:
# 66 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back, good!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1:
# 67 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2:
# 70 "data/maps/PlayerHouse_Inside/scripts.pory"
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
# 89 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Before you leave, I have something\nfor you.$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4:
# 91 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5:
# 94 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "These will allow you to get around quicker.\nHold B to run!\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6:
# 95 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Take care of yourself my dear, and\nremember to come back and see me.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_0:
# 103 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Hello dear, do you and your POKéMON\nneed a rest?$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_1:
# 106 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Of course. Make yourselves at home.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_2:
# 108 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "There we are. You and your POKéMON\nlook much better already.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_3:
# 111 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "All right, dear. Take care of\n"
	.string "yourselves out there.$"
