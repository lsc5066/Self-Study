#include <stdio.h>

// 5
int main() {
	int num = 17; // ���Ƿ� ���� ��
	int input; // �Է� ���� ��

	printf("������ ���纸����: ");
	scanf("%d", &input); // �� �Է�(����)

	if (input == num) {
		printf("�����Դϴ� �����մϴ�!");

	}

	else if (input > num) {
		printf("�Է��� ���� �� ū ���Դϴ�!");

	}

	else {
		printf("�Է��� ���� �� ���� ���Դϴ�!");
		
	}
	
	return 0;
}