#include <stdio.h>

// 4
// calculator �Լ� ����
int calculator(int a, int b, int c);

int main() {
	int a, b, c;

	printf("ù ��° ������ �Է����ּ��� : ");
	scanf("%d", &a);

	printf("�� ��° ������ �Է����ּ��� : ");
	scanf("%d", &b);

	printf("�� ��° ������ �Է����ּ��� : ");
	scanf("%d", &c);

	// calculator �Լ� ȣ��
	int max = calculator(a, b, c);
	printf("%d, %d, %d �� ���� ū ���� %d�Դϴ�.", a, b, c, max);

	return 0;
}

// calculator �Լ� ����
int calculator(int a, int b, int c) {

	int max = 0;

	if (a >= b && a >= c) {
		max = a;

	}

	else if (b >= a && b >= c) {
		max = b;

	}

	else if (c >= a && c >= b) {
		max = c;

	}


	return max;
}