FallarborTown_Mart_MapScripts:: @ 8153966
	.byte 0

FallarborTown_Mart_EventScript_15399C:: @ 815399C
	msgbox FallarborTown_Mart_Text_176FF0, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_1539A5:: @ 81539A5
	msgbox FallarborTown_Mart_Text_1770E2, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_1539AE:: @ 81539AE
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, 0
	msgbox FallarborTown_Mart_Text_1770D3, MSGBOX_DEFAULT
	waitmoncry
	release
	end
