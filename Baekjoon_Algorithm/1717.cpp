#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int g[1000001];

void init(int n) {
	for (int i = 1; i <= n; i++) {
		g[i] = i;
	}
}

// 부모 노드를 가져옴
int getParent(int x) {
	if (g[x] == x)
		return x;
	return g[x] = getParent(g[x]);
}

// 부모 노드를 병합
void unionParent(int x, int y) {
	x = getParent(x);
	y = getParent(y);
	// 숫자가 작은 쪽으로 병합
	if (x < y)
		g[y] = x;
	else
		g[x] = y;
}

// 같은 부모를 갖는지 찾음
bool find(int x, int y) {
	x = getParent(x);
	y = getParent(y);
	if (x == y)
		return true;
	else
		return false;
}

class edge {
public:
	int node[2];
	int weight;
	edge(int a, int b, int weight) {
		this->node[0] = a;
		this->node[1] = b;
		this->weight = weight;
	}
	bool operator < (edge &E) {
		return this->weight < E.weight;
	}
};

vector<edge> way;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	init(n);
	for (int i = 0; i < m; i++) {
		int what, a, b;
		cin >> what >> a >> b;
		if (!what) {
			unionParent(a, b);
		}
		else {
			bool check = find(a, b);
			if (check)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}