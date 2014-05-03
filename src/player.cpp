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
void Player::makeHuman()
{
	_characterwert->setCharacterWert(0,50);
}
