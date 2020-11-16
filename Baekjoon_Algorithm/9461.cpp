#include <iostream>
using namespace std;

long long int dp[101];

long long int function_dp(int n) {
	if (dp[n] != 0)
		return dp[n];
	dp[n] = function_dp(n - 5) + function_dp(n - 1);
	return dp[n];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		dp[1] = 1, dp[2] = 1, dp[3] = 1, dp[4] = 2, dp[5] = 2;
		cout << function_dp(n) << '\n';
	}
	return 0;
}