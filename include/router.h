#ifndef ROUTER_H
#define ROUTER_H

#include "parser.h"

void route_request(int client_fd, HttpRequest *req);

#endif