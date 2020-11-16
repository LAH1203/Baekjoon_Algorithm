#include <iostream>
using namespace std;

int dp[1000001];

int function_dp(int x) {
	if (x == 1)
		return dp[x];
	if (dp[x] != 0)
		return dp[x];
	// 일단 1을 뺐다고 가정하고 집어넣음
	dp[x] = function_dp(x - 1) + 1;
	// x가 2의 배수이면
	if (x % 2 == 0) {
		// 2로 나눈 수로 dp를 진행하고 2로 나눈 행위 횟수 1 증가
		int tmp = function_dp(x / 2) + 1;
		// 1을 뺀 것이 2를 나눈 것보다 큰 경우 교체
		if (dp[x] > tmp)
			dp[x] = tmp;
	}
	// x가 3의 배수이면
	if (x % 3 == 0) {
		// 3으로 나눈 수로 dp를 진행하고 3으로 나눈 행위 횟수 1 증가
		int tmp = function_dp(x / 3) + 1;
		// 앞에서 가려진 작은 수가 3으로 나눈 것보다 큰 경우 교체
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