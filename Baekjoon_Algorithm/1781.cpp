#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	// 2���� ����
	vector<vector<int>> v(n + 1);
	priority_queue<int> all;
	for (int i = 0; i < n; i++) {
		int d, c;
		cin >> d >> c;
		v[d].push_back(c);
	}
	int answer = 0;
	for (int i = n; i >= 1; i--) {
		// �ݺ������� deadline�� �´� �Ŷ�� ���� �켱����ť�� �ִ´�
		for (int j : v[i]) {
			all.push(j);
		}
		if (!all.empty()) {
			answer += all.top();
			all.pop();
		}
	}
	cout << answer;
	return 0;
}