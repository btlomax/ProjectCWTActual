Weirford_PM_MapScripts::
	.byte 0


Weirford_PokeMart_EventScript_MartEmployee::
# 5 "data/maps/Weirford_PM/scripts.pory"
	lock
# 6 "data/maps/Weirford_PM/scripts.pory"
	faceplayer
# 7 "data/maps/Weirford_PM/scripts.pory"
	message Weirford_PokeMart_EventScript_MartEmployee_Text_0
# 8 "data/maps/Weirford_PM/scripts.pory"
	waitmessage
# 9 "data/maps/Weirford_PM/scripts.pory"
	pokemart Weirford_PokeMart_Items
# 10 "data/maps/Weirford_PM/scripts.pory"
	msgbox Weirford_PokeMart_EventScript_MartEmployee_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/Weirford_PM/scripts.pory"
	release
	end


# 15 "data/maps/Weirford_PM/scripts.pory"

# 16 "data/maps/Weirford_PM/scripts.pory"
.align 2
# 17 "data/maps/Weirford_PM/scripts.pory"
Weirford_PokeMart_Items::
# 18 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_POKE_BALL
# 19 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_POTION
# 20 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 21 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_REPEL
# 23 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/Weirford_PM/scripts.pory"
    .2byte ITEM_NONE

Weirford_PokeMart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/Weirford_PM/scripts.pory"
	.string "How may I help you?$"

Weirford_PokeMart_EventScript_MartEmployee_Text_1:
# 10 "data/maps/Weirford_PM/scripts.pory"
	.string "Thank you, please come again!$"
