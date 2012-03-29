/*
 * $Id: network.h 399 2009-07-29 11:50:46Z noah-w $
 *
 * Cross platform networking for despotify
 *
 */
 
#ifndef DESPOTIFY_NETWORK_H
#define DESPOTIFY_NETWORK_H

#ifdef __MINGW32__
#define __use_winsock__
#else
#define __use_posix__
#endif

#ifdef __OpenBSD__
#define __use_openbsd__
#endif

// include stuff
#ifdef __use_winsock__
 #include <stdio.h>
 #include <winsock.h>
 #ifndef in_addr_t
  #define in_addr_t unsigned long
 #endif
#elif defined __use_posix__
 #include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
 #include <netdb.h>
#endif

#ifdef __use_winsock__
#define sock_close(x) closesocket(x)
#else
#define sock_close(x) close(x)
#endif

int network_init (void);
int network_cleanup (void);

#endif
