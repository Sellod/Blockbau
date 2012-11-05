#include <iostream>
#include "application.h"



int main()
{

	Application *app;
	
	app = new Application;
	
	app->run();
	
	delete app;
	
	return 0;
}
