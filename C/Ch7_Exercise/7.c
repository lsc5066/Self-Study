#include <stdio.h>

// 7

int main() {
	int num; 

	printf("������ �ڸ��� �ش��ϴ� ���� �ݴ�� ����ϴ� ���α׷��Դϴ�.\n������ �Է����ּ��� : ");
	scanf("%d", &num);

	printf("���� ��� : ");
	do {
		printf("%d", num % 10);
		num /= 10;
	} while (num != 0);

	return 0;
}