#include <stdio.h>
#include <math.h>

// 5
// square, cube �Լ� ����
double square(double a);
double cube(double a);

int main() {
	double a = 0;
	printf("�ټ������� ���� ������ ���� �Է����ּ��� : ");
	scanf("%lf", &a);

	// square, cube �Լ� ȣ��
	double sq = square(a);
	double cb = cube(a);

	printf("%.5lf�� ���� = %.5lf\n", a, sq);
	printf("%.5lf�� ������ = %.5lf\n", a, cb);
	printf("%.5lf�� �ټ����� = %.5lf\n", a, sq * cb);

	return 0;
}

// square �Լ� ����
double square(double a) {
	double sq = pow(a, 2);
	return sq;
}

// cube �Լ� ����
double cube(double a) {
	double sq = square(a);
	double cb = sq * a;
	return cb;
}