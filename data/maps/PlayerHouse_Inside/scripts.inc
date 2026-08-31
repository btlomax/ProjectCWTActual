PlayerHouse_Inside_MapScripts::
# 2 "data/maps/PlayerHouse_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse_Inside_OnTransition
# 3 "data/maps/PlayerHouse_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse_Inside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse_Inside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PlayerHouse_Inside/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, PlayerHouse_Inside_BirthdayIntro
	.2byte 0


PlayerHouse_Inside_OnTransition::
# 9 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto_if_unset FLAG_DOWNSTAIRS_FIRST_TIME, PlayerHouse_Inside_OnTransition_2
# 13 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_TEMP_0, 1
PlayerHouse_Inside_OnTransition_1:
	end

PlayerHouse_Inside_OnTransition_2:
# 10 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto PlayerHouse_Inside_OnTransition_1


PlayerHouse_Inside_BirthdayIntro::
# 20 "data/maps/PlayerHouse_Inside/scripts.pory"
	lock
# 21 "data/maps/PlayerHouse_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse_Inside_MoveDown
# 22 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitmovement
# 23 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 24 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject LOCALID_GRANDMOTHER, DIR_EAST
# 25 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_DOWNSTAIRS_FIRST_TIME
# 26 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Birthday
	return


PlayerHouse_Inside_Dinner::
# 31 "data/maps/PlayerHouse_Inside/scripts.pory"
	lockall
# 32 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 33 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/PlayerHouse_Inside/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_HOUSE_INSIDE
# 36 "data/maps/PlayerHouse_Inside/scripts.pory"
	hideobjectat LOCALID_GRANDMOTHER, MAP_PLAYER_HOUSE_INSIDE
# 37 "data/maps/PlayerHouse_Inside/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/PlayerHouse_Inside/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 4
# 40 "data/maps/PlayerHouse_Inside/scripts.pory"
	setobjectxy LOCALID_GRANDMOTHER, 2, 4
# 41 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 42 "data/maps/PlayerHouse_Inside/scripts.pory"
	turnobject LOCALID_GRANDMOTHER, DIR_EAST
# 44 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_HOUSE_INSIDE
# 45 "data/maps/PlayerHouse_Inside/scripts.pory"
	showobjectat LOCALID_GRANDMOTHER, MAP_PLAYER_HOUSE_INSIDE
# 46 "data/maps/PlayerHouse_Inside/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_3, MSGBOX_DEFAULT
# 51 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_4, MSGBOX_DEFAULT
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Dinner_Text_5, MSGBOX_DEFAULT
# 54 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 2
# 55 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ROUTE1_STATE, 3
# 56 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_Rhona::
# 61 "data/maps/PlayerHouse_Inside/scripts.pory"
	lock
# 62 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 63 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Birthday
	return


PlayerHouse_Inside_Birthday::
# 67 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 68 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_Birthday_3
# 80 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_Birthday_4
# 83 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_Birthday_5
# 86 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 3, PlayerHouse_Inside_Birthday_6
# 89 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherOfferRest
PlayerHouse_Inside_Birthday_1:
# 92 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_Birthday_3:
# 69 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Birthday_Text_0, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_4:
# 81 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_5:
# 84 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Birthday_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_6:
# 87 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherAfterPokedex
	goto PlayerHouse_Inside_Birthday_1


PlayerHouse_Inside_GrandmotherAfterPokedex::
# 97 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2, MSGBOX_DEFAULT
# 126 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4, MSGBOX_DEFAULT
# 129 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 130 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 131 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5, MSGBOX_DEFAULT
# 132 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6, MSGBOX_DEFAULT
# 133 "data/maps/PlayerHouse_Inside/scripts.pory"
	additem ITEM_POTION, 3
