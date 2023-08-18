#ifndef VALKYRIE_H
#define VALKYRIE_H

#include "Character.h"

using namespace std;

class Valkyrie : public Character
{
private:

public:
	Valkyrie(int _HP, int _power, int _level, int _XP, string _playerName) : Character(_HP, _power, _level, _XP, _playerName) {}
	string getCharacter() { return "Valkyrie"; }

	~Valkyrie() { cout << "Valkyrie data deleted." << endl; }
};

#endif