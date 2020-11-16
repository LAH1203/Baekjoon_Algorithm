#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, x;
	cin >> n >> x;
	vector<int> answers;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp < x) {
			answers.push_back(tmp);
		}
	}
	for (auto it = answers.begin(); it != answers.end(); it++) {
		cout << *it << ' ';
	}
	return 0;
}