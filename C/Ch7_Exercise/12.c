#include <stdio.h>

// 12
int main() {
	double c, f;

	for (c = -60; c <= 140; c += 20) {
		printf("¼·¾¾¿Âµµ %.0lfµµ´Â È­¾¾¿Âµµ %.0lfÀÔ´Ï´Ù.\n", c, (9.0 / 5.0) * c + 32);
	}

	return 0;
}