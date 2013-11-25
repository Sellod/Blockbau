#include "player.h"
#include "characterwerte.h"

Player::Player()
{
	_characterwert = new CharacterWerte;
	
}

Player::~Player()
{
	delete _characterwert; 
}

