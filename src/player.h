#ifndef PLAYER_H
#define PLAYER_H

class CharacterWerte;

class Player
{
private:
	CharacterWerte *_characterwert;
public:
    Player();
	~Player();
	void makeHuman();
};

#endif // PLAYER_H
