#include <stdio.h>

// 3
// metricConversion 함수 선언
double metricConversion(double c);

int main() {
	double c = 0;

	printf("<섭씨온도 -> 화씨온도 변환 프로그램>\n\n");

	for (c=0; c <= 100; c += 0.5) {

		// metricConversion 함수 호출
		double f = metricConversion(c);
		printf("%.2lf°C = %.2lf°F\n", c, f);
	}

	return 0;
}

// metricConversion 함수 정의
double metricConversion(double c) {

	double f = (c * 1.8) + 32;

	return f;
}