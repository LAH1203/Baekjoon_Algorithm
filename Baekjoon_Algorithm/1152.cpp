#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string tmp;

	while (getline(ss, tmp, delimiter)) {
		answer.push_back(tmp);
	}

	return answer;
}

int main() {
	string str;
	int cnt = 0;
	getline(cin, str);
	/*
	vector<string> result = split(str, ' ');
	for (auto it = result.begin(); it != result.end(); it++) {
		cnt++;
	}
	*/
	char before;
	for (int i = 1; i < str.length(); i++) {
		before = str[i - 1];
		if (str[i] == ' ') {
			if (before != ' ')
				cnt++;
		}
	}
	before = str[str.length() - 1];
	if (before != ' ')
		cnt++;
	cout << cnt;
	return 0;
}