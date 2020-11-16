#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int n, k, b;
	cin >> n >> k >> b;
	int sin[100001] = { 0, };
	for (int i = 0; i < b; i++) {
		int tmp;
		cin >> tmp;
		sin[tmp] = 1;
	}
	int tmp = 0;
	for (int i = 1; i <= k; i++) {
		if (sin[i])
			tmp++;
	}
	int least = tmp;
	for (int i = k + 1; i <= n; i++) {
		if (sin[i - k])
			tmp--;
		if (sin[i])
			tmp++;
		least = min(least, tmp);
	}
	cout << least;
	return 0;
}