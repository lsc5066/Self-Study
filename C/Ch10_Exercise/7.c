#include <stdio.h>
#include <math.h>
// 7
// comInt, simInt �Լ� ����
unsigned comInt(unsigned a, double r, int n);
unsigned simInt(unsigned a, double r, int n);

int main() {
	unsigned a = 0;
	double r = 0;
	int n = 0;
	int c = 0;

	printf("<���� ��� ���α׷�>\n\n");

	printf("����(��)�� �Է����ּ��� : ");
	scanf("%u",&a);

	printf("������(%%)�� �Է����ּ��� : ");
	scanf("%lf", &r);

	printf("�ñ�� �Ⱓ(��)�� �Է����ּ��� : ");
	scanf("%d", &n);

	printf("�ܸ��� [1], ������ [2]�� �Է����ּ��� : ");
	scanf("%d", &c);
	
	// simInt, comInt �Լ� ȣ��
	double simple = simInt(a, r, n);
	double compound = comInt(a, r, n);

	printf("---------------------------------------------------------------------------------------------------------------\n");

	if (c == 1) {
		printf("����(��) : %u, ������(%%) : %.2lf, �ñ� �Ⱓ(��) : %d, ���� ��� : �ܸ� // �Ѿ� : %u\n", a, r, n,simple);

	}

	else if (c == 2) {
		printf("����(��) : %u, ������(%%) : %.2lf, �ñ� �Ⱓ(��) : %d, ���� ��� : ���� // �Ѿ� : %u\n", a, r, n, compound);

	}

	else {
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
	}

	printf("---------------------------------------------------------------------------------------------------------------\n");

	return 0;
}

// comInt �Լ� ����
unsigned comInt(unsigned a, double r, int n) {
	
	unsigned compound = a * pow(1 + r, n);
	return compound;
}

// simInt �Լ� ����
unsigned simInt(unsigned a, double r, int n) {

	unsigned simple = a * (1 + r * n);
	return simple;
}