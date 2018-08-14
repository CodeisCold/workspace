#ifndef __PKSK_H__
#define __PKSK_H__

void unix_error(const char *msg);

int Socket(int domain, int type, int protocol);
void Setsockopt(int sockfd, int level, int optname, const void *optval, int optlen);


#include "pksk.c"
#endif