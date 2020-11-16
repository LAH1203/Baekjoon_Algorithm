#include <iostream>
using namespace std;
int GCD(int a, int b) {
	int r;
	do {
		r = a % b;
		a = b;
		b = r;
	} while (r != 0);
	return a;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, n;
	cin >> t;
	int arr[100][100] = { 0, };
	long long sum[100] = { 0, };
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum[i] += GCD(arr[i][j], arr[i][k]);
			}
		}
	}
	for (int i = 0; i < t; i++) {
		cout << sum[i] << endl;
	}
	return 0;
}