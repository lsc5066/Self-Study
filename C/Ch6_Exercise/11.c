#include <stdio.h>

// 11
int main() {
	int year, month; // �⵵, �� ����(����)

	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year); // �⵵ �Է�

	printf("���� �Է��ϼ���: ");
	scanf("%d", &month); // �� �Է�

	switch (month) {

	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("%d�� %d���� %d�ϱ��� �����մϴ�.", year, month, 31);
		break;

	case 4:case 6:case 9:case 11:
		printf("%d�� %d���� %d�ϱ��� �����մϴ�.", year, month, 30);
		break;

	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("%d�� %d���� %d�ϱ��� �����մϴ�.", year, month, 29);

		}

		else {
			printf("%d�� %d���� %d�ϱ��� �����մϴ�.", year, month, 28);
		}

		break;

	default:
		printf("���� �߸� �Է��ϼ̽��ϴ�.");
		break;
	}
}