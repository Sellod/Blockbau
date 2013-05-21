/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  Stefan Sterzing <stefan.sterzing@snafu.de>

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


#ifndef CHUNK_H
#define CHUNK_H

#include <stdint.h>
#include <vector>

class Map;

class Chunk
{

public:
	Chunk(int xcoor,int ycoor,int zcoor);
    virtual ~Chunk();
	int load();
	bool generate();
	void set(int x,int y,int z,uint16_t wert);
	uint16_t get(int x,int y,int z);
private:
	int _xcoor,_ycoor,_zcoor;
	std::vector<uint16_t> _data;
	Map *_map;
};

#endif // CHUNK_H
