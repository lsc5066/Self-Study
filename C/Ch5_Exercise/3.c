#include <stdio.h>

int main() {
	double cm;
	printf("���̸� �Է��ϼ���(��, ������ cm): ");
	scanf("%lf", &cm);

	double feet = cm / 30.48;
	printf("%.3lfcm�� %.3lf��Ʈ�Դϴ�.", cm, feet);
	return 0; // 3
}