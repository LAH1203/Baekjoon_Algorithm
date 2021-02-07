#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int findOrder(int n, int m) {
	int ans = 0;
	while (!q.empty()) {
		int front = q.front();
		bool check = true;
		for (int i = 0; i < q.size(); i++) {
			q.push(q.front());
			q.pop();
			if (q.front() > front) {
				check = false;
			}
		}
		if (!check) {
			q.push(q.front());
			q.pop();
			if (m == 0)
				m = q.size() - 1;
			else
				m--;
		}
		else {
			q.pop();
			ans++;
			if (m == 0)
				return ans;
			else
				m--;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		// 큐 초기화
		while (!q.empty())
			q.pop();
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			q.push(k);
		}
		cout << findOrder(n, m) << '\n';
	}

	return 0;
}