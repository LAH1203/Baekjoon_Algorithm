#include <iostream>
#include <vector>

using namespace std;

vector<int> g[101];
bool computer[101] = { false, };

void graph(int a, int b) {
	g[a].push_back(b);
	g[b].push_back(a);
}
void recursive(int i) {
	computer[i] = true;
	for (int j = 0; j < g[i].size(); j++) {
		if (!computer[g[i][j]]) {
			recursive(g[i][j]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int C, N;
	cin >> C >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		graph(a, b);
	}
	recursive(1);
	int count = 0;
	for (int i = 1; i <= C; i++) {
		if (computer[i]) {
			count++;
		}
	}
	cout << count - 1;
	return 0;
}