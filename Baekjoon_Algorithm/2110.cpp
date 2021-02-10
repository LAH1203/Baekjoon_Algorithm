#include <iostream>
#include <algorithm>
#define MAX 200000
using namespace std;

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int n, c;
	cin >> n >> c;
	int house[MAX];
	for (int i = 0; i < n; i++)
		cin >> house[i];
	sort(house, house + n);
	int low = house[0], high = house[n - 1];
	int ans = max(house[1] - house[0], house[n - 1] - house[n - 2]);
	while (low <= high) {
		int mid = (low + high) / 2;
		int before = 0;
		int set = 1;
		for (int i = 1; i < n; i++) {
			if (house[i] - house[before] >= mid) {
				before = i;
				set++;
			}
		}
		if (set >= c)
			low = mid + 1;
		else
			high = mid - 1;
		if (ans < mid && set >= c)
			ans = mid;
	}
	cout << ans;

	return 0;
}