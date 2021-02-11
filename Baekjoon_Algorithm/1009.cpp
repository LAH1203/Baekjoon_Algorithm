#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int tmp = 1;
		for (int j = 0; j < b; j++) {
			tmp *= a;
			tmp %= 10;
		}
		if (tmp == 0)
			tmp = 10;
		cout << tmp << '\n';
	}
	return 0;
}