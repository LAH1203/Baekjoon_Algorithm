#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		stack<char> s;
		string word;
		cin >> word;
		for (int j = 0; j < word.length(); j++) {
			if (s.empty())
				s.push(word[j]);
			else if (word[j] == s.top())
				s.pop();
			else
				s.push(word[j]);
		}
		if (s.empty())
			count++;
	}
	cout << count;
	return 0;
}