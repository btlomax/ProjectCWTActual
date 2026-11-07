Meadowvale_Farm_Inside_MapScripts::
	.byte 0


Meadowvale_Farm_Inside_MapScripts_FarmbossMax::
# 4 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	lock
# 5 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	faceplayer
# 7 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	goto_if_unset FLAG_MEADOWVALE_FARM_MAXINTRODUCTION, Meadowvale_Farm_Inside_MapScripts_FarmbossMax_2
Meadowvale_Farm_Inside_MapScripts_FarmbossMax_1:
# 14 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	compare VAR_ROUTE2_MEADOWVALE_FARM_STATE, 4
	goto_if_lt Meadowvale_Farm_Inside_MapScripts_FarmbossMax_5
# 20 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALEFARM_INSIDE_MAX, Meadowvale_Farm_Inside_Text_MaxPreBattle, Meadowvale_Farm_Inside_Text_MaxDefeated, Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut
# 27 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_Text_MaxPostBattle, MSGBOX_AUTOCLOSE
	end

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_2:
# 8 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_Intro, MSGBOX_DEFAULT
# 9 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	setflag FLAG_MEADOWVALE_FARM_MAXINTRODUCTION
# 10 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	setvar VAR_0x8004, QUEST_MAX_FARM_BOSS
# 11 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	special Quest_Add
	goto Meadowvale_Farm_Inside_MapScripts_FarmbossMax_1

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_5:
# 15 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_Text_MaxNeedToDefeatChildren, MSGBOX_DEFAULT
# 16 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	release
	end


Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut::
# 32 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_0
# 39 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	giveitem ITEM_HM_CUT
# 40 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 41 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_2
# 51 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_3
# 56 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	special HealPlayerParty
# 57 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	playfanfare MUS_HEAL
# 58 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	waitfanfare
# 60 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_4
# 65 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	release
	end


Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_0:
# 33 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "WOOOOOO I'M PUMPED NOW! I'm gonna work\n"
	.string "up a sweat in the fields!\p"
	.string "Take this HM, my kids can do it the old n\n"
	.string "fashioned way! HAHAHAHA!\p"
	.string "$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_1:
# 42 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "{PLAYER} received HM01 CUT!$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_2:
# 45 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You can use CUT to remove small trees\n"
	.string "that block your path.\p"
	.string "BUT, you will need the Weirford Gym\n"
	.string "badge to use it outside of battle...\p"
	.string "$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_3:
# 51 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "Let me heal your Pokémon for you, it's\n"
	.string "still a fair way to Weirford.\p"
	.string "$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_4:
# 60 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "I don't think anyone has taken on the\n"
	.string "League challenge for a very long time...\p"
	.string "In fact, I don't even know if it's a gym\n"
	.string "anymore! But Milo is in there, he'll agree\l"
	.string "to battle you.\p"
	.string "Best of luck, BUB!\p"
	.string "$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_Intro::
# 69 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "Welcome to Meadowvale Farm, where we\n"
	.string "grow crops, raise POKéMON, and\l"
	.string "apparently collect children.\p"
	.string "Turns out 'sowing wild oats' is not just\n"
	.string "a farming expression.\p"
	.string "FOUR kids!\p"
	.string "FOUR!\p"
	.string "Their mothers have left them with me\n"
	.string "and swanned off to parts unknown!\p"
	.string "So what do I do? I PUT THEM TO WORK!\p"
	.string "I have them plow the fields, I have them\n"
	.string "weed the crops, feed the animals, and I\l"
	.string "have them chase off trespassers!\p"
	.string "They have 'fun' and my farm prospers!\p"
	.string "Everyone wins! Mostly me.\p"
	.string "Anyway, you need to defeat all FOUR of\n"
	.string "my farmhands if you wanna take a shot\l"
	.string "at the CHAMP!\p"
	.string "I've got a great prize for you if you\n"
	.string "can take me down!\p"
	.string "$"

Meadowvale_Farm_Inside_Text_MaxNeedToDefeatChildren::
# 94 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You need to defeat all FOUR of my kids\n"
	.string "if you wanna take a shot at the CHAMP!\p"
	.string "$"

Meadowvale_Farm_Inside_Text_MaxPreBattle::
# 101 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You've beaten all of them?\p"
	.string "...HELL YEAH!\p"
	.string "Alright, the CHAMP is here! Let's\n"
	.string "goooooo!\p"
	.string "Take me down if you can, BUB!\p"
	.string "$"

Meadowvale_Farm_Inside_Text_MaxDefeated::
# 111 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You beat me? I can't believe it!\p"
	.string "...HELL YEAH!\p"
	.string "You've got some BEANS, kid! You took me\n"
	.string "down no sweat!$"

Meadowvale_Farm_Inside_Text_MaxPostBattle::
# 121 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "My kids will be all over me for losing\n"
	.string "now.\p"
	.string "URRRH!\p"
	.string "They're gonna be behind the plow for a\n"
	.string "week!\p"
	.string "HAHAHAHAHAHA!\p"
	.string "$"
