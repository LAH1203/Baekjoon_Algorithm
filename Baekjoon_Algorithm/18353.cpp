#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int damage[2001] = { 0, };
	int dp[2001] = { 0, };
	for (int i = 1; i <= n; i++) {
		cin >> damage[i];
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int tmp = 0;
		for (int j = 1; j < i; j++) {
			// ���ݷ��� �����ϰ�, ���������� ��������� ���̰� ���ݺ��� ũ��
			if (damage[j] > damage[i] && dp[j] >= dp[tmp]) {
				tmp = j;
			}
		}
		if (tmp != 0)
			dp[i] = dp[tmp] + 1;
	}
	for (int i = 1; i <= n; i++) {
		count = max(count, dp[i]);
	}
	count++;
	// �տ��� ���� count�� ���� �� �����ϴ� �κ� ������ �����̹Ƿ� ���� n-count
	count = n - count;
	cout << count;
	return 0;
}