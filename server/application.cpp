/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2013  Stefan Sterzing <stefan.sterzing@snafu.de>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#include "application.h"
#include "server.h"

#include <iostream>
#include <boost/asio.hpp>

Server::Application::Application()
{
	_server = new Server;
}

Server::Application::~Application()
{
	delete _server;
}

int Server::Application::run() {
	
	_server->start();
	_server->stop();
	return 0;
};
