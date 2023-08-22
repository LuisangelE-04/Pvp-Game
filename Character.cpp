#include "Character.h"

void Character::attack(Character*& other, int& damage)
{
	int totHP;
	damage = 0;
	totHP = other->getHP();
	damage = power + level;
	totHP -= damage;
	other->setHP(totHP);
}

void Character::powerAttack(Character*& other, int& damage)
{
	int totHP;
	damage = 0;
	totHP = other->getHP();
	damage = power + level;
	totHP -= damage + 5;
	other->setHP(totHP);
}

void Character::setAttack(string name)
{
	attackName = name;
}

string Character::getAttackName()
{
	return attackName;
}

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