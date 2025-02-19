#ifndef __BBA_H
#define __BBA_H
#include <network.h>

extern int net_initialized;
extern int bba_exists;
extern struct in_addr bba_localip;
extern struct in_addr bba_netmask;
extern struct in_addr bba_gateway;

void init_network();
void init_wiiload_thread();

#endif
