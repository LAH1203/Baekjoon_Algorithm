#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int j = n; j > 0; j--) {
		for (int i = 2 * (j - 1); i > 0; i -= 2)
			cout << ' ';
		for (int i = 2 * n - (2 * j - 1); i > 0; i--) {
			if (i % 2 == 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}