/*
 * $Id: keyexchange.h 461 2009-11-11 13:40:15Z zagor $
 *
 */

#ifndef DESPOTIFY_KEYEXCHANGE_H
#define DESPOTIFY_KEYEXCHANGE_H

#include "session.h"

int send_client_initial_packet (SESSION *);
int read_server_initial_packet (SESSION *);
int do_key_exchange (SESSION * c);
int key_init (SESSION *);
#endif
