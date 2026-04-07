#include "parser.h"
#include <stdio.h>

void parse_request(char *buffer, HttpRequest *req) {
    sscanf(buffer, "%s %s", req->method, req->path);
}