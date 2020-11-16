#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	vector<int> sequence;
	sequence.push_back(INT_MIN);
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		if (sequence.back() < tmp) {
			sequence.push_back(tmp);
		}
		else {
			auto it = lower_bound(sequence.begin(), sequence.end(), tmp);
			*it = tmp;
		}
	}
	cout << sequence.size() - 1;
	return 0;
}