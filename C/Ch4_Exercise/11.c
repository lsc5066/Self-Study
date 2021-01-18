#include <stdio.h>

int main() {
	int a, b;
	printf("첫 번째 정수를 입력해주세요: \n");
	scanf("%d", &a);
	printf("두 번째 정수를 입력해주세요: \n");
	scanf("%d", &b);
	float sum = a + b;
	float avg = sum / 2;
	printf("두 정수의 합은 %.2f, 평균은 %.2f입니다.", sum, avg);
	return 0; // 11
}