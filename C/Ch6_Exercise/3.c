#include <stdio.h>

// 3��
int main() {
	float weight, height;

	printf("�����Կ� Ű�� �Է����ּ���(��, �����Դ� kg���� Ű�� m���� �Դϴ�.): ");
	scanf("%f %f", &weight, &height);

	float bmi = weight / (height * height);

	if (bmi < 18.5) {
		printf("��ü���Դϴ�.");
	}

	else if (bmi < 23) {
		printf("�����Դϴ�.");
	}

	else if (bmi < 25) {
		printf("��ü���Դϴ�.");
	}
	else if (bmi < 30) {
		printf("���Դϴ�.");
	}

	else if (bmi < 35) {
		printf("�����Դϴ�.");
	}

	else if (bmi >= 35) {
		printf("�ʰ����Դϴ�.");

	}

	return 0;
}