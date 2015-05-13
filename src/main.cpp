#include <iostream>

#include "FSRequestProcessor.h"
#include "Server.h"

int main()
{
	ServerPtr server = std::make_shared<Server>(8080, 10);


	server->addReqProcessor(
		std::make_shared<FSRequestProcessor>());

	server->start();

	return 0;
}
