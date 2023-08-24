#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Character
{
private:
	int HP;
	int power;
	int level;
	int XP;
	string playerName;
	string attackName;

public:
	Character(int _HP = 0, int _power = 0, int _level = 0, int _XP = 0, string _playerName = "NO-PLAYER") : HP(_HP), power(_power), level(_level), XP(_XP), playerName(_playerName) {}
	bool isAlive() const { return HP > 0;  }

	void attack(Character*& other, int& damage);
	void powerAttack(Character*& other, int& damage);

	void setAttack(string name);
	string getAttackName();
	
	void addXP();
	int getXP();

	/*void setAttack(string name);
	string getAttackName();*/

	int getHP();
	void setHP(int health);

	int getPower();
	int getLevel();

	virtual string getCharacter();
	string getName();

	virtual ~Character() { cout << "Character data deleted." << endl; }
};

#endif