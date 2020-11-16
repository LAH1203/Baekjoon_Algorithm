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
			// 공격력이 감소하고, 이전까지의 최장수열의 길이가 지금보다 크면
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
	// 앞에서 구한 count는 가장 긴 감소하는 부분 수열의 길이이므로 답은 n-count
	count = n - count;
	cout << count;
	return 0;
}