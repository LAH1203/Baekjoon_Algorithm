#include <iostream>
#include <vector>
using namespace std;

int N;
int result;
vector<int> T;
vector<int> P;

void maxResult(int today, int total) {
	if (today > N) {
		return;
	}
	else if (today == N) {
		if (total > result) {
			result = total;
		}
		return;
	}
	maxResult(today + T[today], total + P[today]);
	maxResult(today + 1, total);
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int t, p;
		cin >> t >> p;
		T.push_back(t);
		P.push_back(p);
	}
	maxResult(0, 0);
	cout << result;
}