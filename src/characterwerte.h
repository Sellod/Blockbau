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

#ifndef CHARACTERWERTE_H
#define CHARACTERWERTE_H

class CharacterWerte {
private:
	int _intelligenz;                 	// von 0 bis 200    
	int _staerke_beine;					// 13 Stück
	int _staerke_arme;
	int _konstitution;
	int _geschicklichkeit;
	
	int _weisheit;
	int _charisma;
	int _willenskraft;
	int _wahrnehmungskraft_ohren;
	int _wahrnehmungskraft_augen;
	
	int _wahrnehmungskraft_nase;
	int _wahrnehmungskraft_tastsinn;
	int _luck;
	
	
	int _gewicht;  // in Kilo
	int _groesse;  // int cm
	
	// Mensch
	// Gut
	// Allrouder
	// mittel
	// schlecht
	
	
	// alles 50
	// _gewicht 50-200
	// /groesse 150-220
	
	// Elf
	// Magie
	// Schnell
	// Geschickt
	
	
	
	// int 70
	// staerke bein
	// staerke arm 
	// kosti 40
	
	// Zwerge
	// Ausdauernd
	// Stärke
	
	// Ork
	// Krankheitsunendfindlich
	// Giftresident
	
	
public:
     CharacterWerte();
     ~CharacterWerte();
	 bool setCharacterWert(int nr,int wert);
	 int getCharacterWert(int nr);
	 
};

#endif // CHARACTERWERTE_H
