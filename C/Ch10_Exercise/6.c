#include <stdio.h>
#include <math.h>
#define PI 3.14

// 6
// area, circumference �Լ� ����
double area(double r);
double circumference(double r);

int main() {
	double r = 0;

	printf("���� ������ �ѷ��� ���� �������� �Է����ּ��� : ");
	scanf("%lf", &r);

	// area, circumference �Լ� ȣ��
	double ar = area(r);
	double cir = circumference(r);

	printf("�������� %.2lf�� ���� �ѷ� : %.2lf\n", r, cir);
	printf("�������� %.2lf�� ���� ���� : %.2lf\n", r, ar);

	return 0;
}

// area �Լ� ����
double area(double r) {
	double ar = pow(r, 2) * PI;
	return ar;
}

// circumference �Լ� ����
double circumference(double r) {
	double cir = 2 * PI * r;
	return cir;
}