#include <iostream>
#include <algorithm>
using namespace std;

int k, n;
long long arr[10000];

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

bool can(long long len) {
	int cnt = 0;
	for (int i = 0; i < k; i++)
		cnt += arr[i] / len;
	if (cnt >= n)
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> k >> n;
	long long high = 0, low = 1;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
		high = max(high, arr[i]);
	}
	long long max = 0;
	while (low <= high) {
		long long mid = (low + high) / 2;
		if (can(mid)) {
			if (max < mid)
				max = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	
	cout << max;

	return 0;
}