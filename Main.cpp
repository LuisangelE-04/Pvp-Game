#include <iostream>

#include "Character.h"
#include "Wizard.h"
#include "Archer.h"
#include "Valkyrie.h"

void titleScreen()
{
	cout << " _____  __  " << " __    _" << " _______  __   " << "______ __    __" << endl;
	cout << "|  ___|/  \\ " << "|  \\  | |" << "__   __|/  \\ " << "|  ____|  \\  /  |" << endl;
	cout << "| |__ / __ \\" << "|   \\ | |" << "  | |  / __ \\" << "| |____ \\  \\/  /" << endl;
	cout << "|  __|  __  |" << " |\\ \\| |" << "  | | |  __  |" << "____  | \\_  _/" << endl;
	cout << "| |  | |  | |" << " | \\   |" << "  | | | |  | |" << "____| |  |  |" << endl;
	cout << "|_|  |_|  |_|" << "_|  \\__|" << "  |_| |_|  |_|" << "______|  |__|" << endl << endl;

	cout << "          " << " _____  " << " _____  _    _ " << " _" << endl;
	cout << "          " << "|  __ \\ " << "|  ___|| |  | |" << "| |" << endl;
	cout << "          " << "| |  \\ \\" << "| |__  | |  | |" << "| |" << endl;
	cout << "          " << "| |  | |" << "|  __| | |  | |" << "| |" << endl;
	cout << "          " << "| |__/ /" << "| |___ | \\__/ |" << "| |____" << endl;
	cout << "          " << "|_____/ " << "|_____| \\____/ " << "|______|" << endl;
}

void ChosePlayer(string p1, string p2, Character*& player1, Character*& player2)
{
	string nextStep;
	cout << endl;
	cout << "              " << "Type any character to continue." << endl;
	cin >> nextStep;
	if (isalpha(nextStep[0]) || isdigit(nextStep[0])) {
		cout << "\033[2J\033[1;1H";
	}

	int playerChoice;
	
	for (int playerNum = 1; playerNum < 3; playerNum++) {
		cout << endl << endl;
		cout << "              " << "Player " << playerNum << " chose your player" << endl << endl;
		cout << "              " << "Type 1 for Wizard!" << endl;
		cout << "              " << "Type 2 for Archer!" << endl;
		cout << "              " << "Type 3 for Valkyrie!" << endl;

		cin >> playerChoice;
		if (playerNum == 1) { // allocates memory for player 1 avatar
			if (playerChoice == 1) {
				player1 = new Wizard(150, 12, 1, 0, p1);
			}
			else if (playerChoice == 2) {
				player1 = new Archer(150, 12, 1, 0, p1);
			}
			else if (playerChoice == 3) {
				player1 = new Valkyrie(150, 12, 1, 0, p1);
			}

			cout << player1->getName() << " chose " << player1->getCharacter() << endl << endl; // Displays player 1 avatar
		}
		else if (playerNum == 2) { // allocates memory for player 2 avatar
			if (playerChoice == 1) {
				player2 = new Wizard(150, 12, 1, 0, p2);
			}
			else if (playerChoice == 2) {
				player2 = new Archer(150, 12, 1, 0, p2);
			}
			else if (playerChoice == 3) {
				player2 = new Valkyrie(150, 12, 1, 0, p2);
			}
			
			cout << player2->getName() << " chose " << player2->getCharacter() << endl << endl; // Displays player 2 avatar
		}
	}
}

int main()
{
	string p1, p2;
	titleScreen();
	cout << endl << endl;
	cout << "              Enter player 1's name: ";
	cin >> p1;
	cout << endl << "              Enter player 2's name: ";
	cin >> p2;

	Character* player1;
	Character* player2;

	ChosePlayer(p1, p2, player1, player2);


	// delete memory after saving the data into a file 
	delete player1;
	delete player2;
	player1 = nullptr;
	player2 = nullptr;

	cin.get(); // to end the program
	return 0;
}