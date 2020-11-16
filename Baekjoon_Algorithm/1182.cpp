#include <iostream>
#include <vector>
using namespace std;

int result;
vector<int> v;

void finalResult(int index, int sum, int N, int S) {
	if (index == N) {
		if (sum == S) {
			result++;
		}
		return;
	}
	finalResult(index + 1, sum + v[index], N, S);
	finalResult(index + 1, sum, N, S);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;
		v.push_back(e);
	}
	finalResult(0, 0, N, S);
	if (S == 0) {
		result--;
	}
	cout << result;
	return 0;
}