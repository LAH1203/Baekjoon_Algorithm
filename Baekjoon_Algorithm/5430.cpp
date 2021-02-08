#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t, n;
	cin >> t;
	string p, num;
	for (int i = 0; i < t; i++) {
		cin >> p >> n >> num;
		deque<int> dq;
		bool check = true, r = false;
		int idx = 0;
		while (num[idx] != NULL) {
			int tmp = 0;
			while (num[idx] >= '0' && num[idx] <= '9') {
				if (tmp == 0)
					tmp += (int)num[idx] - 48;
				else {
					tmp *= 10;
					tmp += (int)num[idx] - 48;
				}
				idx++;
			}
			if (tmp != 0)
				dq.push_back(tmp);
			idx++;
		}
		for (int j = 0; j < p.length(); j++) {
			if (p[j] == 'R') {
				/*
				dq2.clear();
				int tmp = dq1.size();
				for (int k = 0; k < tmp; k++) {
					dq2.push_back(dq1.back());
					dq1.pop_back();
				}
				// dq2를 dq1으로 복사
				dq1 = dq2;
				*/
				// reverse(dq.begin(), dq.end());
				if (!r)
					r = true;
				else
					r = false;
			}
			else if (p[j] == 'D') {
				if (dq.empty()) {
					check = false;
					break;
				}
				else if (r)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}
		if (!check)
			cout << "error\n";
		else {
			cout << '[';
			if (r)
				reverse(dq.begin(), dq.end());
			for (int j = 0; j < dq.size(); j++) {
				if (j == dq.size() - 1)
					cout << dq[j];
				else
					cout << dq[j] << ',';
			}
			cout << "]\n";
		}
	}

	return 0;
}