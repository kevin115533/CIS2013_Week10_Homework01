#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	char stay;
	int columns, rows, mines;
	int randCo, randRo;
	int **field;
	srand(time(NULL));

	cout << "Welcome to Minesweeper" << endl;
	cout << "How many columns do you want the the field to be? ";
	cin >> columns;

	cout << "How many rows do you want the field to be? ";
	cin >> rows;

	cout << "How many mines do you want to play with? ";
	cin >> mines;

	field = new int*[columns];
	for (int i = 0; i < columns; i++) {
		field[i] = new int[rows];
	}

	//Set values for array elements to 0 which represents a blank spot
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			field[i][j] = 0;
		}
	}
	
	//Randomaly selects array elements and sets them to 1 which represents a mine
	for (int x = 0; x < mines; x++) {
		randCo = rand() % columns;
		randRo = rand() % rows;
		field[randCo][randRo] = 1;
	}

	cout << "  ";
	for (int i = 0; i < columns; i++) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < columns; i++) {
		cout << i << " ";
		for (int j = 0; j < rows; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}


	delete[] field;
	cin >> stay;
	return 0;
}

