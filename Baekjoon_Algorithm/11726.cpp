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
	// 계산은 피보나치 수열 사용(참고 : https://blog.naver.com/kks227/220777103650)
	// n열의 타일링을 채우는 경우의 수를 f(n)이라고 할 때,
	// f(n)은 제일 오른쪽을 가로블록 2개로 채운 경우의 수 + 세로블록 1개로 채운 경우의 수
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	cout << dp[n];
	return 0;
}