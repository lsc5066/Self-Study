#include <stdio.h>

// 4��
int main() {
	int sex; // ����
	float weight, height; // ������, Ű

	printf("�ش��ϴ� ������ ���ڸ� �Է����ּ���: [1]���� [2]����");
	scanf("%d", &sex);

	if (sex < 1 || sex>2) {
		printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.");
		return 0;
	}

	printf("������ �����Կ� Ű�� �Է����ּ���(��, �����Դ� kg���� Ű�� m�����Դϴ�.): ");
	scanf("%f %f", &weight, &height); // ������(����)Ű <- �Է�

	if (sex == 1) { // ����
		float maw = height * height * 22; // ���� ǥ�� ü��
		float mobesity = (weight / maw) * 100; // �� ����

		if (mobesity >= 90 && mobesity <= 110) {
			printf("�����Դϴ�.");

		}

		else if (mobesity > 110 && mobesity <= 120) {
			printf("ü�� �����Դϴ�.");

		}

		else if (mobesity > 120) {
			printf("���Դϴ�.");

		}

		else {
			printf("��ü���Դϴ�.");

		}


	}


	else if (sex == 2) { // ����
		float waw = height * height * 21; // ���� ǥ�� ü��
		float wobesity = (weight / waw) * 100; // �� ����

		if (wobesity >= 90 && wobesity <= 110) {
			printf("�����Դϴ�.");

		}

		else if (wobesity > 110 && wobesity <= 120) {
			printf("ü�� �����Դϴ�.");

		}

		else if (wobesity > 120) {
			printf("���Դϴ�.");

		}

		else {
			printf("��ü���Դϴ�.");
		}

	}

	else {
		printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.");
		
	}

	return 0;
	
}