#include <stdio.h>

// 15

// factorial(!) 함수 정의
int factorial(int num)
{
	if (num <= 1) {
		return 1;
	}

	return num * factorial(num - 1);
}

int main() {

	int pascal[10][10] = { 0 };
	int resultn = 0;
	int resultr = 0;
	int resultnr = 0;

	// 조합 계산(nCr)
	for (int i = 0; i < 10; i++) {

		for (int j = 0; j <= i; j++) { 
			// 00 10 11 20 21 22 ...
			pascal[i][j] = factorial(i) / (factorial(j) * factorial(i - j));
			printf("%d", pascal[i][j]);
			

		}

		printf("\n");
	}
	
	return 0;
}