#pragma once

#include <stdbool.h>
#include <uv.h>

#include "server.h"
#include "announce.h"

typedef struct _ClientConnection ClientConnection;

struct _ClientConnection {
	ServerHandle *handle;
	Server *server;
	HttpParserInfo *parserInfo;
	ClientAnnounceData *announce;
};

ClientConnection *ClientConnection_new( void );
void ClientConnection_free( ClientConnection *client );

int ClientConnection_getIPFromSocket( ClientConnection* client );
