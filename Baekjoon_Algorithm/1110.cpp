#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	int n = N, count = 0;
	while (n != N || count == 0) {
		if (n < 10) {
			n = n * 10 + n;
			count++;
		}
		else {
			int tmp = n % 10;
			n = (n / 10) + (n % 10);
			n %= 10;
			n += tmp * 10;
			count++;
		}
	}
	cout << count;
	return 0;
}