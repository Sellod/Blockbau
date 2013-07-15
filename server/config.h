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


#ifndef CONFIG_H
#define CONFIG_H
#include <string>
#include <vector>
#include <libxml/tree.h>
#include <libxml/parser.h>

#include "configentry.h"

namespace Server {

class Config
{

public:
    Config();
    virtual ~Config();
	bool load(std::string filename);
	void get(std::string name, std::string *ant);
	void set(std::string name, std::string wert);
	void set(std::string name, xmlChar *wert);
private:
	std::vector<ConfigEntry*> _data;
	xmlDoc *_doc;
	xmlNode *_root;
	
};

}
#endif // CONFIG_H
