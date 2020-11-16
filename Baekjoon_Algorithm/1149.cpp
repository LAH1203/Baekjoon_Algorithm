#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<tuple<int, int, int>> all;
	int color[1000][3] = { 0, };
	for (int i = 0; i < n; i++) {
		int r, g, b;
		cin >> r >> g >> b;
		all.push_back(make_tuple(r, g, b));
	}
	color[0][0] = get<0>(all[0]);
	color[0][1] = get<1>(all[0]);
	color[0][2] = get<2>(all[0]);
	for (int i = 1; i < n; i++) {
		// red
		color[i][0] = min(color[i - 1][1] + get<0>(all[i]), color[i - 1][2] + get<0>(all[i]));
		// green
		color[i][1] = min(color[i - 1][0] + get<1>(all[i]), color[i - 1][2] + get<1>(all[i]));
		// blue
		color[i][2] = min(color[i - 1][0] + get<2>(all[i]), color[i - 1][1] + get<2>(all[i]));
	}
	int min_cost = min(color[n - 1][0], color[n - 1][1]);
	min_cost = min(min_cost, color[n - 1][2]);
	cout << min_cost;
	return 0;
}