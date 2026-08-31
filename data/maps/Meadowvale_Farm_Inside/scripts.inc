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
# 12 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	compare VAR_ROUTE2_MEADOWVALE_FARM_STATE, 4
	goto_if_lt Meadowvale_Farm_Inside_MapScripts_FarmbossMax_5
# 18 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_MEADOWVALEFARM_INSIDE_MAX, Meadowvale_Farm_Inside_Text_MaxPreBattle, Meadowvale_Farm_Inside_Text_MaxDefeated, Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut
# 25 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_Text_MaxPostBattle, MSGBOX_AUTOCLOSE
	end

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_2:
# 8 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_Intro, MSGBOX_DEFAULT
# 9 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	setflag FLAG_MEADOWVALE_FARM_MAXINTRODUCTION
	goto Meadowvale_Farm_Inside_MapScripts_FarmbossMax_1

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_5:
# 13 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_Text_MaxNeedToDefeatChildren, MSGBOX_DEFAULT
# 14 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	release
	end


Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut::
# 30 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_0
# 37 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	giveitem ITEM_HM_CUT
# 38 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 39 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	msgbox Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_2
# 49 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	release
	end


Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_0:
# 31 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "WOOO I'M PUMPED NOW!\n"
	.string "I'm gonna work up a sweat in the fields!\p"
	.string "Take this HM, my kids can do it\n"
	.string "the old fashioned way! HAHAHAHA!\p$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_1:
# 40 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "{PLAYER} received HM01 CUT!$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_GiveCut_Text_2:
# 43 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You can use CUT to remove small trees\n"
	.string "that block your path.\p"
	.string "BUT, you will need the Weirford Gym badge\n"
	.string "to use it outside of battle...\p$"

Meadowvale_Farm_Inside_MapScripts_FarmbossMax_Intro::
# 53 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "Welcome to Meadowvale Farm, where we\n"
	.string "grow crops, raise POKéMON, and apparently\l"
	.string "collect children.\p"
	.string "Turns out 'sowing wild oats' is not\n"
	.string "just a farming expression.\p"
	.string "FOUR kids!\p"
	.string "FOUR!\p"
	.string "So what do I do?\n"
	.string "I PUT THEM TO WORK!\p"
	.string "I have them plow the fields, I have them\n"
	.string "weed the crops, feed the animals,\l"
	.string "and I have them chase\l"
	.string "off trespassers!\p"
	.string "They have 'fun' and my farm prospers!\p"
	.string "Everyone wins! Mostly me.\p"
	.string "Anyway, you need to defeat all FOUR of my\n"
	.string "farmhands if you wanna take a shot at\l"
	.string "the CHAMP!\p"
	.string "I've got a great prize for you if you\n"
	.string "can take me down!\p$"

Meadowvale_Farm_Inside_Text_MaxNeedToDefeatChildren::
# 77 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You need to defeat all FOUR of my farmhands\n"
	.string "if you wanna take a shot at the CHAMP!\p$"

Meadowvale_Farm_Inside_Text_MaxPreBattle::
# 82 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You've beaten all FOUR of them?\n"
	.string "...HELL YEAH!\p"
	.string "Alright, the CHAMP is here!\n"
	.string "Let's goooooo!\p"
	.string "Take me down if you can, BUB!\p$"

Meadowvale_Farm_Inside_Text_MaxDefeated::
# 90 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "You beat me?\n"
	.string "I can't believe it!\p"
	.string "...HELL YEAH!\p"
	.string "You've got some BEANS, kid!\n"
	.string "You took me down no sweat!$"

Meadowvale_Farm_Inside_Text_MaxPostBattle::
# 98 "data/maps/Meadowvale_Farm_Inside/scripts.pory"
	.string "My kids will be all over me for losing now.\p"
	.string "URRRH!\p"
	.string "They're gonna be behind the plow for a\n"
	.string "week!\p"
	.string "HAHAHAHAHAHA!\p$"
