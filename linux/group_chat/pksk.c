int Socket(int domain, int type, int protocol)
{
    int res;
    if ((res = socket(domain, type, protocol)) < 0) {
        unix_error('socket error');
    }
    return res;
}

void Setsockopt(int sockfd, int level, int optname, const void *optval, int optlen)
{
    if (setsockopt(sockfd, level, optname, optval, optlen) < 0) {
        unix_error('setsockopt error');
    }
}

void unix_error(const char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
}