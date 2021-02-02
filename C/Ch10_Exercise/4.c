#include <stdio.h>

// 4
// calculator 함수 선언
int calculator(int a, int b, int c);

int main() {
	int a, b, c;

	printf("첫 번째 정수를 입력해주세요 : ");
	scanf("%d", &a);

	printf("두 번째 정수를 입력해주세요 : ");
	scanf("%d", &b);

	printf("세 번째 정수를 입력해주세요 : ");
	scanf("%d", &c);

	// calculator 함수 호출
	int max = calculator(a, b, c);
	printf("%d, %d, %d 중 가장 큰 수는 %d입니다.", a, b, c, max);

	return 0;
}

// calculator 함수 정의
int calculator(int a, int b, int c) {

	int max = 0;

	if (a >= b && a >= c) {
		max = a;

	}

	else if (b >= a && b >= c) {
		max = b;

	}

	else if (c >= a && c >= b) {
		max = c;

	}


	return max;
}