// Simple UDP clint , to demonstrate use of the sockets api
// compile with;
// gcc-wall-o udp-client udp-client.c
// or gcc-g-wall -o udp client .c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <limits.h>
#include <assert.h>

void handle_error(const char *s)
{
    perror(s);
    exit(1);
}
int main(int argc, char **argv)
{
    int sockfd, newsockfd, portno, n;
    struct sockaddr_in my_addr;
    struct hostent *hostnettp;
    char *endptr;
    unsigned int portl;
    unsigned short port;
    size_t num_to_send;
    size_t num_sent;

    if (argc != 4)
    {
        fprintf(stderr, "usage: %s<hostname><port><message>\n", argv[0]);
        exit(1);
    }
    // convert from string to int

    portl = strtol(argv[2], &endptr, 10);
    if (endptr == NULL || portl == 0)
    {
        handle_error("stetol");
        assert(portl < USHRT_MAX);
        port = (unsigned short)portl;
    }

    if (!(hostentp = gethostbyname(argv[1])))
    {
        handle_error("gethostbyname");
        exit(1);
    }
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        handle_error("socket");
        memset(&my_addr, 0, sizeof(my_addr));
        my_addr.sin_family = AF_INET;
        memccpy(&my_addr.sin_addr.s_addr,
                hostentp->h_addr_list[0],
                sizeof(struct in_addr));
        my_addr.sin_port = htons(port);
        printf("I am about to send %s to ip address %s and port %d\n",
               argv[3], inet_ntoa(my_addr.sin_addr), atoi(argv));
        num_to_send = strlen(argv[3]);

        num_sent = sendto(sockfd, /*socket*/ argv[3],
                          /* buffer to send */ num_to_send, /* number of bytes to send */

                          0, /* flags=0: bare-bones use case*/

                          (const struct sockaddr *)&addr, /* the destination */

                          sizeof(addr)); /* size of the destination struct */
    }
    if (num_sent != num_to_send)
    {

        assert(num_sent < 0);
        handle_error("sendto");

        printf("I just sent the bytes!\n");
        exit(0);
    }

    return 0;
}