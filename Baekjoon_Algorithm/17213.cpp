#include <iostream>
using namespace std;

unsigned long long combination_H(int n, int r) {
	unsigned long long result = 1;
	unsigned long long tmp = n + r - 1;
	if (r > (tmp / 2))
		r = tmp - r;
	for (int i = 0; i < r; i++) {
		result *= tmp;
		tmp--;
	}
	tmp = 1;
	for (int i = r; i > 0; i--) {
		tmp *= i;
	}
	return result / tmp;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	cout << combination_H(n, m - n);
	return 0;
}