#include "Character.h"

using namespace std;

class Wizard : public Character
{
private:

public:
	Wizard(int _HP, int _power, int _level, int _XP, string _playerName) : Character(_HP, _power, _level, _XP, _playerName) {}
	string getCharacter() { return "Wizard"; }

	~Wizard() { cout << "Wizard data deleted." << endl; }
};