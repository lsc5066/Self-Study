#include <stdio.h>

int main() {
	float height;
	float weight;
	printf("Ű�� �Է����ּ���: ");
	scanf("%f", &height);

	printf("�����Ը� �Է����ּ���: ");
	scanf("%f", &weight);

	char nor[] = "����";
	char abn[] = "������";
	
	printf("����� %s�Դϴ�.", (weight <= (height - 100) * 0.9) ? nor : abn);
	return 0; // 9
}