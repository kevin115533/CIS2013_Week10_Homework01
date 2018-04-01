#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char stay;
	int *a,*b;
	int columns;
	int rows;

	cout << "Welcome to Minesweeper" << endl;
	cout << "How many columns do you want the the field to be? ";
	cin >> columns;

	cout << "How many rows do you want the field to be? ";
	cin >> rows;

	a = new int [columns];
	b = new int[rows];
	
	cout << "  ";
	for (int x = 0; x < columns; x++) {
		cout << x+1 << " ";
	}
	cout << endl;

	for (int x = 0; x < rows; x++) {
		cout << x+1 << " ";
		for (int y = 0; y < columns; y++) {
			cout << ". ";
		}
		cout << endl;
	}
	

	cin >> stay;
	return 0;
}

