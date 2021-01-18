#include <stdio.h>

int main() {
	unsigned long long money = 1000000;

	int year;
	printf("100만원을 예치할 기간을 입력하세요(단, 년 단위): ");
	scanf("%d", &year);

	unsigned long long sum = money * ((1 + 0.045) * year);
	printf("만기 시 총 수령액은 %llu원입니다.", sum);
	return 0; // 10

}