#include "global.h"

int main(int argc, char const *argv[], char *envp[])
{
    int server;
    int optval = 1;
    struct sockaddr addr; 

    server = Socket(AF_INET, SOCK_STREAM, 0);
    Setsockopt(server, SOL_SOCKET, SO_REUSEADDR, (const void *)optval, sizeof(int));
    
    memset(&addr, 0, sizeof(struct sockaddr));
    addr.sa_family = AF_INET;
    Bind(server, , sizeof(sockaddr));

    return 0;
}