#include <stdio.h>

// 11 
// power 함수 선언
int power(int x, int y);

int main() {
	
	int x = 6, y = 0;

	for (y; y <= 10; y++) {

		printf("%d의 %d제곱은 %d입니다.\n", x, y, power(x, y));

	}

	return 0;
}

// power 함수 정의
int power(int x, int y) {

	if (y == 0) {
		return 1;
	}

	return x * power(x, y - 1);
}