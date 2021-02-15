#include <iostream>
using namespace std;

int main() {
	int input[8];
	int check = 0;
	for (int i = 0; i < 8; i++)
		cin >> input[i];
	if (input[0] == 1) {
		check = 1;
		for (int i = 1; i <= 8; i++) {
			if (input[i - 1] != i) {
				check = 0;
				cout << "mixed";
				break;
			}
		}
	} else if (input[0] == 8) {
		check = 2;
		for (int i = 8; i > 0; i--) {
			if (input[8 - i] != i) {
				check = 0;
				cout << "mixed";
				break;
			}
		}
	} else {
		cout << "mixed";
	}

	if (check == 1)
		cout << "ascending";
	else if (check == 2)
		cout << "descending";
	return 0;
}