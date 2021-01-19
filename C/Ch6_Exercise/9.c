#include <stdio.h>

// 9
int main() {
	int month; // 월 선언(정수)

	printf("월(month)를 입력해주세요: ");
	scanf("%d", &month); // 월 입력

	switch (month) {

	case 1:case 2:case 3:
		printf("%d월은 %d사분기입니다.", month, 1);
		break;

	case 4:case 5:case 6:
		printf("%d월은 %d사분기입니다.", month, 2);
		break;

	case 7:case 8:case 9:
		printf("%d월은 %d사분기입니다.", month, 3);
		break;

	case 10:case 11:case 12:
		printf("%d월은 %d사분기입니다.", month, 4);
		break;

	default:
		printf("월(month)를 잘못 입력하셨습니다.");
		break;

	}
}