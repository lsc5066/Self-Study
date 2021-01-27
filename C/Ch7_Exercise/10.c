#include <stdio.h>

// 9

int main() {
	int money = 1000000;
	int year;

	for (year = 1; year <= 10; year++) {
		printf("원금이 %d인 경우, %d년 뒤에 받을 총 금액은 %.0lf입니다.\n", money, year, money * pow(1.045, year));
		
	}

	return 0;
}