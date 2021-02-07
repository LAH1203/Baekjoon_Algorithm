#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 10010
using namespace std;

int n, m, st, en, cnt_road;
int entry[MAX], time[MAX];
bool visit[MAX];
vector<pair<int, int>> road[MAX], r_road[MAX];


void Find_Dist(int s) {
	queue<pair<int, int>> q;
	q.push(make_pair(s, 0));

	while (q.empty() == 0) {
		int cur = q.front().first;
		int cur_Time = q.front().second;
		q.pop();

		for (int i = 0; i < road[cur].size(); i++) {
			int next = road[cur][i].first;
			int nTime = road[cur][i].second;

			time[next] = max(time[next], cur_Time + nTime);
			entry[next]--;

			if (entry[next] == 0)
				q.push(make_pair(next, time[next]));
		}
	}
}

void Find_Longest_Road(int e) {
	queue<int> q;
	q.push(e);
	visit[e] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < r_road[cur].size(); i++) {
			int prev = r_road[cur][i].first;
			int prevTime = r_road[cur][i].second;

			if (time[cur] - prevTime == time[prev]) {
				cnt_road++;
				if (!visit[prev]) {
					visit[prev] = true;
					q.push(prev);
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c; cin >> a >> b >> c;
		road[a].push_back(make_pair(b, c));
		r_road[b].push_back(make_pair(a, c));
		entry[b]++;
	}
	cin >> st >> en;

	Find_Dist(st);
	Find_Longest_Road(en);

	cout << time[en] << '\n' << cnt_road << '\n';

	return 0;
}