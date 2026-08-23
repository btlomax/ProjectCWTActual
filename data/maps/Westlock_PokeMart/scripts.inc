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
	pokemart Westlock_PokeMart_Items
# 10 "data/maps/Westlock_PokeMart/scripts.pory"
	msgbox Westlock_PokeMart_EventScript_MartEmployee_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/Westlock_PokeMart/scripts.pory"
	release
	end


# 15 "data/maps/Westlock_PokeMart/scripts.pory"

# 16 "data/maps/Westlock_PokeMart/scripts.pory"
.align 2
# 17 "data/maps/Westlock_PokeMart/scripts.pory"
Westlock_PokeMart_Items::
# 18 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_POKE_BALL
# 19 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_POTION
# 20 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 21 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_REPEL
# 23 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/Westlock_PokeMart/scripts.pory"
    .2byte ITEM_NONE
# 25 "data/maps/Westlock_PokeMart/scripts.pory"
    release
# 26 "data/maps/Westlock_PokeMart/scripts.pory"
    end

Westlock_PokeMart_EventScript_MartEmployee_Text_0:
# 7 "data/maps/Westlock_PokeMart/scripts.pory"
	.string "How may I help you?$"

Westlock_PokeMart_EventScript_MartEmployee_Text_1:
# 10 "data/maps/Westlock_PokeMart/scripts.pory"
	.string "Thank you, please come again!$"
