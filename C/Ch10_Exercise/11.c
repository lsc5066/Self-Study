#include <stdio.h>

// 11 
// power �Լ� ����
int power(int x, int y);

int main() {
	
	int x = 6, y = 0;

	for (y; y <= 10; y++) {

		printf("%d�� %d������ %d�Դϴ�.\n", x, y, power(x, y));

	}

	return 0;
}

// power �Լ� ����
int power(int x, int y) {

	if (y == 0) {
		return 1;
	}

	return x * power(x, y - 1);
}