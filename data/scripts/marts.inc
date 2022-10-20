Common_EventScript_Mart_General::
	compare VAR_NUM_BADGES, 0
	goto_if_eq MartGeneral0Badges
	compare VAR_NUM_BADGES, 1
	goto_if_eq MartGeneral0Badges
	compare VAR_NUM_BADGES, 2
	goto_if_eq MartGeneral2Badges
	compare VAR_NUM_BADGES, 3
	goto_if_eq MartGeneral2Badges
	compare VAR_NUM_BADGES, 4
	goto_if_eq MartGeneral4Badges
	compare VAR_NUM_BADGES, 5
	goto_if_eq MartGeneral4Badges
	compare VAR_NUM_BADGES, 6
	goto_if_eq MartGeneral6Badges
	compare VAR_NUM_BADGES, 7
	goto_if_eq MartGeneral6Badges
	compare VAR_NUM_BADGES, 8
	goto_if_eq MartGeneral8Badges
	end
	
MartGeneral0Badges::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart general0
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
general0::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE
	release
	end

MartGeneral2Badges::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart general2
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
general2::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE
	release
	end

MartGeneral4Badges::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart general4
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
general4::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE
	release
	end

MartGeneral6Badges::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart general6
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
general6::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE
	release
	end

MartGeneral8Badges::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart general8
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
general8::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ETHER
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_Balls::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart Balls
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
Balls::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_PREMIER_BALL
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_Vitamins::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart Vitamins
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
Vitamins::
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_Battle_Items::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart Battle_Items
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Battle_Items::
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_Mail::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart Mail
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
Mail::
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_GLITTER_MAIL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_BEAD_MAIL
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_Evo_Items::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart EvoItems
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
EvoItems::
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_METAL_COAT
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_NONE
	release
	end

Common_EventScript_Mart_TMs::
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemart TMs
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
TMs::
	.2byte ITEM_TM38_FIRE_BLAST
	.2byte ITEM_TM25_THUNDER
	.2byte ITEM_TM14_BLIZZARD
	.2byte ITEM_TM15_HYPER_BEAM
	.2byte ITEM_TM17_PROTECT
	.2byte ITEM_TM20_SAFEGUARD
	.2byte ITEM_TM33_REFLECT
	.2byte ITEM_TM16_LIGHT_SCREEN
	.2byte ITEM_NONE
	release
	end
