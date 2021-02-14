#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, sum = 0;
	cin >> x;
	vector<int> sticks;
	sticks.push_back(64);
	while (true) {
		sum = 0;
		for (auto it = sticks.begin(); it != sticks.end(); it++)
			sum += *it;
		if (sum == x) {
			cout << sticks.size();
			break;
		}
		if (sum > x) {
			sticks[sticks.size() - 1] /= 2;
			int last = sticks[sticks.size() - 1];
			sum -= last;
			if (sum < x)
				sticks.push_back(last);
		}
	}
	return 0;
}