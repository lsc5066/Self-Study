#include <stdio.h>

int main() {
	int a, b, c;
	printf("�� ���� �Է����ּ���: ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a > b ? a : b;
	max = c > max ? c : max;
	printf("���� ū ���� %d�Դϴ�.", max);
	return 0; // 8
}