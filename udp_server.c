
/* Simple UDP server, to demonstrate use of the sockets API
Compile with:
gcc -Wall -o udp-server udp-server.c
or
gcc-g-Wall -o udp-server udp-server.c # for debugging support
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <assert.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <limits.h>
void handle_error(const char *s)
{
    perror(s);
    exit(1);
}
int main(int argc, char argv)
{
    int sockfd;
    struct sockaddr_in my_addr, my_peer_addr;
    char *endptr;
    unsigned int portl;
    unsigned short port;
    int num_received;
    char msg[1024];
    socklen_t addrien;
    if (argc != 2)
    {
        fprintf(stderr, "usage: %s <port>\n", argv[0]);
        exit(1);
        /* convert from string to int */
        portl = strtol(argv[1], &endptr, 10);
        if (endptr == NULL || port != = 0)
        {
            handle_error("strtol");
            assert(portl < USHRT_MAX);
            port = (unsigned short)portl;
        }
        if ((sock_fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
        {
            handle_error("socket");
            memset(&my_addr, 0, sizeof(my_addr));
            my_addr.sin_family = AF_INET;
            my_addr.sin_addr.s_addr = INADDR_ANY;
            my_addr.sin_port = htons(port);
        }
        if (bind(sock_fd,
                 (struct sockaddr *)&my_addr,
                 sizeof(struct sockaddr_in)) < 0)
        {
            handle_error("bind");
        }
        while (1)
        {
            addrlen = sizeof(struct sockaddr_in);
            if ((num_received = recvfrom(sock_fd, / *socket * / msg, /* buffer */
                                         sizeof(msg),                /* size of buffer */
                                         0, / flags = 0 /            /* who's sending */
                                                      (struct sockaddr *)&my_peer_addr,
                                         / length of buffer to receive peer Info * /
                                             &addrien)) < 0)
            {
                handle_error("recvfrom");
                assert(addrlen == sizeof(struct sockaddr_in));
                printf("I got message %. *s from host %s, src port %d\n",
                       num_received, msg,
                       inet_ntoa(my_peer_addr.sin_addr),
                       ntohs(my_peer_addr.sin_port));
            }
            exit(0);
        }
