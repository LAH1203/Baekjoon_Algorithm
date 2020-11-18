#include <iostream>
#include <math.h>
using namespace std;

int n, answer;
int column[15];

bool check(int c) {
	// 앞의 열을 확인하며 배치가 가능한지 확인
	for (int i = 1; i < c; i++) {
		// 같은 열에 위치할 때
		if (column[i] == column[c])
			return false;
		// 대각선
		if (abs(column[i] - column[c]) == abs(i - c))
			return false;
	}
	// 같은 열도 아니고 대각선에 위치해있지도 않은 경우
	return true;
}

void dfs(int row) {
	if (row == n)
		answer++;
	else {
		for (int i = 1; i <= n; i++) {
			// 이 줄은 row+1번째 행의 i번째 열에 놓을 수 있다는 뜻
			// 임의로 이렇게 선언 후 밑의 조건문을 통해 변경
			column[row + 1] = i;
			// 방문할 수 있으면 다음 열로 dfs 진행
			if (check(row + 1))
				dfs(row + 1);
			// 해당 열에 방문할 수 없으면 0으로 만듦
			else
				column[row + 1] = 0;
		}
	}
	// 백트래킹 시점이므로 방문기록 초기화
	column[row] = 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		// 각 행의 첫 번째 열부터 살펴보는 식으로 진행
		column[1] = i;
		dfs(1);
	}

	cout << answer;

	return 0;
}