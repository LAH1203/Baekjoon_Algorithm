#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int money;
	cin >> money;
	int jandon = 1000 - money;
	int count = 0;
	if (jandon >= 500) {
		count++;
		jandon -= 500;
	}
	if (jandon >= 100) {
		int c = jandon / 100;
		count += c;
		jandon -= c * 100;
	}
	if (jandon >= 50) {
		int c = jandon / 50;
		count += c;
		jandon -= c * 50;
	}
	if (jandon >= 10) {
		int c = jandon / 10;
		count += c;
		jandon -= c * 10;
	}
	if (jandon >= 5) {
		int c = jandon / 5;
		count += c;
		jandon -= c * 5;
	}
	if (jandon > 0) {
		count += jandon;
	}
	cout << count;
	return 0;
}