#include <iostream>
using namespace std;

int dp[1000001] = { 0, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	// 계산은 피보나치 수열 사용(참고 : https://blog.naver.com/kks227/220777103650)
	// 2xn 타일링 코드 사용
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}
	cout << dp[n];
	return 0;
}