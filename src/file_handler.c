#include "file_handler.h"
#include <stdio.h>
#include <unistd.h>

void serve_file(int client_fd, const char *path) {
    FILE *file = fopen(path, "r");

    if (!file) {
        char *response =
            "HTTP/1.1 404 Not Found\r\n\r\nFile not found";
        write(client_fd, response, strlen(response));
        return;
    }

    char buffer[4096];

    fread(buffer, 1, sizeof(buffer), file);

    char *header =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n\r\n";

    write(client_fd, header, strlen(header));
    write(client_fd, buffer, strlen(buffer));

    fclose(file);
}