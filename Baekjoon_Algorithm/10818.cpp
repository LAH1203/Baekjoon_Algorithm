#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	int min = 1000000, max = -1000000;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		if (tmp < min) {
			min = tmp;
		}
		if (tmp > max) {
			max = tmp;
		}
	}
	cout << min << ' ' << max;
	return 0;
}