#include <stdio.h>

int main() {
	unsigned long long money;
	printf("지불할 금액을 입력하세요(단, 최소 천원 단위)");
	scanf("%llu", &money);

	int fw = money / 50000;
	int mw = money % 50000 / 10000;
	int ftw = money % 10000 / 5000;
	int tw = money % 5000 / 1000;

	printf("%llu원은 50000원권 %d개, 10000원권 %d개, 5000원권 %d개, 1000원권 %d개 입니다.", money, fw, mw, ftw, tw);
	return 0; // 13
}