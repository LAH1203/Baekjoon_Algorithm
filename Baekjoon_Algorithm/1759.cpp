#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int L, C;
	cin >> L >> C;
	vector<char> alphabet;
	for (int i = 0; i < C; i++) {
		char ch;
		cin >> ch;
		alphabet.push_back(ch);
	}
	sort(alphabet.begin(), alphabet.end());
	vector<int> index;
	for (int i = 0; i < L; i++) {
		index.push_back(1);
	}
	for (int i = 0; i < C - L; i++) {
		index.push_back(0);
	}
	sort(index.begin(), index.end());
	vector<char> answer;
	vector<string> real_answer;
	do {
		answer.clear();
		for (int i = 0; i < index.size(); i++) {
			if (index[i] == 1) {
				answer.push_back(alphabet[i]);
			}
		}
		bool check = false;
		int count = 0;
		for (auto it = answer.begin(); it != answer.end(); it++) {
			if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u') {
				check = true;
			}
			else {
				count++;
			}
		}
		if (check && count >= 2) {
			string str;
			for (auto it = answer.begin(); it != answer.end(); it++) {
				str += (*it);
			}
			real_answer.push_back(str);
		}
	} while (next_permutation(index.begin(), index.end()));
	sort(real_answer.begin(), real_answer.end());
	for (auto it = real_answer.begin(); it != real_answer.end(); it++) {
		cout << *it << '\n';
	}
	return 0;
}