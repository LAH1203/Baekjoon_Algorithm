#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>
using namespace std;

int pldr[2501][2501];
int ans[2501];

int main() {
	string str;
	cin >> str;
	str.insert(0, " ");
	int len = str.length();
	// 1
	for (int i = 1; i <= len; i++)
		pldr[i][i] = 1;
	// 2
	for (int i = 1; i < len; i++)
		if (str[i] == str[i + 1])
			pldr[i][i + 1] = 1;
	// over 3
	for (int i = 2; i < len; i++)
		for (int j = 1; j <= len - i; j++)
			if (str[j] == str[i + j] && pldr[j + 1][j + i - 1])
				pldr[j][j + i] = 1;
	for (int i = 1; i < len; i++) {
		ans[i] = INT_MAX;
		for (int j = 1; j <= i; j++)
			if (pldr[j][i])
				ans[i] = min(ans[i], ans[j - 1] + 1);
	}
	cout << ans[len - 1];
	return 0;
}