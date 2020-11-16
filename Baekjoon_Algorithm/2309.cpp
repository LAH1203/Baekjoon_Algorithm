#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	vector<int> v;
	for (int i = 0; i < 9; i++) {
		int h;
		cin >> h;
		v.push_back(h);
	}
	do {
		int sum = 0;
		for (int i = 0; i < 7; i++) {
			sum += v[i];
		}
		if (sum == 100) {
			sort(v.begin(), v.end() - 2);
			break;
		}
	} while (next_permutation(v.begin(), v.end()));
	for (int i = 0; i < 7; i++) {
		cout << v[i] << '\n';
	}
	return 0;
}