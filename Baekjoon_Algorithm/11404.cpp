#include <iostream>
#include <vector>
#define COST_MAX 999999999
/*
int�� ǥ���� �� �ִ� �ִ��� 2147483647�ε�,
���� ���� tree[i][k]+tree[k][j]�� ���ϴ°� �ֱ� ������
�� ���� int�� �ִ븦 �ѱ�� �̻��� ���� ��.
�׷��Ƿ� COST_MAX�� ���� int �ִ��� ���� ������ ���� ���� ��.
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
			// i���� j�� ���� ���� ���� ���
			if (tree[i][j] == COST_MAX)
				cout << "0 ";
			else
				cout << tree[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}