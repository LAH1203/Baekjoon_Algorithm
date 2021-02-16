#include <iostream>
using namespace std;

int main() {
	int t, h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		// Çà : Ãþ, ¿­ : È£
		bool hotel[100][100] = { false, };
		int ans = 0;
		for (int p = 0; p < n; p++) {
			// È£
			for (int j = 1; j <= w; j++) {
				// Ãþ
				bool check = false;
				for (int k = 1; k <= h; k++) {
					if (!hotel[k][j]) {
						if (p == n - 1) {
							ans = k * 100 + j;
							hotel[k][j] = true;
							check = true;
							break;
						}
						else {
							hotel[k][j] = true;
							check = true;
							break;
						}
					}
				}
				if (check)
					break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}