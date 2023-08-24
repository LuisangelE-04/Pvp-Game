#include "Duel.h"
#include "GenFunctions.h"

void Duel::Start()
{
    cout << "\033[2J\033[1;1H";
    int choice;
    int damage;
    string con;

    while (player1->isAlive() && player2->isAlive())
    {
        titleScreen();
        FightInfo(player1, player2);

        attackChooser(player1, 1, choice);
        cout << player1->getName() << " used " << player1->getAttackName();
        if (choice == 1) {
            player1->attack(player2, damage);
            cout << " and did " << damage << " damage!";
        }
        else if (choice == 2) {
            player1->powerAttack(player2, damage);
            cout << " and did " << damage << " damage!";
        }
        // check if hp is below after attack
        if (!player1->isAlive() || !player2->isAlive()) {
            cout << endl << endl;
            break;
        }

        attackChooser(player1, 2, choice);
        cout << player2->getName() << " used " << player2->getAttackName();
        if (choice == 1) {
            player2->attack(player1, damage);
            cout << " and did " << damage << " damage!";
        }
        else if (choice == 2) {
            player2->powerAttack(player1, damage);
            cout << " and did " << damage << " damage!";
        }

        if (!player1->isAlive() || !player2->isAlive()) {
            cout << endl << endl;
            break;
        }

        cout << endl << endl;
        cout << "ROUND COMPLETED!!" << endl;
        cout << "Type aything to start next round!" << endl << endl << endl;
        cin >> con;
        if (isdigit(con[0]) || isalpha(con[0])) {
            continue;
        }
    }
    if (player1->isAlive()) {
        cout << "          ";
        cout << player1->getName() << " the " << player1->getCharacter() << " wins the duel!" << endl;
    }
    else if (player2->isAlive()) {
        cout << "          ";
        cout << player2->getName() << " the " << player2->getCharacter() << " wins the duel!" << endl;
    }
    else {
        cout << "Tie both players died!" << endl;
    }
    player1->addXP();
    player2->addXP();

}