#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string S;
	cin >> S;
	string partS[1000];
	for (int i = 0; i < S.size(); i++) {
		partS[i] = S.substr(i, S.size() - i);
	}
	sort(partS, partS + S.size());
	for (int i = 0; i < S.size(); i++) {
		cout << partS[i] << '\n';
	}
	return 0;
}