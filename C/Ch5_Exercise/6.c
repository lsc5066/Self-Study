#include <stdio.h>

int main() {
	unsigned long long num;
	printf("õ�� ������ ���� �Է����ּ���: ");
	scanf("%llu", &num);
	
	int mw = num / 10000;
	int cw = num % 10000 / 1000;
	int bw = num % 1000 / 100;
	int sw = num % 100 / 10;
	int iw = num % 10;

	printf("%llu�� %d�� %dõ %d�� %d�� %d�Դϴ�.", num, mw, cw, bw, sw, iw);
	return 0; // 6
}