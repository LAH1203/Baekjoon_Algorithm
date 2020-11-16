#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	vector<pair<int, int>>v;
	int N;
	cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x;
		cin >> y;
		v.push_back(pair<int, int>(x, y));
	}
	vector<pair<int, int>>::iterator iter;
	sort(v.begin(), v.end());
	for (vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); it++) {
		cout << it->first << ' ' << it->second << '\n';
	}
	return 0;
}