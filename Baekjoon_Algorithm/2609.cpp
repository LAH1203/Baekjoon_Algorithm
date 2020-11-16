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
	int a, b, temp;
	int gcd, lcm;
	cin >> a >> b;
	if (b > a) {
		temp = a;
		a = b;
		b = temp;
	}
	gcd = GCD(a, b);
	lcm = a * b / gcd;
	cout << gcd << '\n' << lcm;
	return 0;
}