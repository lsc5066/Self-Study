#include <stdio.h>
#define PI 3.14
int main() {
	double radius;
	printf("���� �������� �Է����ּ���: ");
	scanf("%lf", &radius);
	double v = 4 / 3 * PI * radius * radius * radius;
	double s = 4 * PI * radius * radius;
	
	printf("������: %lf, ����: %lf, ����: %lf", radius, v, s);
	return 0; // 5
}