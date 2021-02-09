#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	while (cnt < 100) {
		getline(cin, str);
		if (str.compare("\0") != 0)
			cout << str << '\n';
		else
			break;
		cnt++;
	}
	return 0;
}