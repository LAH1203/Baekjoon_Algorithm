#include <iostream>
#include <deque>
#include <math.h>
using namespace std;

deque<int> dq;

void moveToLeft() {
	dq.push_back(dq.front());
	dq.pop_front();
}

void moveToRight() {
	dq.push_front(dq.back());
	dq.pop_back();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m, cnt = 0;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		dq.push_back(i);
	for (int i = 0; i < m; i++) {
		int t, idx = 0;
		cin >> t;
		for (int j = 0; j < dq.size(); j++) {
			if (dq[j] == t) {
				idx = j;
				break;
			}
		}
		if (idx < dq.size() - idx) {
			while (dq.front() != t) {
				moveToLeft();
				cnt++;
			}
		} else {
			while (dq.front() != t) {
				moveToRight();
				cnt++;
			}
		}
		dq.pop_front();
	}

	cout << cnt;

	return 0;
}