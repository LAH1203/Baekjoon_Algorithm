#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string word;
	cin >> word;
	for (int i = 0; i <= word.size() / 10; i++) {
		string printWord = word.substr(10 * i, 10);
		cout << printWord << '\n';
	}
	return 0;
}