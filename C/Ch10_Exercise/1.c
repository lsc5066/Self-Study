#include <stdio.h>

// 1
// inch �Լ� ����
double inch(double num);

int main() {
	double num;

	printf("��Ƽ���ͷ� ��ȯ�� ��ġ�� �Է����ּ��� : ");
	scanf("%lf", &num);
	
	// inch �Լ� ȣ��
	double change = inch(num);
	printf("%.2lfinch -> %.2lfcm", num, change);

	return 0;
	
}
// inch �Լ� ����
double inch(double num) {

	double change = num * 2.54;

	return change;
}