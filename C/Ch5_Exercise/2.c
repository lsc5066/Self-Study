#include <stdio.h>

int main() {
	double kg;
	printf("���Ը� �Է��ϼ���(��, ������ kg): ");
	scanf("%lf", &kg);

	double pound = kg / 0.453592;
	printf("%lfkg�� %.3lf�Ŀ�� �Դϴ�.", kg, pound);
	return 0; // 2

}