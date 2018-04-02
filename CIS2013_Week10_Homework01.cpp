#include <iostream>
using namespace std;

int main() {
	char stay;
	int columns, rows;
	int** field;
	
	//Trying a different approach to create a field with a dynamic 2d array
	//its not working

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
		for (int j = 0; j < rows; i++) {
			cin >> field[i][j]; // this line is producing some kind of error
		}
	}

	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; i++) {
			cout << field[i][j];
		}
	}


	/*cout << "How many mines do you want on the field? ";
	cin >> mines;*/

	/*a = new int [columns];
	b = new int[rows];*/


	
	////prints field from the user inputs
	//cout << "  ";
	//for (int x = 0; x < columns; x++) {
	//	cout << x+1 << " ";
	//}
	//cout << endl;

	//for (int x = 0; x < rows; x++) {
	//	cout << x+1 << " ";
	//	for (int y = 0; y < columns; y++) {
	//		cout << ". ";
	//	}
	//	cout << endl;
	//}
	//
	////random placement of mines
	//for (int x = 0; x < mines; x++) {

	//}
	//
		
		
	delete[] field;
	cin >> stay;
	return 0;
}

