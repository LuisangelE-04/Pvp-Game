#include "Character.h"

void Character::addXP()
{
	XP += 50 + HP;
	if (XP > 200) {
		level++;
		XP %= 200;
	}
}
int Character::getXP()
{
	return XP;
}

int Character::getHP()
{
	return HP;
}
void Character::setHP(int health)
{
	HP = health;
}

int Character::getPower()
{
	return power;
}
int Character::getLevel()
{
	return level;
}

string Character::getCharacter()
{
	return "NO-TYPE";
}
string Character::getName()
{
	return playerName;
}