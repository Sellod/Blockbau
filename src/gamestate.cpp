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


#include "gamestate.h"

GameState::GameState():_quit(false),_kartenType(normal)
{

}

GameState::~GameState()
{

}

const bool GameState::isQuit()
{
	return _quit;
}

void GameState::setQuit()
{
	_quit = true;
}

GameState::KartenType GameState::isKartenType()
{
	return _kartenType;
}

void GameState::setKartenType(GameState::KartenType kartentype)
{

}
