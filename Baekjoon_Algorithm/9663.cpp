#include <iostream>
#include <math.h>
using namespace std;

int n, answer;
int column[15];

bool check(int c) {
	// ���� ���� Ȯ���ϸ� ��ġ�� �������� Ȯ��
	for (int i = 1; i < c; i++) {
		// ���� ���� ��ġ�� ��
		if (column[i] == column[c])
			return false;
		// �밢��
		if (abs(column[i] - column[c]) == abs(i - c))
			return false;
	}
	// ���� ���� �ƴϰ� �밢���� ��ġ�������� ���� ���
	return true;
}

void dfs(int row) {
	if (row == n)
		answer++;
	else {
		for (int i = 1; i <= n; i++) {
			// �� ���� row+1��° ���� i��° ���� ���� �� �ִٴ� ��
			// ���Ƿ� �̷��� ���� �� ���� ���ǹ��� ���� ����
			column[row + 1] = i;
			// �湮�� �� ������ ���� ���� dfs ����
			if (check(row + 1))
				dfs(row + 1);
			// �ش� ���� �湮�� �� ������ 0���� ����
			else
				column[row + 1] = 0;
		}
	}
	// ��Ʈ��ŷ �����̹Ƿ� �湮��� �ʱ�ȭ
	column[row] = 0;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		// �� ���� ù ��° ������ ���캸�� ������ ����
		column[1] = i;
		dfs(1);
	}

	cout << answer;

	return 0;
}