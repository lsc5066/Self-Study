#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long money = 1000000;
	float a = 1.045;
	int b = 0;

	printf("예치기간을 입력해주세요(단, 단위는 년): ");
	scanf("%d", &b);
	unsigned long long sum = money * pow(a, b);

	printf("만기시 총 금액은 %llu원 입니다.", sum);
	return 0; // 11
	
}