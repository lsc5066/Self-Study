#include <stdio.h>

// 13
int main() {
	int num = 0, total = 0;

	while (total<10000) {

		num++;
		total += num;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", num - 1, total - num);

	return 0;
}