
#include "tui.h"

int tui_init()
{
	initscr();

	if (cbreak() != OK || noecho() != OK || keypad(stdscr, TRUE) != OK) {
		return ERR;
	}

	return OK;
}

void tui_end()
{
	endwin();
}

int tui_rndr_conn(const char * addr, size_t addr_len)
{
	return OK;
}

