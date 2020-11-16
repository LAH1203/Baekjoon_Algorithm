#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int j, k;
		for (j = 0; j < i; j++) {
			cout << ' ';
		}
		for (k = 0; k < 2 * (n - j) - 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}
	for (int i = 1; i < n; i++) {
		int j, k;
		for (j = 1; j < n - i; j++) {
			cout << ' ';
		}
		for (k = 1; k <= 2 * (n - j + 1) - 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}