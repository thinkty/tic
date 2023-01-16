
#include "main.h"

/**
 * Entry point.
 */
int main(void)
{
	if (init_tui() != OK) {
		return ERR;
	}

	// Get IRC server address
	// TODO: is nickname also needed at the point?
	char addr[ADDR_LEN] = {0};
	if (rndr_addr(addr, ADDR_LEN) != OK) {
		end_tui();
		return ERR;
	}

	// TODO: initialize necessary data structure for IRC socket
	// TODO: start IRC client thread
	// TODO: handle commands

	end_tui();
	return OK;
}

