#include <stdio.h>

int main() {
	double length;

	printf("길이를 입력하세요(단위: km)");
	scanf("%lf", &length);
	double mile = length * 0.621371;
	printf("%lf는 %lf마일입니다.", length, mile);
	return 0;  // 7 

}