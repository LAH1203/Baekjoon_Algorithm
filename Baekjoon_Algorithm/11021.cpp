#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << '\n';
	}
	return 0;
}