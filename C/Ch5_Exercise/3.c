#include <stdio.h>

int main() {
	double cm;
	printf("길이를 입력하세요(단, 단위는 cm): ");
	scanf("%lf", &cm);

	double feet = cm / 30.48;
	printf("%.3lfcm는 %.3lf피트입니다.", cm, feet);
	return 0; // 3
}