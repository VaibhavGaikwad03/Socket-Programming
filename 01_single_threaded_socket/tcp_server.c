#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <netdb.h>
#include <memory.h>
#include <errno.h>
#include "common.h"

/* Server process is running on this port number. Client has to send data to this port no */
#define SERVER_PORT 2000

test_struct_t test_struct;
result_struct_t res_struct;
char data_buffer[1024];

void setup_tcp_server_communication()
{
    /* Step 1: Initialization */
    /* Socket handle and other variables */
    /* Master socket file descriptor, used to accept new client connection only, no data exchange */
    int master_sock_tcp_fd = 0, sent_recv_bytes = 0, addr_len = 0, opt = 1;

    /* Client specific communication socket file descriptor, used for only data exchange/communication between client and server */
    int comm_socket_fd = 0;
    /* Set of file descriptor on which select() polls. select() unblocks whenever data arrives on any fd present in this set */
    fd_set readfds;
    /* Variables to hold server information */
    struct sockaddr_in server_addr, client_addr; /* Structure to store the server and client info */

    /* Step 2: tcp master socket creation */
    if ((master_sock_tcp_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1)
    {
        printf("Socket creation failed\n");
        exit(1);
    }

    /* Step 3: specify server information */
    server_addr.sin_family = AF_INET; /* This socket will process only ipv4 network packets */
    server_addr.sin_port = SERVER_PORT; /* Server  */
}

int main(void)
{
    setup_tcp_server_communication();

    return 0;
}