#include <stdio.h>

// 3
// metricConversion �Լ� ����
double metricConversion(double c);

int main() {
	double c = 0;

	printf("<�����µ� -> ȭ���µ� ��ȯ ���α׷�>\n\n");

	for (c=0; c <= 100; c += 0.5) {

		// metricConversion �Լ� ȣ��
		double f = metricConversion(c);
		printf("%.2lf��C = %.2lf��F\n", c, f);
	}

	return 0;
}

// metricConversion �Լ� ����
double metricConversion(double c) {

	double f = (c * 1.8) + 32;

	return f;
}