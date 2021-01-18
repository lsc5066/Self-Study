#include <stdio.h>

int main() {
	int a, b, c;
	printf("세 수를 입력해주세요: ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a > b ? a : b;
	max = c > max ? c : max;
	printf("가장 큰 수는 %d입니다.", max);
	return 0; // 8
}