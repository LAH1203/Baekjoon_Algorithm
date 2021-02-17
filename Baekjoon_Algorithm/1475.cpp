#include <iostream>
#include <string>
using namespace std;

int cnt[10];

int findMaxIndex() {
	int maxIndex = 0;
	for (int i = 1; i < 10; i++) {
		if (cnt[maxIndex] < cnt[i])
			maxIndex = i;
	}
	return maxIndex;
}

int main() {
	string n;
	cin >> n;

	for (int i = 0; i < n.length(); i++) {
		int tmp = n[i] - '0';
		cnt[tmp]++;
	}

	int maxIndex = findMaxIndex();

	int sumSixAndNine = cnt[6] + cnt[9];

	if (sumSixAndNine % 2 == 0) {
		sumSixAndNine /= 2;
	} else {
		sumSixAndNine /= 2;
		sumSixAndNine++;
	}

	if (maxIndex != 6 && maxIndex != 9 && cnt[maxIndex] > sumSixAndNine)
		cout << cnt[maxIndex];
	else
		cout << sumSixAndNine;

	return 0;
}