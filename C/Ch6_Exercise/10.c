#include <stdio.h>

// 10
int main() {
	int year;

	printf("���� ���θ� �˰���� �⵵�� �Է��ϼ���: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d���� �����Դϴ�.",year);

	}

	else {
		printf("%d���� ����Դϴ�.",year);
	}

	return 0;

}
