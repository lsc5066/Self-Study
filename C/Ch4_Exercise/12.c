#include <stdio.h>

int main()
{
	double number1, number2;

	printf("�� �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &number1, &number2);

	printf("�� : %lf\n", (double)((long long)number1 + (long long)number2));
	printf("��� : %lf\n", (double)((long long)number1 + (long long)number2) / 2);

	return 0; // 12
}