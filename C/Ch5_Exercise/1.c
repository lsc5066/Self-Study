#include <stdio.h>

int main() {
	int a, b;
	printf("ù ��° ������ �Է����ּ���: ");
	scanf("%d", &a);
	printf("�� ��° ������ �Է����ּ���: ");
	scanf("%d", &b);
	printf("���� %d, �������� %d�Դϴ�.", a > b ? a / b : b / a, a > b ? a % b : b % a);
	return 0; // 1
}