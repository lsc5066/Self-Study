#include <stdio.h>

// 2
// intpow 함수 선언
int intpow(int m, int n);

int main() {

	int m, n;

	printf("첫 번째 정수를 입력해주세요 : ");
	scanf("%d", &m);

	printf("두 번째 정수를 입력해주세요 : ");
	scanf("%d", &n);

	// intpow 함수 호출
	int mul = intpow(m, n);
	printf("%d * %d = %d", m, n, mul);

	return 0;
}

// intpow 함수 정의
int intpow(int m, int n) {
	int mul = m * n;

	return mul;
}