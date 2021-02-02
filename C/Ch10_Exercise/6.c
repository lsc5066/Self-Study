#include <stdio.h>
#include <math.h>
#define PI 3.14

// 6
// area, circumference 함수 선언
double area(double r);
double circumference(double r);

int main() {
	double r = 0;

	printf("원의 면적과 둘레를 구할 반지름을 입력해주세요 : ");
	scanf("%lf", &r);

	// area, circumference 함수 호출
	double ar = area(r);
	double cir = circumference(r);

	printf("반지름이 %.2lf인 원의 둘레 : %.2lf\n", r, cir);
	printf("반지름이 %.2lf인 원의 넓이 : %.2lf\n", r, ar);

	return 0;
}

// area 함수 정의
double area(double r) {
	double ar = pow(r, 2) * PI;
	return ar;
}

// circumference 함수 정의
double circumference(double r) {
	double cir = 2 * PI * r;
	return cir;
}