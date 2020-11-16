#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		long long count_5 = 0;
		// 2의 배수가 5의 배수보다 훨씬 많으므로 시간 단축을 위해 2는 생략
		for (int j = 5; j <= N; j *= 5) {
			// 5의 n제곱이 몇 개 들어가는지 세는 과정
			count_5 += (N / j);
		}
		cout << count_5 << '\n';
	}
	return 0;
}
