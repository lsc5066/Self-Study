#include <stdio.h>

int main() {
	int month;
	printf("���� �Է����ּ���: ");
	scanf("%d", &month);

	char a[] = "��ݱ�";
	char b[] = "�Ϲݱ�";
	printf("%d���� %s�Դϴ�.", month, month <= 6 ? a : b);
	return 0; // 7
}