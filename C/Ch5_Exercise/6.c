#include <stdio.h>

int main() {
	unsigned long long num;
	printf("천만 이하의 수를 입력해주세요: ");
	scanf("%llu", &num);
	
	int mw = num / 10000;
	int cw = num % 10000 / 1000;
	int bw = num % 1000 / 100;
	int sw = num % 100 / 10;
	int iw = num % 10;

	printf("%llu은 %d만 %d천 %d백 %d십 %d입니다.", num, mw, cw, bw, sw, iw);
	return 0; // 6
}