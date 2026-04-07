#include <stdio.h>
#include <unistd.h>
#include "socket.h"

int main() {
    int server_fd = create_server_socket(8080);

    printf("Server is ready...\n");

    // Keep server running (temporary)
    while (1);

    close(server_fd);
    return 0;
}
