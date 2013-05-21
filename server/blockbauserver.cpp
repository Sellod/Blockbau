
#include <iostream>
#include "application.h"


int main() {
	Server::Application *app;
	app = new Server::Application;
	std::cout << "Blockbau Server Version 0.00.1" << std::endl;
	return app->run();
};
