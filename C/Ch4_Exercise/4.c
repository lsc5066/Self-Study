#include <stdio.h>

int main() {
	double f;
	printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:\n ");
	scanf("%lf", &f);
	double c = 5.0 / 9.0 * (f - 32.0);
	printf("¼·¾¾¿Âµµ: %.4lf", c);
	return 0; // 4
}