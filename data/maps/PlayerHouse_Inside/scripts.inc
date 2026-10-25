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
# 57 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 58 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_TALK_TO_LARCH
# 59 "data/maps/PlayerHouse_Inside/scripts.pory"
	special Quest_SetStage
# 61 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_Rhona::
# 66 "data/maps/PlayerHouse_Inside/scripts.pory"
	lock
# 67 "data/maps/PlayerHouse_Inside/scripts.pory"
	faceplayer
# 68 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Birthday
	return


PlayerHouse_Inside_Birthday::
# 72 "data/maps/PlayerHouse_Inside/scripts.pory"
	switch VAR_ALDERBROOK_TOWN_STATE
# 73 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 0, PlayerHouse_Inside_Birthday_3
# 89 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 1, PlayerHouse_Inside_Birthday_4
# 92 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 2, PlayerHouse_Inside_Birthday_5
# 95 "data/maps/PlayerHouse_Inside/scripts.pory"
	case 3, PlayerHouse_Inside_Birthday_6
# 98 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherOfferRest
PlayerHouse_Inside_Birthday_1:
# 101 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_Birthday_3:
# 74 "data/maps/PlayerHouse_Inside/scripts.pory"
	playse SE_PIN
# 75 "data/maps/PlayerHouse_Inside/scripts.pory"
	applymovement LOCALID_GRANDMOTHER, Common_Movement_ExclamationMark
# 76 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitmovement LOCALID_GRANDMOTHER
# 78 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Birthday_Text_0, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_4:
# 90 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_Dinner
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_5:
# 93 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_Birthday_Text_1, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_Birthday_1

PlayerHouse_Inside_Birthday_6:
# 96 "data/maps/PlayerHouse_Inside/scripts.pory"
	goto PlayerHouse_Inside_GrandmotherAfterPokedex
	goto PlayerHouse_Inside_Birthday_1


PlayerHouse_Inside_GrandmotherAfterPokedex::
# 106 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1, MSGBOX_DEFAULT
# 109 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2, MSGBOX_DEFAULT
# 132 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3, MSGBOX_DEFAULT
# 135 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4, MSGBOX_DEFAULT
# 136 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5, MSGBOX_DEFAULT
# 138 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 139 "data/maps/PlayerHouse_Inside/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 140 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6, MSGBOX_DEFAULT
# 141 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_7, MSGBOX_DEFAULT
# 142 "data/maps/PlayerHouse_Inside/scripts.pory"
	additem ITEM_POTION, 3
# 143 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_8, MSGBOX_DEFAULT
# 145 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 146 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_9, MSGBOX_DEFAULT
# 147 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherAfterPokedex_Text_10, MSGBOX_DEFAULT
# 151 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_ALDERBROOK_TOWN_STATE, 4
# 153 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 154 "data/maps/PlayerHouse_Inside/scripts.pory"
	setvar VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_BEAT_WEIRFORD_GYM
# 155 "data/maps/PlayerHouse_Inside/scripts.pory"
	special Quest_SetStage
# 157 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end


PlayerHouse_Inside_GrandmotherOfferRest::
# 162 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_0, MSGBOX_YESNO
# 164 "data/maps/PlayerHouse_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayerHouse_Inside_GrandmotherOfferRest_2
# 175 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_3, MSGBOX_DEFAULT
PlayerHouse_Inside_GrandmotherOfferRest_1:
# 179 "data/maps/PlayerHouse_Inside/scripts.pory"
	releaseall
	end

PlayerHouse_Inside_GrandmotherOfferRest_2:
# 165 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/PlayerHouse_Inside/scripts.pory"
	special HealPlayerParty
# 168 "data/maps/PlayerHouse_Inside/scripts.pory"
	playfanfare MUS_HEAL
# 169 "data/maps/PlayerHouse_Inside/scripts.pory"
	waitfanfare
# 170 "data/maps/PlayerHouse_Inside/scripts.pory"
	setrespawn HEAL_LOCATION_ALDERBROOK_TOWN_PLAYER_HOUSE
# 172 "data/maps/PlayerHouse_Inside/scripts.pory"
	msgbox PlayerHouse_Inside_GrandmotherOfferRest_Text_2, MSGBOX_DEFAULT
	goto PlayerHouse_Inside_GrandmotherOfferRest_1


# 183 "data/maps/PlayerHouse_Inside/scripts.pory"
PlayerHouse_Inside_MoveDown:
# 184 "data/maps/PlayerHouse_Inside/scripts.pory"
	walk_down
