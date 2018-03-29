#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char stay;
	int *a, *b;
	int boardWid = 0;
	int boardLen = 0;

	cout << "Welcome to Minesweeper" << endl;
	cout << "How wide do you want the the field to be? ";
	cin >> boardWid;

	cout << "How tall do you want the field to be? ";
	cin >> boardLen;

	a = new int[boardWid];
	b = new int[boardLen];

	for (int x = 0; x < boardWid; x++) {
		cout << x << " ";
		/*for (int y = 0; y < boardLen; y++) {
			cout << y;
		}*/
		}
	

	cin >> stay;
	return 0;
}

