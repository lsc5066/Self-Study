#include <stdio.h>

// 9
int main() {
	int month; // �� ����(����)

	printf("��(month)�� �Է����ּ���: ");
	scanf("%d", &month); // �� �Է�

	switch (month) {

	case 1:case 2:case 3:
		printf("%d���� %d��б��Դϴ�.", month, 1);
		break;

	case 4:case 5:case 6:
		printf("%d���� %d��б��Դϴ�.", month, 2);
		break;

	case 7:case 8:case 9:
		printf("%d���� %d��б��Դϴ�.", month, 3);
		break;

	case 10:case 11:case 12:
		printf("%d���� %d��б��Դϴ�.", month, 4);
		break;

	default:
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.");
		break;

	}
}