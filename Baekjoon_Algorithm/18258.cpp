#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	queue<int> q;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.compare("push") == 0) {
			int t;
			cin >> t;
			q.push(t);
		}
		else if (str.compare("front") == 0) {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (str.compare("back") == 0) {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
		else if (str.compare("size") == 0) {
			cout << q.size() << '\n';
		}
		else if (str.compare("empty") == 0) {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (str.compare("pop") == 0) {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
	}

	return 0;
}