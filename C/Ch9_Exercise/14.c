#include <stdio.h>
#define A 3
#define B 2

// 14
int main() {
	int a[A][B] = { 3,5,4,2,5,7 }; // 2차원 배열 a[3][2]
	int b[B][A] = { 3,8,2,2,4,6 }; // 2차원 배열 b[2][3]
	int mul;

	// 행렬의 곱
	for (int i = 0; i < A; i++) {

		for (int j = 0; j < A; j++) {
			mul = 0;
			
			for (int k = 0; k < B; k++) {
				mul += (a[i][k] * b[k][j]);

			}
			printf("%d ", mul);

		}
		printf("\n");
	}

	return 0;
}