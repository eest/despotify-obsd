/*
 * $Id: dns.h 182 2009-03-12 08:21:53Z zagor $
 *
 */

#ifndef DESPOTIFY_DNS_H
#define DESPOTIFY_DNS_H


char *dns_srv_list (char *);
in_addr_t dns_resolve_name (char *);
#endif
