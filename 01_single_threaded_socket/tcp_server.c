#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
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

    /* Client specific  */
}

int main(void)
{
    setup_tcp_server_communication();

    return 0;
}