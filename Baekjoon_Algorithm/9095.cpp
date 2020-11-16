#include <iostream>
#include <vector>
using namespace std;

int count(int sum, int num) {
	int final = 0;
	if (sum > num) {
		return 0;
	}
	else if (sum == num) {
		return 1;
	}
	final += count(sum + 1, num);
	final += count(sum + 2, num);
	final += count(sum + 3, num);
	return final;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T, n;
	cin >> T;
	vector<int> t;
	for (int i = 0; i < T; i++) {
		cin >> n;
		t.push_back(n);
	}
	for (auto it = t.begin(); it < t.end(); it++) {
		int result = count(0, *it);
		cout << result << '\n';
	}
	return 0;
}