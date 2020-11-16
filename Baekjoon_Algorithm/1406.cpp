#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	stack<char> left, right;
	string str;
	cin >> str;
	int M;
	cin >> M;
	char what;

	for (int i = 0; i < str.size(); i++) {
		left.push(str[i]);
	}
	for (int i = 0; i < M; i++) {
		cin >> what;
		if (what == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (what == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (what == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (what == 'P') {
			char eng;
			cin >> eng;
			left.push(eng);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	return 0;
}