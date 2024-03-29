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
}