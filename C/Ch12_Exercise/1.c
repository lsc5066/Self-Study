#include <stdio.h>

// 1
// sum �Լ� ����
int sum(int n);

int main() {

	int n = 0;
	printf("1���� n������ ���� ���ϴ� ���α׷��Դϴ�.\n");
	printf("���� ���� n�� �Է����ּ��� : ");
	scanf_s("%d",&n,sizeof(int));
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum(n));
	
	return 0;
}

int sum(int n) {

	static int count = 0;
	count++;

	if (n == 1) {
		printf("����Լ��� �� ȣ�� Ƚ���� %d�Դϴ�.\n", count);
		return 1;
	}

	return n + sum(n - 1);
}
	

	