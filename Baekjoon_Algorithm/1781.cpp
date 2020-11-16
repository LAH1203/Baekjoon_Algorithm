#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	// 2차원 벡터
	vector<vector<int>> v(n + 1);
	priority_queue<int> all;
	for (int i = 0; i < n; i++) {
		int d, c;
		cin >> d >> c;
		v[d].push_back(c);
	}
	int answer = 0;
	for (int i = n; i >= 1; i--) {
		// 반복문동안 deadline에 맞는 컵라면 수를 우선순위큐에 넣는다
		for (int j : v[i]) {
			all.push(j);
		}
		if (!all.empty()) {
			answer += all.top();
			all.pop();
		}
	}
	cout << answer;
	return 0;
}