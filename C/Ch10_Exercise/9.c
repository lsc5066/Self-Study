#include <stdio.h>

// 9
// sum �Լ� ����
int sum(int a);

int main() {
	// sum �Լ� ȣ��, ������ 20
	int total = sum(20);

	printf("1���� 20������ ���� %d�Դϴ�.\n", total);

	return 0;
}

// sum �Լ� ����
int sum(int a) {

	int total = 0;

	for (int i = 1; i <= a; i++) {
		total += i;
	}

	return total;
}