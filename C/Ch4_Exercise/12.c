#include <stdio.h>

int main()
{
	double number1, number2;

	printf("두 실수를 입력하세요 : ");
	scanf("%lf %lf", &number1, &number2);

	printf("합 : %lf\n", (double)((long long)number1 + (long long)number2));
	printf("평균 : %lf\n", (double)((long long)number1 + (long long)number2) / 2);

	return 0; // 12
}