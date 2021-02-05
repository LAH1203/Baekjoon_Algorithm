#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str;
	while (true) {
		stack<char> s;
		bool check = true;
		getline(cin, str);
		if (str == ".")
			break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!s.empty()) {
					if (s.top() == '(') {
						s.pop();
					}
					else {
						cout << "no" << '\n';
						check = false;
						break;
					}
				}
				else {
					cout << "no" << '\n';
					check = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty()) {
					if (s.top() == '[') {
						s.pop();
					}
					else {
						cout << "no" << '\n';
						check = false;
						break;
					}
				}
				else {
					cout << "no" << '\n';
					check = false;
					break;
				}
			}
		}
		if (s.empty() && check)
			cout << "yes" << '\n';
		else if ((!s.empty()) && check)
			cout << "no" << '\n';
	}
	return 0;
}