# 134 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 135 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_7, MSGBOX_DEFAULT
# 136 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 137 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_8, MSGBOX_DEFAULT
# 138 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_9, MSGBOX_DEFAULT
# 139 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_10, MSGBOX_DEFAULT
# 142 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 4
# 143 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherOfferRest::
# 148 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_0, MSGBOX_YESNO
# 150 "data/maps/PlayerHouse_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouse_Inside_GrandmotherOfferRest_2
# 156 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_3, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherOfferRest_1:
# 160 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherOfferRest_2:
# 151 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_1, MSGBOX_DEFAULT
# 152 "data/maps/PlayerHouse_Inside/scripts.pory"
	special HealPlayerParty
# 153 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_2, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherOfferRest_1


# 164 "data/maps/PlayerHouse_Inside/scripts.pory"
PlayerHouse_Inside_MoveDown:
# 165 "data/maps/PlayerHouse_Inside/scripts.pory"
	walk_down
# 165 "data/maps/PlayerHouse_Inside/scripts.pory"
	walk_down
# 166 "data/maps/PlayerHouse_Inside/scripts.pory"
	face_left
# 167 "data/maps/PlayerHouse_Inside/scripts.pory"
	step_end

PlayerHouse_Inside_Dinner_Text_0:
# 33 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 48 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Happy birthday {PLAYER}!\nMake a wish!\pNow, what have you been up to?$"

PlayerHouse_Inside_Dinner_Text_2:
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\pLet me see...\p...\pA surprise gift on your birthday no less...\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 50 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\pI think you should go and see Professor\nLarch, he's an old friend.\pIf he's not at his lab he'll be in Westlock\nVillage library.\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 51 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you more about\nPokemon.\pBe careful in the tall grass,\nwild pokemon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've spoken to\nthe Professor, and please,\pdo be careful dear.$"

PlayerHouse_Inside_Birthday_Text_0:
# 70 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You're finally up! I was starting to think\n"
	.string "you'd sleep through your special day!\p"
	.string "Happy birthday {PLAYER}!\p"
	.string "I'm just adding the finishing touches\n"
	.string "to your birthday cake, no peeking!\p"
	.string "Why don't you go and get some fresh air\n"
	.string "whilst I finish up in here.\p"
	.string "Just don't wander too far, okay?$"

PlayerHouse_Inside_Birthday_Text_1:
# 84 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in Westlock Village.\pI'm sure he will want to see your new Pokemon!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0:
# 97 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back, good!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1:
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2:
# 101 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "The sun and moon will cross paths...\p"
	.string "Larch said that to you?\p"
	.string "...\p"
	.string "Come here, {PLAYER}. Let me have a look at you.\p"
	.string "Hmmm...\p"
	.string "Perhaps I am only seeing what I want to\n"
	.string "see after all these years.\p"
	.string "Still... there is a strength in you.\n"
	.string "A feeling that you are meant to go\l"
	.string "farther than this little town.\p"
	.string "...\p"
	.string "You should take on the League challenge.\n"
	.string "See the region. Meet its people.\p"
	.string "Learn what kind of trainer you want to be.\p"
	.string "...\p"
	.string "Be careful, {PLAYER}. There are people out\n"
	.string "there who mean ill to those who are,\n"
	.string "different.\p"
	.string "Trust your Pokemon, and trust yourself,\n"
	.string "and I know you will live up to your\l"
	.string "potential.\p"
	.string "You can always come and see me, and tell\n"
	.string "me ofyour adventures!\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3:
# 126 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Before you leave, I have something for\n you.$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4:
# 128 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5:
# 131 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "These will allow you to get around\nquicker. Hold B to run!\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6:
# 132 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "And take these POTIONS, too.\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_7:
# 135 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received 3 POTIONS!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_8:
# 137 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "I see it now, the glint in the eyes...\n$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_9:
# 138 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "So it begins again.\p Walk worthy, {PLAYER}.\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_10:
# 139 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You can always come home if you need to.\n"
	.string "I'd be happy to see you and your Pokemon!\p$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_0:
# 148 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Hello dear, do you and your POKéMON\nneed a rest?$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_1:
# 151 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Of course. Make yourselves at home.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_2:
# 153 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "There we are. You and your POKéMON\nlook much better already.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_3:
# 156 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "All right, dear. Take care of yourselves.\n"
	.string "out there.$"
