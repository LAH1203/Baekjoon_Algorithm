#include <stdio.h>

int main(void) {
	int C, N;
	int score[100][1000] = { 0, };
	double avg[100] = { 0, };
	double count[100] = { 0, };
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[i][j]);
			avg[i] += score[i][j];
		}
		avg[i] /= N;
		for (int j = 0; j < N; j++) {
			if (score[i][j] > avg[i]) {
				count[i]++;
			}
		}
		count[i] = count[i] / N * 100;
	}
	for (int i = 0; i < C; i++) {
		printf("%0.3f%\n", count[i]);
	}
	return 0;
}