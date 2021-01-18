#include <stdio.h>
int main() {
	double f1, f2, f3;
	printf("섭씨온도 3개를 띄어쓰기를 주의해서 입력해주세요: ");
	scanf("%lf %lf %lf", &f1, &f2, &f3);
	double c1 = (9.0 / 5.0) * f1 + 32.0;
	double c2 = (9.0 / 5.0) * f2 + 32.0;
	double c3 = (9.0 / 5.0) * f3 + 32.0;
	printf("화씨온도1: %.4lf 화씨온도2: %.4lf 화씨온도3: %.4lf", c1, c2, c3);
	return 0; // 5
}