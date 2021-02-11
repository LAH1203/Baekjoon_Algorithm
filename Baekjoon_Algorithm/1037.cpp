#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int cnt;
	cin >> cnt;
	vector<int> real;
	for (int i = 0; i < cnt; i++) {
		int t;
		cin >> t;
		real.push_back(t);
	}
	sort(real.begin(), real.end());
	int n = real[0] * real[real.size() - 1];
	cout << n;
	return 0;
}