# 184 "data/maps/PlayerHouse_Inside/scripts.pory"
	walk_down
# 185 "data/maps/PlayerHouse_Inside/scripts.pory"
	face_left
# 186 "data/maps/PlayerHouse_Inside/scripts.pory"
	step_end

PlayerHouse_Inside_Dinner_Text_0:
# 33 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, just in time!\pCome and sit down.$"

PlayerHouse_Inside_Dinner_Text_1:
# 48 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Happy birthday {PLAYER}!\nMake a wish!\pNow, what have you been up to?$"

PlayerHouse_Inside_Dinner_Text_2:
# 49 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p...\pYou found a what?\p...\p...\pYou found a Pokemon?\pLet me see...\p...\pA surprise gift on your birthday no less.\pHmmmm I wonder...$"

PlayerHouse_Inside_Dinner_Text_3:
# 50 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\pI think you should go and see Professor\nLarch, he's an old friend.\pIf he's not at his lab, he'll be in Westlock\nVillage library,\npast Route 1.$"

PlayerHouse_Inside_Dinner_Text_4:
# 51 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "He'll be able to tell you more about\nPokemon.\pBe careful in the tall grass,\nwild Pokémon are sure to jump out at you!$"

PlayerHouse_Inside_Dinner_Text_5:
# 52 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Come and see me when you've spoken to\nthe Professor, and please,\pdo be careful dear.$"

PlayerHouse_Inside_Birthday_Text_0:
# 79 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You're finally up! I was starting to think\n"
	.string "you'd sleep through your special day!\p"
	.string "Happy birthday {PLAYER}!\p"
	.string "I'm just adding the finishing touches\n"
	.string "to your birthday cake, no peeking!\p"
	.string "Why don't you go and get some fresh air\n"
	.string "whilst I finish up in here.\p"
	.string "Just don't wander too far, okay?$"

PlayerHouse_Inside_Birthday_Text_1:
# 93 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, go and see Professor Larch in\n"
	.string "Westlock Village.\p"
	.string "I'm sure he will want to see your new\n"
	.string "Pokemon!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_0:
# 106 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER}, you're back, good!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_1:
# 107 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "...\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_2:
# 110 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Twenty years...\p"
	.string "Larch said that to you? Has it truly\n"
	.string "been that long?\p"
	.string "...the old ways...\p"
	.string "... Come here, {PLAYER}. Let me have a\n"
	.string "look at you.\p"
	.string "Hmmm...\p"
	.string "Perhaps I am only seeing what I want to\n"
	.string "see, I thought I saw it in Jul-...\p"
	.string "...\p"
	.string "{PLAYER}, you should take on the League\n"
	.string "challenge. See the region. Meet its\l"
	.string "people.\p"
	.string "Learn what kind of trainer you want to\n"
	.string "be.\p"
	.string "...\p"
	.string "Be careful, {PLAYER}. There are people\n"
	.string "out there who mean ill to those who are,\l"
	.string "different.\p"
	.string "Trust your Pokemon, and trust yourself,\n"
	.string "and I know you will live up to your\l"
	.string "potential.\p"
	.string "You can always come and see me, and tell\n"
	.string "me of your adventures!\p"
	.string "$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_3:
# 132 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Go back through Westlock to Meadowvale\n"
	.string "Farm. From there, make your way through\l"
	.string "the forest and you'll eventually reach\l"
	.string "Weirford Town.\p"
	.string "$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_4:
# 135 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Before you leave, I have something for\n you.$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_5:
# 137 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_6:
# 140 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "These will allow you to get around\nquicker. Hold B to run!\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_7:
# 141 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "And take these POTIONS, too.\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_8:
# 144 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "{PLAYER} received 3 POTIONS!$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_9:
# 146 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "So it begins again.\p Walk worthy, {PLAYER}.\p$"

PlayerHouse_Inside_GrandmotherAfterPokedex_Text_10:
# 148 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "You can always come home if you need\n"
	.string "to. I'd be happy to see you and your\l"
	.string "Pokemon!\p"
	.string "$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_0:
# 162 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Hello dear, do you and your POKéMON\nneed a rest?$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_1:
# 165 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "Of course. Make yourselves at home.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_2:
# 172 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "There we are. You and your POKéMON\nlook much better already.$"

PlayerHouse_Inside_GrandmotherOfferRest_Text_3:
# 175 "data/maps/PlayerHouse_Inside/scripts.pory"
	.string "All right, dear. Take care of yourselves.\n"
	.string "out there.$"
