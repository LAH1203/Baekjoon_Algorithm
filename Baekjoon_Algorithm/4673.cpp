#include <iostream>
using namespace std;

int num[10001];

void self_number() {
	int i = 1;
	int now;
	while (i < 10001) {
		now = 0;
		int tmp = i;
		while (tmp >= 10) {
			now += (tmp % 10);
			tmp /= 10;
		}
		now += tmp;
		now += i;
		if (now <= 10000)
			num[now] = i;
		i++;
	}
}

int main() {
	ios::sync_with_stdio(0); cout.tie(0);
	self_number();
	for (int i = 1; i < 10001; i++) {
		if (num[i] == 0)
			cout << i << '\n';
	}
	return 0;
}