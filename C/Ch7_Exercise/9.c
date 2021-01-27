#include <stdio.h>

// 9

int main() {
	unsigned long int money = 1000000;
	int year = 1;
	unsigned long int total = money*(1 + 0.045) * year;

	while (year <= 10) {
		printf("원금이 %lu인 경우, %d년 뒤에 받을 총 금액은 %lu입니다.\n", money, year, total);
		year += 1;
		total = money*(1 + 0.045) * year;
		
	}

	return 0;
}