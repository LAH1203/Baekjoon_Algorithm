#include <iostream>
using namespace std;

long long answer(long long a, long long b, long long c) {
	long long result;
	if (b == 0)
		return 1;
	if (b == 1)
		return a % c;
	if (b % 2 == 0)
		result = (answer(a, b / 2, c) % c)*(answer(a, b / 2, c) % c) % c;
	else
		result = (a%c*answer(a, b - 1, c) % c) % c;
	return result;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	long long a, b, c;
	cin >> a >> b >> c;
	long long result = answer(a, b, c);
	cout << result;
	return 0;
}