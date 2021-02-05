#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	stack<int> s;
	int* num = (int*)malloc(sizeof(int) * n);
	int* ans = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < n; i++) {
		if (s.empty())
			s.push(i);
		while (!s.empty() && num[s.top()] < num[i]) {
			ans[s.top()] = num[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < n; i++) {
		if (ans[i] == 0)
			cout << -1 << ' ';
		else
			cout << ans[i] << ' ';
	}
	free(num);
	free(ans);
	return 0;
}