#include <stdio.h>

// 3
int main() {
	int i, input, sum = 0;
	
	printf("1���������� ���� ���ϰ� ���� ���� ������ �Է����ּ���: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		sum += i;
	}
	printf("1�������� %d������ ���� %d�Դϴ�.", input, sum);
	return 0;
	}