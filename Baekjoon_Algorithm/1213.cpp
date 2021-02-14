#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	string s;
	cin >> s;
	int alphabet[26] = { 0, };
	for (int i = 0; i < s.length(); i++)
		alphabet[s[i] - 'A']++;
	vector<pair<char, int>> v;
	vector<char> v2;
	bool check = false;
	for (int i = 0; i < 26; i++)
		// 홀수개인 문자는 1개만 존재해야 함
		if (alphabet[i] % 2 && check) {
			cout << "I'm Sorry Hansoo";
			return 0;
		} else if (alphabet[i] % 2 && !check) {
			v.push_back({ i + 'A', alphabet[i] - 1 });
			v2.push_back(i + 'A');
			check = true;
		} else {
			v.push_back({ i + 'A', alphabet[i] });
		}

	string pdrName;
	for (int i = 0; i < v.size(); i++)
		for (int j = 0; j < (v[i].second / 2); j++)
			pdrName += v[i].first;
	for (int i = 0; i < pdrName.size(); i++)
		cout << pdrName[i];
	if (v2.size())
		cout << v2[0];
	for (int i = pdrName.size() - 1; i >= 0; i--)
		cout << pdrName[i];

	return 0;

}
