#include <stdio.h>

int main() {
	double length;

	printf("���̸� �Է��ϼ���(����: km)");
	scanf("%lf", &length);
	double mile = length * 0.621371;
	printf("%lf�� %lf�����Դϴ�.", length, mile);
	return 0;  // 7 

}