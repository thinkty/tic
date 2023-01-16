
#include "main.h"

/*!
 * Entry point.
 */
int main(int argc, char ** argv)
{
	// TODO: parse server, nickname, channel, port if possible from args

	if (tui_init() != OK) {
		return ERR;
	}


	// Get IRC server address if needed
	char addr[ADDR_LEN] = {0};
	if (tui_rndr_conn(addr, ADDR_LEN) != OK) {
		tui_end();
		return ERR;
	}

	irc_t irc;
	memset(&irc, 0, sizeof(irc));

	// TODO: initialize necessary data structure for IRC socket
	// TODO: start IRC client thread
	// TODO: handle commands

	tui_end();
	return OK;
}

