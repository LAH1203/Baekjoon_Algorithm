#include <iostream>
#include <string>
using namespace std;

int countSmall(string s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			count++;
		}
	}
	return count;
}
int countBig(string s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			count++;
		}
	}
	return count;
}
int countNum(string s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 48 && s[i] <= 57) {
			count++;
		}
	}
	return count;
}
int countBlank(string s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	return count;
}
int main() {
	string S;
	int small = 0;
	int big = 0;
	int num = 0;
	int blank = 0;
	while (1) {
		getline(cin, S);
		if (S.size() == 0) {
			return 0;
		}
		else {
			small = countSmall(S);
			big = countBig(S);
			num = countNum(S);
			blank = countBlank(S);
			cout << small << ' ' << big << ' ' << num << ' ' << blank << '\n';
		}
	}
	return 0;
}