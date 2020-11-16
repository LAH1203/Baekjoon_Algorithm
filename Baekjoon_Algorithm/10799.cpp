#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string S;
	cin >> S;
	stack<char> s;
	int many = 0;
	int p = 0;
	for (int i = 0; i < S.length(); i++) {
		s.push(S[S.length() - i - 1]);
	}
	while (!s.empty()) {
		char temp = s.top();
		s.pop();
		if (temp == '(' && s.top() == ')') {
			many += p;
			s.pop();
		}
		else if (temp == '(') {
			many += 1;
			p += 1;
		}
		else {
			p -= 1;
		}
	}
	cout << many;
	return 0;
}