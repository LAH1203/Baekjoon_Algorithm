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
	// �ٽ� ���� ��ġ�� ���ƿ���, ��� ���ø� ���ƴٸ�
	if (now == start && count == n) {
		if (least > sum)
			least = sum;
		return;
	}
	for (int i = 1; i <= n; i++) {
		// w[now][i]�� 0�� ��(����X)
		if (!w[now][i])
			continue;
		// �湮���� �ʾҴٸ�
		if (!check[now]) {
			// �湮 üũ
			check[now] = true;
			sum += w[now][i];
			// ���� least���� ������ ���
			if (sum <= least)
				circle(start, i, count + 1, sum);
			// ���� ���� ���� least���� �۴ٴ� ���̹Ƿ� �湮 ��� �ʱ�ȭ
			check[now] = false;
			sum -= w[now][i];
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	cin >> n;
	// �ʱ�ȭ
	init();
	// �Է¹���
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> w[i][j];
		}
	}
	// ����
	for (int i = 1; i <= n; i++) {
		circle(i, i, 0, 0);
	}
	cout << least;
	return 0;
}