#include <iostream>
using namespace std;

//Had a typo in a FOR loop that was causing issues but finally found after an hour

int main() {
	char stay;
	int columns, rows;
	int **field;

	cout << "Welcome to Minesweeper" << endl;
	cout << "How many columns do you want the the field to be? ";
	cin >> columns;

	cout << "How many rows do you want the field to be? ";
	cin >> rows;

	field = new int*[columns];
	for (int i = 0; i < columns; i++) {
		field[i] = new int[rows];
	}


	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			field[i][j]=0; 
		}
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

