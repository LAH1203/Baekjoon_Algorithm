#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	int num[10001] = { 0, };
	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;
		num[number]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (num[i] != 0) {
			for (int j = 0; j < num[i]; j++) {
				cout << i << '\n';
			}
		}
	}
	return 0;
}