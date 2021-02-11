#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	if (n == 1)
		cout << v[0];
	else {
		bool sameIndex[50] = { false, };
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < v[i].length(); j++) {
				if (i == 1) {
					if (v[0][j] == v[i][j])
						sameIndex[j] = true;
				}
				else {
					if (sameIndex[j])
						if (v[0][j] != v[i][j])
							sameIndex[j] = false;
				}
			}
		}
		for (int i = 0; i < v[0].length(); i++) {
			if (sameIndex[i])
				cout << v[0][i];
			else
				cout << '?';
		}
	}
	return 0;
}