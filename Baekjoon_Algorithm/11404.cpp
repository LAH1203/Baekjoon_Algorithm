#include <iostream>
#include <vector>
#define COST_MAX 999999999
/*
int로 표현할 수 있는 최댓값이 2147483647인데,
밑을 보면 tree[i][k]+tree[k][j]를 더하는게 있기 때문에
그 값이 int의 최대를 넘기면 이상한 값이 들어감.
그러므로 COST_MAX의 값은 int 최대의 절반 이하의 값이 들어가야 함.
*/

using namespace std;

int tree[101][101];

void chogihwa(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			tree[i][j] = COST_MAX;
			if (i == j) {
				tree[i][j] = 0;
			}
		}
	}
}
void leastCost(int n) {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (tree[i][k] + tree[k][j] < tree[i][j]) {
					tree[i][j] = tree[i][k] + tree[k][j];
				}
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	chogihwa(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (c < tree[a][b]) {
			tree[a][b] = c;
		}
	}
	leastCost(n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			// i에서 j로 가는 길이 없는 경우
			if (tree[i][j] == COST_MAX)
				cout << "0 ";
			else
				cout << tree[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}