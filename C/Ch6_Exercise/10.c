#include <stdio.h>

// 10
int main() {
	int year;

	printf("윤년 여부를 알고싶은 년도를 입력하세요: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d년은 윤년입니다.",year);

	}

	else {
		printf("%d년은 평년입니다.",year);
	}

	return 0;

}
