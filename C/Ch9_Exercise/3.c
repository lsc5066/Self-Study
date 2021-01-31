#include <stdio.h>
#define SIZE_A 5
#define SIZE_B 7

// 3
int main() {
	int a[SIZE_A] = { 32,56,7,8,24 };
	int b[SIZE_B] = { 3,21,35,57,24,82,8 };
	int c[SIZE_A + SIZE_B] = {0};
	int i, j;


	for (i = 0; i < SIZE_A; i++) {
		c[i] = a[i];
	}

	for (i = SIZE_A, j = 0; i < SIZE_A + SIZE_B; i++, j++) {
		c[i] = b[j];
		
	}

	printf("a[] + b[] = ");

	for (i = 0; i < SIZE_A+SIZE_B; i++) {
		printf("%d ", c[i]);
	}

	return 0;
}