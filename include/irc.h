#ifndef __TIC_IRC_H
#define __TIC_IRC_H

/*!
 * See https://www.ulduzsoft.com/libircclient/index.html
 */

#include "libircclient.h"
#include "libirc_rfcnumeric.h"

#ifndef ERR
#define ERR (-1)
#endif

#ifndef OK
#define OK (0)
#endif

#define DEFAULT_IRC_PORT (6667)

/*!
 * \brief Structure to store all relevant information to IRC.
 */
typedef struct {
	irc_callbacks_t * callbacks;
	irc_session_t * session;
	char * addr;
	size_t addr_len;
	char * nickname;
	short port;
} irc_t;

/*!
 * \fn int irc_init (irc_t * irc)
 * \brief Initialize IRC session.
 * \param irc Structure that stores all relevant information to IRC.
 * \return OK on initialization success and ERR on failure.
 */
int irc_init(irc_t * irc);

/*!
 * \fn int irc_conn (irc_t * irc)
 * \brief Connect to the IRC server.
 * \param irc Structure that stores all relevant information to IRC.
 * \return OK on connection success and ERR on failure.
 */
int irc_conn(irc_t * irc);


#endif
