#ifndef __TIC_TUI_H
#define __TIC_TUI_H

#include <ncurses.h>

/*!
 * \fn int init_tui ()
 * \brief Starts curses mode.
 * \return OK if success and ERR on failure.
 * 
 * Disables line buffering, echoing on getch, and enable keypad keys (F1, F2, arrow keys, etc..).
 */
int init_tui();

/*!
 * \fn void end_tui ()
 * \brief Ends curses mode.
 * \return void
 */
void end_tui();

/*!
 * \fn int rndr_addr (const char * addr, size_t addr_len)
 * \brief Render window to accept IRC server address and save it to the given buffer.
 * \param addr     A buffer to store the server address.
 * \param addr_len Length of the buffer.
 * \return OK on success and ERR on failure.
 */
int rndr_addr(const char * addr, size_t addr_len);

#endif
