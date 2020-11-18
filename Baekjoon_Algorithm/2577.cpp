#include <iostream>
using namespace std;

int cnt[10];

int count(int a, int b, int c) {
	int result = a;
	result *= b;
	result *= c;
	int count = 0;
	while (true) {
		if (result == 0)
			break;
		if (result % 10 == 0)
			count++;
		else
			cnt[result % 10]++;
		result /= 10;
	}
	return count;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << count(a, b, c) << '\n';
	int result = a;
	result *= b;
	result *= c;
	for (int i = 1; i < 10; i++) {
		cout << cnt[i] << '\n';
	}
	return 0;
}