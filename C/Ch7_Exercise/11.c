#include <stdio.h>

// 11 
int main() {
	int num, i;
	printf("9 이하의 정수를 입력해주세요 : ");
	scanf("%d", &num);

	if (num < 1 || num>9) {
		printf("범위를 초과하는 정수를 입력하셨습니다.\n");
		return 0;
	}

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}