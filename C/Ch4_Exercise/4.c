#include <stdio.h>

int main() {
	double f;
	printf("ȭ�� �µ��� �Է��ϼ���:\n ");
	scanf("%lf", &f);
	double c = 5.0 / 9.0 * (f - 32.0);
	printf("�����µ�: %.4lf", c);
	return 0; // 4
}