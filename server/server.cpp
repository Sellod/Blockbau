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


#include "server.h"
#include "config.h"


Server::Server::Server()
{
	std::string ip;
	int port;
	
	LIBXML_TEST_VERSION
	_io_service = new boost::asio::io_service;
	_config =new Config;
	_config->load("config.xml");
	_config->get("ip",&ip);
	_config->get("port",&port);
	_address.from_string(ip.c_str());
	//_endpoint = new boost::asio::ip::tcp::endpoint(_address,port);
	_endpoint.address(_address);
	_endpoint.port(port);
	
};

Server::Server::~Server()
{
	xmlCleanupParser();
};

void Server::Server::start()
{
	_acceptor = new boost::asio::ip::tcp::acceptor((*_io_service),_endpoint);

};

void Server::Server::stop()
{

};

void Server::Server::start_session()
{
	
	
}






