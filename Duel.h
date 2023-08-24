#pragma once
#include "Character.h"

class Duel : Character
{
private:
	Character*& player1;
	Character*& player2;
	
public:
	Duel(Character*& player1, Character*& player2) : player1(player1), player2(player2) {}

	void Start();
};