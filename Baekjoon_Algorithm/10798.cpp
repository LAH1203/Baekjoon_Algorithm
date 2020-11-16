#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	queue<string> str[5];
	int longer[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;
		longer[i] = s.length();
		int j = 0;
		while (j < s.length()) {
			str[i].push(s.substr(j, 1));
			j++;
		}
	}
	while (!str[0].empty() || !str[1].empty() || !str[2].empty() || !str[3].empty() || !str[4].empty()) {
		for (int i = 0; i < 5; i++) {
			if (!str[i].empty()) {
				cout << str[i].front();
				str[i].pop();
			}
		}
	}
	return 0;
}