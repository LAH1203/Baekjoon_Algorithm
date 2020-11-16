#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int average = 0;
	for (int i = 0; i < 5; i++) {
		int score;
		cin >> score;
		if (score < 40) {
			score = 40;
		}
		average += score;
	}
	average /= 5;
	cout << average;
	return 0;
}