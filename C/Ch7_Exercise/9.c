#include <stdio.h>

// 9

int main() {
	unsigned long int money = 1000000;
	int year = 1;
	unsigned long int total = money*(1 + 0.045) * year;

	while (year <= 10) {
		printf("������ %lu�� ���, %d�� �ڿ� ���� �� �ݾ��� %lu�Դϴ�.\n", money, year, total);
		year += 1;
		total = money*(1 + 0.045) * year;
		
	}

	return 0;
}