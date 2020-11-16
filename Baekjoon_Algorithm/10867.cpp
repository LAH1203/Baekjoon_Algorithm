#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		num.push_back(a);
	}
	sort(num.begin(), num.end());
	int a = 10000;
	for (auto it = num.begin(); it < num.end(); it++) {
		if (a != *it) {
			cout << *it << ' ';
		}
		a = *it;
	}
	return 0;
}