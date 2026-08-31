Westlock_PokeMart_MapScripts::
	.byte 0


Westlock_PokeMart_EventScript_MartEmployee::
# 5 "data/maps/Westlock_PokeMart/scripts.pory"
	lock
# 6 "data/maps/Westlock_PokeMart/scripts.pory"
	faceplayer
# 7 "data/maps/Westlock_PokeMart/scripts.pory"
	message Westlock_PokeMart_EventScript_MartEmployee_Text_0
# 8 "data/maps/Westlock_PokeMart/scripts.pory"
	waitmessage
# 9 "data/maps/Westlock_PokeMart/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Westlock_PokeMart_EventScript_MartEmployee_2
# 13 "data/maps/Westlock_PokeMart/scripts.pory"
	pokemart Westlock_PokeMart_Items
Westlock_PokeMart_EventScript_MartEmployee_1:
# 15 "data/maps/Westlock_PokeMart/scripts.pory"
	msgbox Westlock_PokeMart_EventScript_MartEmployee_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/Westlock_PokeMart/scripts.pory"
	release
	end

Westlock_PokeMart_EventScript_MartEmployee_2:
# 10 "data/maps/Westlock_PokeMart/scripts.pory"
	pokemart Westlock_PokeMart_ItemsWithPokeBalls
	goto Westlock_PokeMart_EventScript_MartEmployee_1


# 20 "data/maps/Westlock_PokeMart/scripts.pory"

# 21 "data/maps/Westlock_PokeMart/scripts.pory"
.align 2
# 22 "data/maps/Westlock_PokeMart/scripts.pory"
Westlock_PokeMart_Items::
# 23 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_POTION
# 24 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 25 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_REPEL
# 27 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_NONE
# 29 "data/maps/Westlock_PokeMart/scripts.pory"

# 30 "data/maps/Westlock_PokeMart/scripts.pory"
.align 2
# 31 "data/maps/Westlock_PokeMart/scripts.pory"
Westlock_PokeMart_ItemsWithPokeBalls::
# 32 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_POKE_BALL
# 33 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_POTION
# 34 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 35 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_REPEL
# 37 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 38 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_NONE

Westlock_PokeMart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/Westlock_PokeMart/scripts.pory"
	.string "How may I help you?$"

Westlock_PokeMart_EventScript_MartEmployee_Text_1:
# 15 "data/maps/Westlock_PokeMart/scripts.pory"
	.string "Thank you, please come again!$"
