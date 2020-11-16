#include <iostream>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	int num[1000] = { 0, };
	for (int n = 2; n < 1000; n++) {
		for (int i = 2 * n; i < 1000; i += n) {
			num[i] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		int what;
		cin >> what;
		if (num[what] == 0 && what != 1) {
			count++;
		}
	}
	cout << count;
	return 0;
}