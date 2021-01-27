#include <stdio.h>

// 7

int main() {
	int num; 

	printf("각각의 자리에 해당하는 수를 반대로 출력하는 프로그램입니다.\n정수를 입력해주세요 : ");
	scanf("%d", &num);

	printf("실행 결과 : ");
	do {
		printf("%d", num % 10);
		num /= 10;
	} while (num != 0);

	return 0;
}