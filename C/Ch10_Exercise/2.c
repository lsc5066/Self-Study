#include <stdio.h>

// 2
// intpow �Լ� ����
int intpow(int m, int n);

int main() {

	int m, n;

	printf("ù ��° ������ �Է����ּ��� : ");
	scanf("%d", &m);

	printf("�� ��° ������ �Է����ּ��� : ");
	scanf("%d", &n);

	// intpow �Լ� ȣ��
	int mul = intpow(m, n);
	printf("%d * %d = %d", m, n, mul);

	return 0;
}

// intpow �Լ� ����
int intpow(int m, int n) {
	int mul = m * n;

	return mul;
}