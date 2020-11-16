#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int profit = c - b;
	if (profit <= 0) {
		cout << -1;
		return 0;
	}
	cout << a / profit + 1;
	return 0;
}