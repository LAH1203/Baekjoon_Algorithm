#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a, b;
		cin >> a >> b;
		if (cin.fail())
			break;
		cout << a + b << '\n';
	}
	return 0;
}