#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, sum = 0;
	cin >> x >> y;
	string arr[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	x--;
	sum += y;
	while (x != 0) {
		switch (x) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			sum += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			sum += 30;
			break;
		case 2:
			sum += 28;
			break;
		}
		x--;
	}
	sum %= 7;
	cout << arr[sum];
	return 0;
}