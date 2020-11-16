#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int max = 0, th;
	for (int i = 0; i < 9; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > max) {
			max = tmp;
			th = i + 1;
		}
	}
	cout << max << '\n' << th;
	return 0;
}