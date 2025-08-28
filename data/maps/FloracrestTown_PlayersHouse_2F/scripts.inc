FloracrestTown_PlayersHouse_2F_MapScripts::
	.byte 0


FloracrestTown_PlayersHouse_2F_EventScript_WallClock::
# 6 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, FloracrestTown_PlayersHouse_2F_EventScript_CheckWallClock
# 7 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 8 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	call FloracrestTown_PlayersHouse_2F_EventScript_SetWallClock
# 9 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	delay 30
# 10 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 11 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 12 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


FloracrestTown_PlayersHouse_2F_EventScript_BlastoisePlush::
# 16 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_2F_EventScript_BlastoisePlush_Text_0, MSGBOX_SIGN
	return


FloracrestTown_PlayersHouse_2F_EventScript_CharizardPlush::
# 20 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_2F_EventScript_CharizardPlush_Text_0, MSGBOX_SIGN
	return


FloracrestTown_PlayersHouse_2F_EventScript_VenusaurPlush::
# 24 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_2F_EventScript_VenusaurPlush_Text_0, MSGBOX_SIGN
	return


# 27 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"

# 28 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
FloracrestTown_PlayersHouse_2F_Text_ClockIsStopped:
# 29 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 30 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 31 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"

# 32 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
FloracrestTown_PlayersHouse_2F_EventScript_SetWallClock::
# 33 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	special StartWallClock
# 35 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 36 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	return
# 37 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"

# 38 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
FloracrestTown_PlayersHouse_2F_EventScript_CheckWallClock::
# 39 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 40 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 42 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 43 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 44 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	end

FloracrestTown_PlayersHouse_2F_EventScript_BlastoisePlush_Text_0:
# 16 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	.string "It's your favorite Blastoise plush!$"

FloracrestTown_PlayersHouse_2F_EventScript_CharizardPlush_Text_0:
# 20 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	.string "It's your favorite Charizard plush!$"

FloracrestTown_PlayersHouse_2F_EventScript_VenusaurPlush_Text_0:
# 24 "data/maps/FloracrestTown_PlayersHouse_2F/scripts.pory"
	.string "It's your favorite Venusaur plush!$"
