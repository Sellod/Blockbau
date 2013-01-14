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


#ifndef GRAPHICENGINE_H
#define GRAPHICENGINE_H



class Vertexbuffer;
class Texture;
class Kamera;

class GraphicEngine
{

public:
    GraphicEngine();
    virtual ~GraphicEngine();
	void create(Vertexbuffer **vertexbuffer);
	void destroy(Vertexbuffer *vertexbuffer);
	void create(Texture **textur);
	void destroy(Texture *textur);
	void create(Kamera **kamera);
	void destroy(Kamera *kamera);
	int openScreen(int width,int hight,int bpp);
	bool render();
	
	void closeScreen();
};

#endif // GRAPHICENGINE_H
