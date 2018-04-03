#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void xAxis(int x);


int main() {
	char question;
	int columns, rows, mines, xCor, yCor;
	int randCo, randRo;
	int **mineField, **userField;
	bool gamePlay = true;
	bool playAgain = true;
	srand(time(NULL));

	cout << "Welcome to Minesweeper" << endl;

	while (playAgain == true) {
		cout << "How many columns do you want the the field to be? ";
		cin >> columns;

		cout << "How many rows do you want the field to be? ";
		cin >> rows;

		cout << "How many mines do you want to play with? ";
		cin >> mines;

		//Creates array for mines
		mineField = new int*[columns];
		for (int i = 0; i < columns; i++) {
			mineField[i] = new int[rows];
		}
		//creates array for user view
		userField = new int*[columns];
		for (int i = 0; i < columns; i++) {
			userField[i] = new int[rows];
		}

		//Set values for array elements to 0 which represents a blank spot
		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < rows; j++) {
				mineField[i][j] = 0;
			}
		}

		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < rows; j++) {
				userField[i][j] = 0;
			}
		}

		//Randomaly selects array elements and sets them to 1 which represents a mine
		for (int x = 0; x < mines; x++) {
			randCo = rand() % columns;
			randRo = rand() % rows;
			mineField[randCo][randRo] = 1;
		}

		//Prints values of array for testing
		/*xAxis(columns);
		for (int i = 0; i < columns; i++) {
			cout << i << " ";
			for (int j = 0; j < rows; j++) {
				cout << mineField[i][j] << " ";
			}
			cout << endl;
		}*/

		//prints user field
		xAxis(columns);
		for (int i = 0; i < columns; i++) {
			cout << i << " ";
			for (int j = 0; j < rows; j++) {
				cout << userField[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		while (gamePlay == true) {
			cout << "0 = A spot you have not checked, 7 = A spot that has been checked" << endl;
			cout << "Enter your coordinates by separating them by a space ";
			cin >> xCor >> yCor;

			cout << endl;
			userField[yCor][xCor] = mineField[yCor][xCor];
			if (mineField[yCor][xCor] == 0) {
				userField[yCor][xCor] = 7;
			}

			xAxis(columns);
			for (int i = 0; i < columns; i++) {
				cout << i << " ";
				for (int j = 0; j < rows; j++) {
					cout << userField[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;

			if (mineField[yCor][xCor] == 1) {
				cout << "You hit a mine! Game over!" << endl;
				gamePlay = false;
				playAgain = false;
				cout << "Here are the locations of the mines. 0 = Empty, 1 = Mine" << endl;
				for (int i = 0; i < columns; i++) {
					cout << i << " ";
					for (int j = 0; j < rows; j++) {
						cout << mineField[i][j] << " ";
					}
					cout << endl;
				}

			}

			else if (mineField[yCor][xCor] == 0) {
				cout << "You are clear, no mine in that spot" << endl;
			}
			cout << endl;
		}


		delete[] mineField;
		delete[] userField;

		cout << "Do you want to play again? Y/N " << endl;
		cin >> question;
		if (question == 'y' || question == 'Y') {
			playAgain = true;
			gamePlay = true;
		}

		else {
			playAgain = false;
		}
	}
	return 0;
}

//this function prints out X axis for field
void xAxis(int x) {
	cout << "  ";
	for (int i = 0; i < x; i++) {
		cout << i << " ";
	}
	cout << endl;
}


