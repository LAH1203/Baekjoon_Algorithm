#include <iostream>

using namespace std;

void print(int n, int N) {
	if (n < 0) {
		return;
	}
	for (int i = 0; i < N - n; i++) {
		cout << "____";
	}
	cout << "\"����Լ��� ������?\"\n";
	for (int i = 0; i < N - n; i++) {
		cout << "____";
	}
	if (n > 0) {
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = 0; i < N - n; i++) {
			cout << "____";
		}
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = 0; i < N - n; i++) {
			cout << "____";
		}
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	}
	else {
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	print(n - 1, N);
	for (int i = 0; i < N - n; i++) {
		cout << "____";
	}
	cout << "��� �亯�Ͽ���.\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	print(N, N);
	return 0;
}