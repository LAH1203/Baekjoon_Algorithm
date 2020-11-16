#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isLong(string a, string b) {
	if (a.size() != b.size()) {
		return a.size() < b.size();
	}
	else {
		return a < b;
	}
}
int main() {
	int N;
	cin >> N;
	int count = 0;
	string* str = new string[N];
	for (int i = 0; i < N - count; i++) {
		cin >> str[i];
		for (int j = 0; j < i; j++) {
			if (str[j] == str[i]) {
				i--;
				count++;
				break;
			}
		}
	}
	sort(str, str + N - count, isLong);
	for (int i = 0; i < N - count; i++) {
		cout << str[i] << '\n';
	}
	return 0;
}