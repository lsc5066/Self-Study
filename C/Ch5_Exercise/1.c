#include <stdio.h>

int main() {
	int a, b;
	printf("첫 번째 정수를 입력해주세요: ");
	scanf("%d", &a);
	printf("두 번째 정수를 입력해주세요: ");
	scanf("%d", &b);
	printf("몫은 %d, 나머지는 %d입니다.", a > b ? a / b : b / a, a > b ? a % b : b % a);
	return 0; // 1
}