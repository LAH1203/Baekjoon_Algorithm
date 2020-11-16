#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, count = 0;
	bool what;
	cin >> N;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		what = true;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] != str[j + 1]) {
				for (int k = j + 2; k < str.size(); k++) {
					if (str[k] == str[j]) {
						what = false;
						break;
					}
				}
			}
		}
		if (what == true) {
			count++;
		}
	}
	cout << count;
	return 0;
}