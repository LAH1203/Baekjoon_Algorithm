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
int LCM(int a, int b, int gcd) {
	return a * b / gcd;
}
int main() {
	int t, a, b;
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		arr[i] = LCM(a, b, GCD(a, b));
	}
	for (int i = 0; i < t; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}