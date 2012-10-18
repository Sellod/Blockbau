/***************************************************************************
 *   Copyright (C) 2007 by Stefan Sterzing   *
 *   stefan.sterzing@snafu.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "keyboard.h"
#include <SDL/SDL.h>


Keyboard::Keyboard()
{
}


Keyboard::~Keyboard()
{
}




/*!
    \fn Keyboard::isEscapePress()
 */
bool Keyboard::isEscapePress()
{
    Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_ESCAPE] ) return true;
	return false;
}


/*!
    \fn Keyboard::isUpArrowPress()
 */
bool Keyboard::isUpArrowPress()
{
    Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_UP] ) return true;
	return false;
}


/*!
    \fn Keyboard::isDownArrowPress()
 */
bool Keyboard::isDownArrowPress()
{
   
    Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_DOWN] ) return true;
	return false;
}


/*!
    \fn Keyboard::isRightArrowPress()
 */
bool Keyboard::isRightArrowPress()
{
     Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_RIGHT] ) return true;
	return false;
}


/*!
    \fn Keyboard::isLeftArrowPress()
 */
bool Keyboard::isLeftArrowPress()
{
    Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_LEFT] ) return true;
	return false;
}


/*!
    \fn Keyboard::isF2Press()
 */
bool Keyboard::isF2Press()
{
    
    Uint8 *keystate = SDL_GetKeyState(NULL);
	if ( keystate[SDLK_F2] ) return true;
	return false;
}
