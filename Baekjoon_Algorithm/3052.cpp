#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int remain[10];
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		remain[i] = (tmp % 42);
	}
	vector<int> different;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		sort(different.begin(), different.end());
		bool check = false;
		for (int j = 0; j < different.size(); j++) {
			if (different[j] == remain[i]) {
				check = true;
				break;
			}
		}
		if (!check) {
			count++;
			different.push_back(remain[i]);
		}
	}
	cout << count;
	return 0;
}