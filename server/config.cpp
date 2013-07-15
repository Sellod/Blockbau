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


#include "config.h"
#include <iostream>
#include <string.h>

Server::Config::Config():_doc(NULL)
{

}

Server::Config::~Config()
{

}

bool Server::Config::load(std::string filename)
{
	xmlNode *node=NULL;
	
	
	_doc = xmlReadFile(filename.c_str(),NULL,0);
	if (_doc == NULL) {
		return false;
	};
	_root = xmlDocGetRootElement(_doc);
	
	for(node=_root; node!=NULL; node=node->next) {
		if(xmlStrEqual(node->name,(xmlChar*)"config")) {
			std::cout << "blub" << std::endl;
			node = node->children;
		};
		if(xmlStrEqual(node->name,(xmlChar*)"ip")) {
			std::cout << "blub2" << std::endl;
			std::cout << node->children->content << std::endl;
			set("ip",node->children->content);
		};
		if(xmlStrEqual(node->name,(xmlChar*)"port")) {
			std::cout << "blub2" << std::endl;
			std::cout << node->children->content << std::endl;
		};
		std::cout << node->name << (long)node->children << std::endl;
	
	};
	
	return true;
}


void Server::Config::get(std::string name, std::string *ant)
{
	std::vector<ConfigEntry*>::iterator c;
	std::string n,w;

	for(c=_data.begin(); c!=_data.end(); c++) {
		(*c)->get(&n,&w);
		if(n==name) {
			(*ant) = w;
		};
	};
}

void Server::Config::set(std::string name, std::string wert)
{
	ConfigEntry *neuentry;
	
	neuentry = new ConfigEntry;
	neuentry->set(name,wert);
	
	_data.push_back(neuentry);
}

void Server::Config::set(std::string name, xmlChar* wert)
{
	std::string ant;
	
	ant = (const char*)wert;
	set(name,ant);
	
	
	
}
