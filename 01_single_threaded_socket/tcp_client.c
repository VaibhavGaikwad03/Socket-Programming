#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <memory.h>
#include "common.h"

#define DEST_PORT 2000
#define SERVER_IP_ADDRESS "127.0.0.1"

test_struct_t client_data;
result_struct_t result;

void setup_tcp_communication()
{
    /* Step 1: Initialization */
    /* Socket handle */
    int sockfd = 0, sent_recv_bytes = 0;
    int addr_len = 0;

    addr_len = sizeof(struct sockaddr);

    /* To store socket address: ip address and port */
    struct sockaddr_in dest;

    /* Step 2: specify server information */
    /* IPv4 sockets, other values are IPv6 */
    dest.sin_family = AF_INET;

    /* Client wants to send data to server process which is running on server machine, and listening on
    port number DEST_PORT, server IP address SERVER_IP_ADDRESS.
    Inform client about which server to send data to: All we need is port number, and server IP address. Please note that
    there can be many processes running on the server listening on different number of ports,
    our client is interested in sending data to server process which is listening on PORT = DEST_PORT */
    dest.sin_port = DEST_PORT;
    struct hostent *host = (struct hostent *)gethostbyname(SERVER_IP_ADDRESS);
    dest.sin_addr = ((struct in_addr *)host->h_addr);

    /* Step 3: create a TCP socket */
    /* Create a socket finally. socket() is a system call, which asks for three parameters */
}