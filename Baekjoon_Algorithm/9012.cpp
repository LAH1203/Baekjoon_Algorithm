#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	stack<char> s;
	string str;
	for (int i = 0; i < T; i++) {
		cin >> str;
		bool right = true;
		while (!s.empty()) {
			s.pop();
		}
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				s.push(str[j]);
			}
			else if (str[j] == ')') {
				if (!s.empty()) {
					s.pop();
				}
				else {
					right = false;
				}
			}
		}
		if (s.empty() && right) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}