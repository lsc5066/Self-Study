#include <stdio.h>
int main() {
	double f1, f2, f3;
	printf("�����µ� 3���� ���⸦ �����ؼ� �Է����ּ���: ");
	scanf("%lf %lf %lf", &f1, &f2, &f3);
	double c1 = (9.0 / 5.0) * f1 + 32.0;
	double c2 = (9.0 / 5.0) * f2 + 32.0;
	double c3 = (9.0 / 5.0) * f3 + 32.0;
	printf("ȭ���µ�1: %.4lf ȭ���µ�2: %.4lf ȭ���µ�3: %.4lf", c1, c2, c3);
	return 0; // 5
}