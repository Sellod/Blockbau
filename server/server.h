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

#ifndef SERVER_H
#define SERVER_H

#include <boost/asio.hpp>
#include <libxml/parser.h>
#include <libxml/tree.h>

namespace Server {

	class Config;
	
class Server
{
public:
	Server();
	~Server();
	void start();
	void stop();
	void start_session();
	
private:
	boost::asio::ip::address _address;
	boost::asio::io_service *_io_service;
	boost::asio::ip::tcp::acceptor *_acceptor;
	boost::asio::ip::tcp::endpoint _endpoint;
	Config *_config;
};

};

#endif // MYSERVER_H


