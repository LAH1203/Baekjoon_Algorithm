#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 2 * (n - i); j > 0; j -= 2)
			cout << ' ';
		if (i == 1) {
			cout << '*';
		}
		else if (i != n) {
			cout << '*';
			for (int j = 2 * (i - 1) - 1; j > 0; j--)
				cout << ' ';
			cout << '*';
		}
		else {
			for (int j = 2 * n - 1; j > 0; j--)
				cout << '*';
		}
		cout << '\n';
	}
	return 0;
}