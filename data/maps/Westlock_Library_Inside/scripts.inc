Westlock_Library_Inside_MapScripts::
	.byte 0


Westlock_Library_Inside_EventScripts_MeetProfLarch::
# 5 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1, MSGBOX_DEFAULT
# 8 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 9 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 10 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 11 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 12 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
# 13 "data/maps/Westlock_Library_Inside/scripts.pory"
	checkplayergender
# 15 "data/maps/Westlock_Library_Inside/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 0, Westlock_Library_Inside_EventScripts_MeetProfLarch_3
# 19 "data/maps/Westlock_Library_Inside/scripts.pory"
	case 1, Westlock_Library_Inside_EventScripts_MeetProfLarch_4
Westlock_Library_Inside_EventScripts_MeetProfLarch_1:
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_2, MSGBOX_DEFAULT
# 25 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5, MSGBOX_YESNO
# 29 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_6
# 36 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7, MSGBOX_DEFAULT
Westlock_Library_Inside_EventScripts_MeetProfLarch_5:
# 39 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
Westlock_Library_Inside_EventScripts_MeetProfLarch_10:
# 40 "data/maps/Westlock_Library_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Westlock_Library_Inside_EventScripts_MeetProfLarch_11
# 46 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10, MSGBOX_DEFAULT
# 47 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11, MSGBOX_DEFAULT
# 48 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12, MSGBOX_DEFAULT
# 49 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13, MSGBOX_DEFAULT
# 50 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_14, MSGBOX_DEFAULT
# 51 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3, MSGBOX_DEFAULT
# 53 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 55 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 56 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_15, MSGBOX_DEFAULT
# 59 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_16, MSGBOX_DEFAULT
# 60 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_17, MSGBOX_DEFAULT
# 61 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_18, MSGBOX_DEFAULT
# 62 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_19, MSGBOX_DEFAULT
	return

Westlock_Library_Inside_EventScripts_MeetProfLarch_3:
# 18 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Male, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_4:
# 20 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Female, MSGBOX_DEFAULT
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_1

Westlock_Library_Inside_EventScripts_MeetProfLarch_6:
# 31 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6, MSGBOX_DEFAULT
# 32 "data/maps/Westlock_Library_Inside/scripts.pory"
	setflag FLAG_AGREE_WITH_PROF_LIBRARY
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_5

Westlock_Library_Inside_EventScripts_MeetProfLarch_11:
# 42 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9, MSGBOX_DEFAULT
# 43 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8, MSGBOX_YESNO
	goto Westlock_Library_Inside_EventScripts_MeetProfLarch_10


Westlock_Library_Inside_EventScripts_ProfLarchExit::
	return


# 77 "data/maps/Westlock_Library_Inside/scripts.pory"
Movement_Larch_Exit:
	step_end

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 5 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "This room is far too humid for these\nbooks. I can barely make out the text...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1:
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "...'And when the great storm broke,the\namber force grew so intense that th-$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_2:
# 23 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Old age catching up to me I suppose,\nnot as sharp as I used to be.\p"
	.string "Now, before I forget my manners,\nI should introduce myself.\pI am Professor Larch, the regional\nPokémon Professor.\p$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_3:
# 25 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_4:
# 26 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "{PLAYER}, wonderful to meet you.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_5:
# 27 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I have been studying the Pokemon of this\nregion for many years.\pWonderous creatures, aren't they?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_6:
# 31 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Correct answer, you and I will get on\nfamously, I'm sure.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_7:
# 36 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I see. Well, I am sure you will come to\nappreciate them, given time.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_8:
# 39 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Will you allow me to see your Pokemon?$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_9:
# 42 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "I assure you, I have your best interests\nin mind.\pNow please, show me your Pokemon.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_10:
# 46 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Gah!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_11:
# 47 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "A r-rarer species, uh, in these p-parts, indeed y-yes!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_12:
# 48 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Hmmmm...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_13:
# 49 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "You said you found this on the canal?\pI should go and uh, look myself, yes!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_14:
# 50 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Who knows what other, uh, rare species may be in the area, heh...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_15:
# 58 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "GOODNESS ME, would you look at the time! I must be off, yes, yes, I must be off!$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_16:
# 59 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Nocturnal Pokemon are much too\nunpredictable for an old scholar\llike myself, heh...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_17:
# 60 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Come and visit me at the lab\nin Alderbrook Town.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_18:
# 61 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "We have much to discuss, and I would like\nto see your Pokemon again.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_19:
# 62 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Until then, {PLAYER}, I bid you adieu.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Male::
# 68 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young man!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Female::
# 73 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "Oh! Hello there young lady!\nYou snuck up on me, didn't you?\pMy head was buried in that book.$"
