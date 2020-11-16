#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	// n이 5의 배수인 경우
	if (n % 5 == 0) {
		cout << n / 5;
		return 0;
	}
	else {
		int many_5 = n / 5, many_3 = 0, remain = n % 5;
		while (true) {
			if (remain > 3) {
				many_3++;
				remain -= 3;
			}
			else if (remain == 3) {
				many_3++;
				cout << many_5 + many_3;
				return 0;
			}
			if (remain < 3 && many_5 > 0) {
				many_5--;
				remain += 5;
			}
			else if (remain < 3 && many_5 == 0) {
				cout << -1;
				return 0;
			}
		}
	}
	return 0;
}