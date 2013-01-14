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


#include "graphicengine.h"
#include <SDL/SDL.h>
#include "texture.h"
#include "vertexbuffer.h"
#include "kamera.h"

GraphicEngine::GraphicEngine()
{
	SDL_Init(SDL_INIT_VIDEO);
}

GraphicEngine::~GraphicEngine()
{
	SDL_Quit();
}

void GraphicEngine::create(Vertexbuffer** vertexbuffer)
{
	(*vertexbuffer) = new Vertexbuffer;
}

void GraphicEngine::destroy(Vertexbuffer* vertexbuffer)
{
	delete vertexbuffer;
}


void GraphicEngine::create(Texture** textur)
{
	(*textur) = new Texture;
}

void GraphicEngine::destroy(Texture* textur)
{
	delete textur;
}


int GraphicEngine::openScreen(int width, int hight, int bpp)
{

	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 );
	SDL_GL_SetAttribute(SDL_GL_SWAP_CONTROL,0);
	SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL,1);

	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 24 );
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );
	
	SDL_SetVideoMode(width,hight,bpp,SDL_OPENGL);

	
	glViewport(0, 0, width - 1, hight - 1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, width / hight, 0.1, 1000.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(0.0,0.0,1.0,0.0);
    glDisable(GL_CULL_FACE);

	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	
	return 0;
}

void GraphicEngine::closeScreen()
{

}

bool GraphicEngine::render()
{
	return true;
}





