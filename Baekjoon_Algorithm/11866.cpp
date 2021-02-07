#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

void Josephus(int n, int k) {
	cout << '<';
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() > 1)
			cout << q.front() << ", ";
		else
			cout << q.front() << '>';
		q.pop();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

	Josephus(n, k);

	return 0;
}