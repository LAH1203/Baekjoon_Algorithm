#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string dp[101][101];

string add(string n1, string n2) {
	long long sum = 0;
	string answer;
	while (!n1.empty() || !n2.empty() || sum) {
		if (!n1.empty()) {
			// ���ڷ� ��ȯ�ؼ� �����ֱ� ����(ASCII CODE)
			sum += n1.back() - '0';
			n1.pop_back();
		}
		if (!n2.empty()) {
			// ���ڷ� ��ȯ�ؼ� �����ֱ� ����
			sum += n2.back() - '0';
			n2.pop_back();
		}
		// ���� �ڸ� ���ڸ� string������ ��ȯ�ؼ� ������
		answer.push_back((sum % 10) + '0');
		sum /= 10;
	}
	// �Ųٷ� string���� �߰������Ƿ� �ݴ�� ���� ������
	reverse(answer.begin(), answer.end());
	return answer;
}

string combination(int n, int m) {
	string& answer = dp[n][m];
	if (answer != "")
		return answer;
	if (m == 0 || m == n)
		return answer = "1";
	// ������ ����
	return answer = add(combination(n - 1, m - 1), combination(n - 1, m));
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	cout << combination(n, m);
	return 0;
}