#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long money = 1000000;
	float a = 1.045;
	int b = 0;

	printf("��ġ�Ⱓ�� �Է����ּ���(��, ������ ��): ");
	scanf("%d", &b);
	unsigned long long sum = money * pow(a, b);

	printf("����� �� �ݾ��� %llu�� �Դϴ�.", sum);
	return 0; // 11
	
}