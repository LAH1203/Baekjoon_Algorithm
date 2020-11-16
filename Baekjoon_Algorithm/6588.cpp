#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(false);
	cout.tie(false);
	int n;
	bool num[1000001] = { false, };
	num[0] = num[1] = true;
	for (n = 2; n*n <= 1000000; n++) {
		for (int i = 2 * n; i <= 1000000; i += n) {
			num[i] = true;
		}
	}
	bool check;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		for (int i = 3; i <= n; i += 2) {
			if (!num[i] && !num[n - i]) {
				cout << n << " = " << i << " + " << n - i << '\n';
				check = true;
				break;
			}
			else
				check = false;
		}
		if (!check)
			cout << "Goldbach's conjecture is wrong." << '\n';
	}
	return 0;
}