#include <sys/socket.h>
#include <netinet/in.h>
struct Server{
    int domain;
    int service;
    int protocol;
    u_long service;
    int port;
    int backlog;
};