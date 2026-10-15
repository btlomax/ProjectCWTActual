Weirford_Gym_Downstairs_MapScripts::
# 2 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Gym_Downstairs_MapScripts_FirstVisit
	.byte 0


Weirford_Gym_Downstairs_MapScripts_FirstVisit::
# 7 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	goto_if_set FLAG_VISITED_WEIRFORD_GYM, Weirford_Gym_Downstairs_MapScripts_FirstVisit_1
	return

Weirford_Gym_Downstairs_MapScripts_FirstVisit_1:
# 9 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_GYM_MILO
# 10 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	addobject LOCALID_GYMLEADER_MILO
	return


Weirford_Gym_Downstairs_MapScripts_LeaderMilo::
# 16 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	lock
# 17 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	faceplayer
# 19 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	goto_if_set FLAG_DEFEATED_WEIRFORD_GYM, Weirford_Gym_Downstairs_MapScripts_LeaderMilo_2
# 28 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_GYM_MILO, Weirford_Gym_Downstairs_MapScripts_LeaderMilo_TrainerPreBattle, Weirford_Gym_Downstairs_MapScripts_LeaderMilo_TrainerDefeated, Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated
	end

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_2:
# 21 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	release
	end


Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated::
# 38 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	setflag FLAG_DEFEATED_WEIRFORD_GYM
# 48 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	setflag FLAG_BADGE01_GET
# 50 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 53 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	setvar VAR_0x8004, QUEST_A_NEW_CHALLENGE
# 63 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	setvar VAR_0x8005, QUEST_A_NEW_CHALLENGE_STAGE_BEAT_SECOND_GYM
# 64 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	special Quest_SetStage
# 66 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_3, MSGBOX_DEFAULT
# 71 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	setvar VAR_0x8004, QUEST_THE_HOUSE_IN_THE_WOODS
# 72 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	special Quest_Add
# 74 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	release
	end


Weirford_Gym_Downstairs_MapScripts_Tanya::
# 80 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_GYM_TANYA, Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPreBattle, Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerDefeated
# 84 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Gym_Downstairs_MapScripts_Cal::
# 90 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	trainerbattle_single TRAINER_WEIRFORD_GYM_CAL, Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPreBattle, Weirford_Gym_Downstairs_MapScripts_Cal_TrainerDefeated
# 94 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	msgbox Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end


Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Text_0:
# 21 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "I'll be sure to let the other leaders\n"
	.string "know that you're on your way.\p$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_0:
# 38 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "You met us on our own terms - and endured.\p"
	.string "So it is true...\n"
	.string "I had hoped I was not imagining it.\p"
	.string "The old bloodlines stir, after all this\n"
	.string "time. Congratulations trainer, you have\l"
	.string "bested me. I hereby award you the\l"
	.string "Grit Badge.\p$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_1:
# 50 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "You received the Grit Badge!\p$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_2:
# 54 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "The GRIT BADGE is proof that you do not\n"
	.string "go down without a fight.\p"
	.string "With it, Pokémon up to L19 will continue\n"
	.string "to listen to you.\p"
	.string "It also allows you to use HM01 outside\n"
	.string "battle.$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_Defeated_Text_3:
# 66 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Don't forget to talk to people you see,\n"
	.string "some might have need of your help.\p"
	.string "In fact, I'm sure there's a gentleman in\n"
	.string "town who looked like he needs some help.\p$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_TrainerPreBattle::
# 98 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Welcome trainer!\p"
	.string "I'm Milo, the leader of this Gym.\p"
	.string "The others answered my call, though none\n"
	.string "of us expected to battle here again.\p"
	.string "We don't rely on size or spectacle here.\p"
	.string "My Pokémon know how to take a hit,\n"
	.string "find an opening, and keep fighting.\p"
	.string "Show me you can do the same!\p$"

Weirford_Gym_Downstairs_MapScripts_LeaderMilo_TrainerDefeated::
# 110 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "You would not stay down...\p"
	.string "That is the spirit this Gym was built on.$"

Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPreBattle::
# 116 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "When Milo called me in, I thought he\n"
	.string "was pulling my leg.\p"
	.string "This Gym has held on for decades,\n"
	.string "hidden away in the heart of town.\p"
	.string "Our Pokémon are much the same.\n"
	.string "They may be small, but good luck getting\l"
	.string "them to stay down!\p$"

Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerDefeated::
# 127 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Wow! I did not expect the Gym to open\n"
	.string "again just so I could lose!$"

Weirford_Gym_Downstairs_MapScripts_Tanya_TrainerPostBattle::
# 133 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "It feels strange seeing this place active\n"
	.string "again...\p"
	.string "We all use small, scrappy Pokémon that\n"
	.string "tend to be Normal, Fighting or Dark\l"
	.string "types.\p$"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPreBattle::
# 142 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Milo called us in for a real Gym battle?\p"
	.string "I thought this old place would stay quiet\n"
	.string "forever!\p$"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerDefeated::
# 149 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "Sorry, buddy! I guess I am out of practice!$"

Weirford_Gym_Downstairs_MapScripts_Cal_TrainerPostBattle::
# 154 "data/maps/Weirford_Gym_Downstairs/scripts.pory"
	.string "I cannot believe we are doing this again.\p"
	.string "You are tough, but Milo will not give up!$"
