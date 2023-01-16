
#include "tui.h"

int init_tui()
{
	initscr();

	if (cbreak() != OK || noecho() != OK || keypad(stdscr, TRUE) != OK) {
		return ERR;
	}

	return OK;
}

void end_tui()
{
	endwin();
}

int rndr_addr(const char * addr, size_t addr_len)
{
	return OK;
}

