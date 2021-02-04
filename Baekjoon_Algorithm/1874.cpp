#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n, t;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		cin >> t;
		q.push(t);
	}
	int j = 1;
	stack<int> s;
	vector<string> ans;
	while (!q.empty()) {
		if (s.empty()) {
			ans.push_back("+");
			s.push(j);
			j++;
		}
		if (s.top() > q.front()) {
			cout << "NO" << '\n';
			return 0;
		}
		else if (s.top() == q.front()) {
			ans.push_back("-");
			s.pop();
			q.pop();
			if (!q.empty() && s.empty()) {
				ans.push_back("+");
				s.push(j);
				j++;
			}
		}
		else {
			for (; j <= q.front(); j++) {
				ans.push_back("+");
				s.push(j);
			}
			if (s.top() == q.front()) {
				ans.push_back("-");
				s.pop();
				q.pop();
			}
		}
	}

	
	for (auto i = ans.begin(); i < ans.end(); i++) {
		cout << *i << '\n';
	}
	return 0;
}