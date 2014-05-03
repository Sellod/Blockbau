/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2013  Stefan Sterzing <stefan.sterzing@snafu.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "characterwerte.h"

CharacterWerte::CharacterWerte()
{
}

CharacterWerte::~CharacterWerte()
{

}

bool CharacterWerte::setCharacterWert ( int nr, int wert )
{
	if(nr==0) {
		_intelligenz=wert;
		return true;
	};
	if(nr==1) {
		_staerke_beine=wert;
		return true;
	};
	if(nr==2) {
		_staerke_arme=wert;
		return true;
	};
	if(nr==3) {
		_konstitution=wert;
		return true;
	};
	if(nr==4) {
		_geschicklichkeit=wert;
		return true;
	};
	
	if(nr==5) {
		_weisheit=wert;
		return true;
	};
	if(nr==6) {
		_charisma=wert;
		return true;
	};
	if(nr==7) {
		_willenskraft=wert;
		return true;
	};
	if(nr==8) {
		_wahrnehmungskraft_ohren=wert;
		return true;
	};
	if(nr==9) {
		_wahrnehmungskraft_augen=wert;
		return true;
	};
	
	if(nr==10) {
		_wahrnehmungskraft_nase=wert;
		return true;
	};
	if(nr==11) {
		_wahrnehmungskraft_tastsinn=wert;
		return true;
	};
	if(nr==12) {
		_luck=wert;
		return true;
	};
	
	if(nr==13) {
		_gewicht=wert;
		return true;
	};
	if(nr==14) {
		_groesse=wert;
		return true;
	};
	return false;
}

int CharacterWerte::getCharacterWert ( int nr )
{
	
	if(nr==0) {
		return _intelligenz;
	};
	if(nr==1) {
		return _staerke_beine;
	};
	if(nr==2) {
		return _staerke_arme;
	};
	if(nr==3) {
		return _konstitution;
	};
	if(nr==4) {
		return _geschicklichkeit;
	};
	
	if(nr==5) {
		return _weisheit;
	};
	if(nr==6) {
		return _charisma;
	};
	if(nr==7) {
		return _willenskraft;
	};
	if(nr==8) {
		return _wahrnehmungskraft_ohren;
	};
	if(nr==9) {
		return _wahrnehmungskraft_augen;
	};
	
	if(nr==10) {
		return _wahrnehmungskraft_nase;
	};
	if(nr==11) {
		return _wahrnehmungskraft_tastsinn;
	};
	if(nr==12) {
		return _luck;
	};
	
	if(nr==13) {
		return _gewicht;
	};
	if(nr==14) {
		return _groesse;
	};
	return -1;
}
