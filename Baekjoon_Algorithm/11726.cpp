#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int dp[1001] = { 0, };
	dp[1] = 1;
	dp[2] = 2;
	// ����� �Ǻ���ġ ���� ���(���� : https://blog.naver.com/kks227/220777103650)
	// n���� Ÿ�ϸ��� ä��� ����� ���� f(n)�̶�� �� ��,
	// f(n)�� ���� �������� ���κ�� 2���� ä�� ����� �� + ���κ�� 1���� ä�� ����� ��
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n];
	return 0;
}