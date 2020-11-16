#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	stack<int> s;
	for (int i = 0; i < N; i++) {
		string what;
		cin >> what;
		if (what == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (what == "pop") {
			if (s.empty() == false) {
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (what == "size") {
			cout << s.size() << '\n';
		}
		else if (what == "empty") {
			if (s.empty() == true)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (what == "top") {
			if (s.empty() == false)
				cout << s.top() << '\n';
			else
				cout << -1 << '\n';
		}
	}
	return 0;
}