#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int m, n;
	long long arr[1000001] = { 0, };
	arr[1] = 1;
	cin >> m >> n;
	for (long long i = 2; i*i <= n; i++) {
		for (long long j = 2 * i; j <= n; j += i) {
			arr[j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) {
			cout << i << '\n';
		}
	}
	return 0;
}