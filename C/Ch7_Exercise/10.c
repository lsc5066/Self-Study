#include <stdio.h>

// 9

int main() {
	int money = 1000000;
	int year;

	for (year = 1; year <= 10; year++) {
		printf("������ %d�� ���, %d�� �ڿ� ���� �� �ݾ��� %.0lf�Դϴ�.\n", money, year, money * pow(1.045, year));
		
	}

	return 0;
}