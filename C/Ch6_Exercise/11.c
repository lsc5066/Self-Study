#include <stdio.h>

// 11
int main() {
	int year, month; // 년도, 월 선언(정수)

	printf("년도를 입력하세요: ");
	scanf("%d", &year); // 년도 입력

	printf("월을 입력하세요: ");
	scanf("%d", &month); // 월 입력

	switch (month) {

	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("%d년 %d월은 %d일까지 존재합니다.", year, month, 31);
		break;

	case 4:case 6:case 9:case 11:
		printf("%d년 %d월은 %d일까지 존재합니다.", year, month, 30);
		break;

	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("%d년 %d월은 %d일까지 존재합니다.", year, month, 29);

		}

		else {
			printf("%d년 %d월은 %d일까지 존재합니다.", year, month, 28);
		}

		break;

	default:
		printf("월을 잘못 입력하셨습니다.");
		break;
	}
}