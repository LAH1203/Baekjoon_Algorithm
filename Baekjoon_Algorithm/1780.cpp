#include <iostream>
using namespace std;

int paper[2200][2200];
int cnt[3];

bool is_paper(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (paper[x][y] != paper[i][j])
				return false;
		}
	}
	return true;
}

void count_paper(int x, int y, int n) {
	if (is_paper(x, y, n)) {
		cnt[paper[x][y] + 1]++;
		return;
	}
	n /= 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			count_paper(x + i * n, y + j * n, n);
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
	count_paper(0, 0, n);
	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << '\n';
	}
	return 0;
}