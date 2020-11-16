#include <stdio.h>

int main(void) {
	char result[81] = { NULL, };
	int score[1000] = { 0, };
	int C;
	scanf("%d\n", &C);
	for (int i = 0; i < C; i++) {
		int j = 0;
		do {
			scanf("%c", &result[j]);
			j++;
		} while (result[j - 1] != '\n');
		int plus = 1;
		for (int k = 0; k < j; k++) {
			if (result[k] == 'O') {
				if (result[k - 1] == 'O') {
					plus++;
					score[i] += plus;
				}
				else {
					plus = 1;
					score[i] += plus;
				}
			}
		}
	}
	for (int i = 0; i < C; i++) {
		printf("%d\n", score[i]);
	}
	return 0;
}