#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);

	int cur = k - 1;
	int max = n;

	cout << '<';
	for (int i = 0; i < n; i++) {
		cout << v[cur];
		if (i == n - 1)
			cout << '>';
		else
			cout << ", ";
		v.erase(v.begin() + cur);
		cur += (k - 1);
		max--;
		if (max > 0)
			cur %= max;
	}

	return 0;
}