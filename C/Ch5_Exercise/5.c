#include <stdio.h>
#define PI 3.14
int main() {
	double radius;
	printf("원의 반지름을 입력해주세요: ");
	scanf("%lf", &radius);
	double v = 4 / 3 * PI * radius * radius * radius;
	double s = 4 * PI * radius * radius;
	
	printf("반지름: %lf, 부피: %lf, 넓이: %lf", radius, v, s);
	return 0; // 5
}