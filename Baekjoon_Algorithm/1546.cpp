#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> scores;
	int max_score = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		scores.push_back(tmp);
		if (tmp > max_score)
			max_score = tmp;
	}
	double avg = 0;
	for (int i = 0; i < n; i++) {
		scores[i] = (scores[i] / max_score * 100);
		avg += scores[i];
	}
	avg /= n;
	cout << avg;
	return 0;
}