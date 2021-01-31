#include <stdio.h>

// 9
int main() {
	int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // day[12]에 각각의 달에 해당하는 말일 저장
	int year = 0, month = 0; // 입력받을 해와 달

	// 년도와 달 입력
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);

	printf("달을 입력하세요 : ");
	scanf("%d", &month);

	// 윤년은 4 또는 4, 100, 400으로 나누어 떨어진다. 나머지는 평년
	if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {

		// 윤년이면 2월달의 말일을 29일로 수정한다.
		day[1] = 29;
	}

	// 해, 달, 말일 출력
	printf("%d년 %d월은 %d일이 말일입니다.\n", year, month, day[month - 1]);
	return 0;
}