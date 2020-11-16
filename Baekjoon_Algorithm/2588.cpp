#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d\n%d", &a, &b);
	int c = a * (b % 10), d = a * ((b / 10) % 10), e = a * (b / 100);
	printf("%d\n%d\n%d\n%d", c, d, e, c + 10 * d + 100 * e);
	return 0;
}