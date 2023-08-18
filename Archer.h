#include "Character.h"

using namespace std;

class Archer : public Character
{
private:

public:
	Archer(int _HP, int _power, int _level, int _XP, string _playerName) : Character(_HP, _power, _level, _XP, _playerName) {}
	string getCharacter() { return "Archer"; }

	~Archer() { cout << "Archer data deleted." << endl; }
};