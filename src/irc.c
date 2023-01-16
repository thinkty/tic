
#include "irc.h"

int init_irc(irc_t * irc)
{
	if (!irc) {
		return ERR;
	}

	/*
	irc->callbacks.event_connect = event_connect;
	irc->callbacks.event_join = event_join;
	irc->callbacks.event_nick = dump_event;
	irc->callbacks.event_quit = dump_event;
	irc->callbacks.event_part = dump_event;
	irc->callbacks.event_mode = dump_event;
	irc->callbacks.event_topic = dump_event;
	irc->callbacks.event_kick = dump_event;
	irc->callbacks.event_channel = event_channel;
	irc->callbacks.event_privmsg = event_privmsg;
	irc->callbacks.event_notice = dump_event;
	irc->callbacks.event_invite = dump_event;
	irc->callbacks.event_umode = dump_event;
	irc->callbacks.event_ctcp_rep = dump_event;
	irc->callbacks.event_ctcp_action = dump_event;
	irc->callbacks.event_unknown = dump_event;
	irc->callbacks.event_numeric = event_numeric;

	irc->callbacks.event_dcc_chat_req = irc_event_dcc_chat;
	irc->callbacks.event_dcc_send_req = irc_event_dcc_send;
	*/

	// Connect to the IRC server and create a session
	irc->session = irc_create_session(irc->callbacks);
	if (!irc->session) {
		return ERR;
	}

	// Set irc session options if necessary
	// irc_option_set(irc->session, LIBIRC_OPTION_STRIPNICKS);
	// irc_option_set(irc->session, LIBIRC_OPTION_SSL_NO_VERIFY);

	// If port is not set, use default IRC port
	if (!irc->port) {
		irc->port = DEFAULT_IRC_PORT;
	}

	return OK;
}

int irc_conn(irc_t * irc)
{

	return OK;
}




