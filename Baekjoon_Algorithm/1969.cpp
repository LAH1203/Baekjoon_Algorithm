#include <iostream>
#include <vector>
#include <string>

using namespace std;

string answer;
vector<string> dna;
int answer_HD;

void find(int i) {
	vector<int> count;
	for (int i = 0; i < 4; i++) {
		count.push_back(0);
	}
	for (auto it = dna.begin(); it != dna.end(); it++) {
		if ((*it)[i] == 'A') {
			count[0]++;
		}
		else if ((*it)[i] == 'C') {
			count[1]++;
		}
		else if ((*it)[i] == 'G') {
			count[2]++;
		}
		else {
			count[3]++;
		}
	}
	int tmp[4] = { count[0], count[1], count[2], count[3] };
	if (count[0]) {
		if (count[0] == count[1]) {
			count[1] = 0;
		}
		if (count[0] == count[2]) {
			count[2] = 0;
		}
		if (count[0] == count[3]) {
			count[3] = 0;
		}
	}
	if (count[1]) {
		if (count[1] == count[2]) {
			count[2] = 0;
		}
		if (count[1] == count[3]) {
			count[3] = 0;
		}
	}
	if (count[2]) {
		if (count[2] == count[3]) {
			count[3] = 0;
		}
	}
	if (count[0] > count[1] && count[0] > count[2] && count[0] > count[3]) {
		answer += ('A');
		answer_HD += (tmp[1] + tmp[2] + tmp[3]);
	}
	else if (count[1] > count[0] && count[1] > count[2] && count[1] > count[3]) {
		answer += ('C');
		answer_HD += (tmp[0] + tmp[2] + tmp[3]);
	}
	else if (count[2] > count[0] && count[2] > count[1] && count[2] > count[3]) {
		answer += ('G');
		answer_HD += (tmp[1] + tmp[0] + tmp[3]);
	}
	else {
		answer += ('T');
		answer_HD += (tmp[1] + tmp[2] + tmp[0]);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		dna.push_back(tmp);
	}
	for (int i = 0; i < M; i++) {
		find(i);
	}
	cout << answer << '\n' << answer_HD;
	return 0;
}