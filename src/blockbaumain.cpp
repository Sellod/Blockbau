#include <iostream>
#include "application.h"



main()
{

	Application *app;
	
	app = new Application;
	
	app->run();
	
	delete app;
	
	return 0;
}
