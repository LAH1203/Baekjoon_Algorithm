#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;
	int count[26];
	for (int i = 0; i < 26; i++) {
		count[i] = -1;
	}
	for (int i = 0; i < S.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (S.at(i) - 97 == j && count[j] == -1) {
				count[j] = i;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << count[i] << ' ';
	}
	return 0;
}