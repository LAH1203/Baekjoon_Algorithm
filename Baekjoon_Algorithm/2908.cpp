#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	// 기본 세팅 : 상근이가 읽었을 때 a < b인 상태
	bool check;
	for (int i = 2; i >= 0; i--) {
		// 상근이가 읽었을 때 a > b이므로 true로 바꿈
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