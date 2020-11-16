#include <iostream>
#include <limits.h>
using namespace std;

int least = INT_MAX, n;
int w[11][11];
bool check[11];

void init() {
	for (int i = 1; i <= n; i++) {
		check[i] = false;
	}
}

void circle(int start, int now, int count, int sum) {
	// 다시 시작 위치로 돌아오고, 모든 도시를 거쳤다면
	if (now == start && count == n) {
		if (least > sum)
			least = sum;
		return;
	}
	for (int i = 1; i <= n; i++) {
		// w[now][i]가 0일 때(연결X)
		if (!w[now][i])
			continue;
		// 방문하지 않았다면
		if (!check[now]) {
			// 방문 체크
			check[now] = true;
			sum += w[now][i];
			// 합이 least보다 작으면 재귀
			if (sum <= least)
				circle(start, i, count + 1, sum);
			// 여기 오면 합이 least보다 작다는 뜻이므로 방문 기록 초기화
			check[now] = false;
			sum -= w[now][i];
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	cin >> n;
	// 초기화
	init();
	// 입력받음
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> w[i][j];
		}
	}
	// 돌림
	for (int i = 1; i <= n; i++) {
		circle(i, i, 0, 0);
	}
	cout << least;
	return 0;
}