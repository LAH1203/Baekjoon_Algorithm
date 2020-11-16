#include <iostream>
using namespace std;

int dp[1000001];

int function_dp(int x) {
	if (x == 1)
		return dp[x];
	if (dp[x] != 0)
		return dp[x];
	// �ϴ� 1�� ���ٰ� �����ϰ� �������
	dp[x] = function_dp(x - 1) + 1;
	// x�� 2�� ����̸�
	if (x % 2 == 0) {
		// 2�� ���� ���� dp�� �����ϰ� 2�� ���� ���� Ƚ�� 1 ����
		int tmp = function_dp(x / 2) + 1;
		// 1�� �� ���� 2�� ���� �ͺ��� ū ��� ��ü
		if (dp[x] > tmp)
			dp[x] = tmp;
	}
	// x�� 3�� ����̸�
	if (x % 3 == 0) {
		// 3���� ���� ���� dp�� �����ϰ� 3���� ���� ���� Ƚ�� 1 ����
		int tmp = function_dp(x / 3) + 1;
		// �տ��� ������ ���� ���� 3���� ���� �ͺ��� ū ��� ��ü
		if (dp[x] > tmp)
			dp[x] = tmp;
	}
	return dp[x];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	cout << function_dp(n);
	return 0;
}