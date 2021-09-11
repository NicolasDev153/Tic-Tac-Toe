#include <iostream>
#include "dec.h"
// Globally defined
using namespace std;

string board[9] = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
int Player = 1;
int position = 0;

void introduction() {
	cout << "Press [Enter] to begin";
	getchar(); // haults the screen
	cout << "\n";

	cout << "\n";
	cout << "***********\n";
	cout << "Tic-Tac-Toe\n";
	cout << "***********\n";

	cout << "Player 1) X\n";
	cout << "Player 2) O\n";

	cout << "The 3X3 grind is shown below:\n\n";

	cout << "     |     |      \n";
	cout << "  1  |  2  |  3   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  4  |  5  |  6   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  7  |  8  |  9   \n";
	cout << "_____|_____|_____ \n\n";

}