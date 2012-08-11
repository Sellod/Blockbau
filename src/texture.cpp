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


#include "texture.h"

Texture::Texture()
 : _tex(NULL),_isLoadup(false)
{
}


Texture::~Texture()
{	
	SDL_FreeSurface(_tex);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D,_id);
	glDeleteTextures(1,&_id);
	glDisable(GL_TEXTURE_2D);
}




/*!
    \fn Texture::load(string filename)
 */
void Texture::load(std::string filename)
{
    _tex = IMG_Load(filename.c_str());
	if( !_tex) { 
		std::cout << "IMG_Load: " << IMG_GetError () << std::endl;

	};
	_filename = filename;
}


/*!
    \fn Texture::loadup()
 */
void Texture::loadup()
{
	if(_tex!=NULL) {
		if(_isLoadup==false) {
			glEnable(GL_TEXTURE_2D);

			glGenTextures(1,&_id);
			glBindTexture(GL_TEXTURE_2D,_id);
	
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		
			if(_tex->format->BytesPerPixel==3) {
				glTexImage2D(GL_TEXTURE_2D, 0, 3, _tex->w, _tex->h,0, GL_RGB, GL_UNSIGNED_BYTE, _tex->pixels);
			};
			if(_tex->format->BytesPerPixel==4) {
				glTexImage2D(GL_TEXTURE_2D, 0, 4, _tex->w, _tex->h,0, GL_RGBA, GL_UNSIGNED_BYTE, _tex->pixels);
			};
	
			glDisable(GL_TEXTURE_2D);
			_isLoadup=true;
		} else {
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D,_id);
			glDisable(GL_TEXTURE_2D);
		 };
	};
}


/*!
    \fn Texture::destroyUp()
 */
void Texture::destroyUp()
{
    glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D,_id);
	glDeleteTextures(1,&_id);
	glDisable(GL_TEXTURE_2D);
}


/*!
    \fn Texture::getSDL_Surface()
 */
SDL_Surface * Texture::getSDL_Surface()
{
    return _tex;
}


/*!
    \fn Texture::setSDL_Surface(SDL_Surface* tex)
 */
void Texture::setSDL_Surface(SDL_Surface* tex)
{
    _tex=tex;
}


/*!
    \fn Texture::getFilename()
 */
std::string Texture::getFilename()
{
	return _filename;
}


/*!
    \fn Texture::geth()
 */
int Texture::geth()
{
    return _tex->h;
}


/*!
    \fn Texture::getw()
 */
int Texture::getw()
{
    return _tex->w;
}
