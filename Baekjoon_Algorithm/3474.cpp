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
		// 2�� ����� 5�� ������� �ξ� �����Ƿ� �ð� ������ ���� 2�� ����
		for (int j = 5; j <= N; j *= 5) {
			// 5�� n������ �� �� ������ ���� ����
			count_5 += (N / j);
		}
		cout << count_5 << '\n';
	}
	return 0;
}
