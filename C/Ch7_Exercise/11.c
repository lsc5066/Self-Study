#include <stdio.h>

// 11 
int main() {
	int num, i;
	printf("9 ������ ������ �Է����ּ��� : ");
	scanf("%d", &num);

	if (num < 1 || num>9) {
		printf("������ �ʰ��ϴ� ������ �Է��ϼ̽��ϴ�.\n");
		return 0;
	}

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}