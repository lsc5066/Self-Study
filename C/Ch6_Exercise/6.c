#include <stdio.h>

// 6 
int main() {
	unsigned long long money; // ���ռҵ�
	
	printf("���ռҵ��� �Է��ϼ���(��, ����θ� �Է��� ��)");
	scanf("%llu", &money); // ���ռҵ� �Է�


	if (money > 300000000) {
		printf("������ %d%%�Դϴ�.", 38);

	}

	else if (money > 88000000 && money <= 300000000) {
		printf("������ %d%%�Դϴ�.", 35);

	}

	else if (money > 46000000 && money <= 88000000) {
		printf("������ %d%%�Դϴ�.", 24);

	}

	else if (money > 12000000 && money <= 46000000) {
		printf("������ %d%%�Դϴ�.", 15);

	}

	else if (money > 0 && money <= 12000000) {
		printf("������ %d%%�Դϴ�.", 6);

	}

	else {
		printf("���ռҵ��� �߸� �Է��ϼ̽��ϴ�.");

	}

	return 0;

	
}