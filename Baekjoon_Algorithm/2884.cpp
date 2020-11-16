#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int H, M;
	cin >> H >> M;
	if (H == 0 && M < 45) {
		H = 23;
		M = M + 60 - 45;
	}
	else {
		if (M < 45) {
			H -= 1;
			M = M + 60 - 45;
		}
		else {
			M -= 45;
		}
	}
	cout << H << ' ' << M;
	return 0;
}