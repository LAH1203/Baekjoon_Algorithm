#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	// �⺻ ���� : ����̰� �о��� �� a < b�� ����
	bool check;
	for (int i = 2; i >= 0; i--) {
		// ����̰� �о��� �� a > b�̹Ƿ� true�� �ٲ�
		if (a[i] > b[i]) {
			check = true;
			break;
		} else if (a[i] < b[i]) {
			check = false;
			break;
		}
	}
	if (check) {
		for (int i = 2; i >= 0; i--)
			cout << a[i];
	} else {
		for (int i = 2; i >= 0; i--)
			cout << b[i];
	}
	return 0;
}