#include <stdio.h>

// 8 
int main() {
	float x, y; // �Ǽ� ����

	printf("�� �Ǽ� x. y�� �Է��ϼ���(��, x(��ĭ)y�� �Է��� ��): ");
	scanf("%f %f", &x, &y); // �� �Ǽ� �Է� <- x(��ĭ)y

	if (x > 0 && y > 0) {
		printf(" %f + %f = %f", x, y, x + y);

	}

	else if (x > 0 && y <= 0) {
		printf(" %f + %f = %f", x, y, x + y);

	}

	else if (x <= 0 && y > 0) {
		printf(" -%f + %f = %f", x, y, x + y);

	}

	else {
		printf(" -%f + %f = %f", x, y, x + y);
	}

	return 0;

}