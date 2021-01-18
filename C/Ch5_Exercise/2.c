#include <stdio.h>

int main() {
	double kg;
	printf("무게를 입력하세요(단, 단위는 kg): ");
	scanf("%lf", &kg);

	double pound = kg / 0.453592;
	printf("%lfkg은 %.3lf파운드 입니다.", kg, pound);
	return 0; // 2

}