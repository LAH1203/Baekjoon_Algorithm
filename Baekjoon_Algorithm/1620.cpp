#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	map<string, int> pokemon;
	vector<string> name_arr;
	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		pokemon.insert(pair<string, int>(name, i + 1));
		name_arr.push_back(name);
	}
	for (int i = 0; i < M; i++) {
		string name;
		cin >> name;
		if (atoi(name.c_str())) {
			// �Է¹��� ���� ������ ���
			cout << name_arr[atoi(name.c_str()) - 1] << '\n';
		}
		else {
			// �Է¹��� ���� ���ڿ��� ���
			cout << pokemon[name] << '\n';
		}
	}
	return 0;
}