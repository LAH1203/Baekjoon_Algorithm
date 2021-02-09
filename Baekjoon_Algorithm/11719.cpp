#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	string s;
	while (cnt < 100) {
		getline(cin, s);
		cout << s << '\n';
		cnt++;
	}
	return 0;
}