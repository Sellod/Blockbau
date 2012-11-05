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

#include <stdio.h>

#include "engine.h"
#include "graphicengine.h"
#include "gameengine.h"
#include "keyboard.h"
#include "guimanager.h"
#include <SDL/SDL.h>

Engine::Engine()
{
	_graphicEngine = new GraphicEngine;
	_gameEngine = new GameEngine;
	_keyboard = new Keyboard;
	_guiManager = new GuiManager;
	
	_graphicEngine->openScreen(800,600,32);
}

Engine::~Engine()
{
	_graphicEngine->closeScreen();
}

int Engine::run()
{
	while(_keyboard->isEscapePress()==false) {
		
		SDL_PumpEvents();
	};
	return 0;
}
