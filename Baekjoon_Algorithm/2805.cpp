#include <iostream>
#define MAX 1000000
using namespace std;

int n, m;
int tree[MAX];

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

bool binary_search(int len) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i] >= len)
			ans += (tree[i] - len);
	}
	if (ans >= m)
		return true;
	else
		return false;
}

int main() {
	cin >> n >> m;
	int high = 0, low = 1;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		high = max(high, tree[i]);
	}
	int max = 0;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (binary_search(mid)) {
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