#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int g[1001];

void init(int n) {
	for (int i = 1; i <= n; i++) {
		g[i] = i;
	}
}

// �θ� ��带 ������
int getParent(int x) {
	if (g[x] == x)
		return x;
	return g[x] = getParent(g[x]);
}

// �θ� ��带 ����
void unionParent(int x, int y) {
	x = getParent(x);
	y = getParent(y);
	// ���ڰ� ���� ������ ����
	if (x < y)
		g[y] = x;
	else
		g[x] = y;
}

// ���� �θ� ������ ���� �Ǵ�
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
		int a, b, c;
		cin >> a >> b >> c;
		way.push_back(edge(a, b, c));
	}
	sort(way.begin(), way.end());
	int answer = 0;
	for (int i = 0; i < way.size(); i++) {
		if (!find(way[i].node[0], way[i].node[1])) {
			answer += way[i].weight;
			unionParent(way[i].node[0], way[i].node[1]);
		}
	}
	if (answer == 0)
		cout << -1;
	else
		cout << answer;
	return 0;
}