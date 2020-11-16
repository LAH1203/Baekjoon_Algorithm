#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, K;
	cin >> N >> K;
	vector<int> num;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	sort(num.begin(), num.end());
	cout << num[K - 1];
	return 0;
}