#include <stdio.h>

int main() {
	int a, b;
	printf("ù ��° ������ �Է����ּ���: \n");
	scanf("%d", &a);
	printf("�� ��° ������ �Է����ּ���: \n");
	scanf("%d", &b);
	int sum = a + b;
	float avg = sum / 2;
	printf("�� ������ ���� %d, ����� %.2f�Դϴ�.", sum, avg);
	return 0; // 10
}