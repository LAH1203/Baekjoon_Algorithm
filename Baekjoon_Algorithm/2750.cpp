#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, i;
	cin >> N;
	int num[1000] = { 0, };
	for (i = 0; i < N; i++) {
		cin >> num[i];
	}
	sort(num, num + i);
	for (int i = 0; i < N; i++) {
		cout << num[i] << '\n';
	}
	return 0;
}