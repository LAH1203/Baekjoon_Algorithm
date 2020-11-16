#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, result;
vector<int> num;

void maxNums(int idx, int total) {
	if (idx > n - 2) {
		return;
	}
	while (next_permutation(num.begin(), num.end())) {
		total = 0;
		for (int i = 0; i < n - 1; i++) {
			if (num[i] - num[i + 1] > 0) {
				total += num[i] - num[i + 1];
			}
			else {
				total += -(num[i] - num[i + 1]);
			}
		}
		if (total > result) {
			result = total;
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int e;
		cin >> e;
		num.push_back(e);
	}
	sort(num.begin(), num.end());
	maxNums(0, 0);
	cout << result;
	return 0;
}