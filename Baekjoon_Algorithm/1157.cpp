#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string word;
	cin >> word;
	vector<pair<char, int>> count;
	for (int i = 0; i < word.length(); i++) {
		word[i] = toupper(word[i]);
		bool check = false;
		for (auto it = count.begin(); it != count.end(); it++) {
			if (it->first == word[i]) {
				(it->second)++;
				check = true;
			}
		}
		if (!check) {
			count.push_back(make_pair(word[i], 1));
		}
	}
	int MAX = 0;
	char answer;
	for (auto it = count.begin(); it != count.end(); it++) {

		if (it->second > MAX) {
			MAX = it->second;
			answer = it->first;
		}
		else if (it->second == MAX) {
			answer = '?';
		}
	}
	cout << answer;
	return 0;
}