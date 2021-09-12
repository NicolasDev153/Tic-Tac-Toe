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
	cout << "***********\n\n";

	cout << "Player 1) X\n";
	cout << "Player 2) O\n\n";

	cout << "The 3X3 grind is shown below:\n\n";

	cout << "     |     |      \n";
	cout << "  1  |  2  |  3   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  4  |  5  |  6   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  7  |  8  |  9   \n";
	cout << "     |     |      \n\n";

}


bool is_winner() {
	bool winner = false;
	// Cheking the rows
	if ((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " ") {
		bool winner = true;
	}

	else if ((board[3] == board[4]) && (board[4] == board[5]) && board[3] != " ") {
		bool winner = true;
	}

	else if ((board[6] == board[7]) && (board[7] == board[8]) && board[6] != " ") {
		bool winner = true;
	}

	// Cheking the columns
	else if ((board[0] == board[3]) && (board[3] == board[6]) && board[0] != " ") {
		bool winner = true;
	}

	else if ((board[1] == board[4]) && (board[4] == board[7]) && board[1] != " ") {
		bool winner = true;
	}

	else if ((board[2] == board[5]) && (board[5] == board[8]) && board[2] != " ") {
		bool winner = true;
	}

	// Cheking the diagonals
	else if ((board[0] == board[4]) && (board[4] == board[8]) && board[0] != " ") {
		bool winner = true;
	}

	else if ((board[2] == board[4]) && (board[4] == board[6]) && board[2] != " ") {
		bool winner = true;
	}

	return winner;
}

bool filled_up() {
	bool filled = true;

	for (auto i = 0; i < 9; i++) {
		if (board[i] == " ") {
			filled = false;
		}
		return filled;
	}
}

void draw() {
	cout << "     |     |      \n";
	cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << " \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << " \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << " \n";
	cout << "     |     |      \n\n";
}

void set_position() {
	cout << "Player " << Player << "'s (Enter between 1-9)";
	while (!(cin >> position)) {
		cout << "Please enter valid number between (1-9)" << endl;
		cin.clear();
		cin.ignore();
	}
}