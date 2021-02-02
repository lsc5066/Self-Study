#include <stdio.h>
#include <math.h>

// 5
// square, cube 함수 선언
double square(double a);
double cube(double a);

int main() {
	double a = 0;
	printf("다섯제곱을 구할 임의의 수를 입력해주세요 : ");
	scanf("%lf", &a);

	// square, cube 함수 호출
	double sq = square(a);
	double cb = cube(a);

	printf("%.5lf의 제곱 = %.5lf\n", a, sq);
	printf("%.5lf의 세제곱 = %.5lf\n", a, cb);
	printf("%.5lf의 다섯제곱 = %.5lf\n", a, sq * cb);

	return 0;
}

// square 함수 정의
double square(double a) {
	double sq = pow(a, 2);
	return sq;
}

// cube 함수 정의
double cube(double a) {
	double sq = square(a);
	double cb = sq * a;
	return cb;
}