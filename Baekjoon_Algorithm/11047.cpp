#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K;
vector<int> values;

int count() {
	int c = 0;
	for (int i = values.size() - 1; i >= 0; i--) {
		if (K == 0) {
			return c;
		}
		if (values[i] <= K) {
			int many = K / values[i];
			c += many;
			K -= many * values[i];
		}
	}
	return c;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		values.push_back(tmp);
	}
	cout << count();
	return 0;
}