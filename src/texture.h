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


#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include <iostream>
#include <SDL/SDL_video.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>
#include <GL/glext.h>
#include <GL/glxext.h>

class Texture
{
private:
	SDL_Surface *_tex;
	GLuint _id;
	bool _isLoadup;
	std::string _filename;
	
public:
    Texture();

    ~Texture();
    void load(std::string filename);
    void loadup();
    void destroyUp();
    SDL_Surface * getSDL_Surface();
    void setSDL_Surface(SDL_Surface* tex);
    std::string getFilename();
    int geth();
    int getw();
};

#endif // TEXTURE_H
