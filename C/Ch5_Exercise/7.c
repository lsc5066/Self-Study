#include <stdio.h>

int main() {
	int month;
	printf("달을 입력해주세요: ");
	scanf("%d", &month);

	char a[] = "상반기";
	char b[] = "하반기";
	printf("%d월은 %s입니다.", month, month <= 6 ? a : b);
	return 0; // 7
}