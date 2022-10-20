SootopolisCity_Mart_MapScripts:: @ 815B21A
	.byte 0

SootopolisCity_Mart_EventScript_15B24A:: @ 815B24A
	lock
	faceplayer
	goto_if_set FLAG_LEGENDARY_BATTLE_COMPLETED, SootopolisCity_Mart_EventScript_15B268
	goto_if_unset FLAG_LEGEND_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_15B268
	msgbox SootopolisCity_Mart_Text_18F8D7, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_15B268:: @ 815B268
	msgbox SootopolisCity_Mart_Text_18F890, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_15B272:: @ 815B272
	lock
	faceplayer
	goto_if_set FLAG_LEGENDARY_BATTLE_COMPLETED, SootopolisCity_Mart_EventScript_15B290
	goto_if_unset FLAG_LEGEND_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_15B290
	msgbox SootopolisCity_Mart_Text_18F96B, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_15B290:: @ 815B290
	msgbox SootopolisCity_Mart_Text_18F8F2, MSGBOX_DEFAULT
	release
	end
