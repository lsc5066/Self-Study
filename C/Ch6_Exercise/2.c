#include <stdio.h>

// 2��
int main() {
	float a, b;
	int c;

	printf("�� �Ǽ� �Է�: ");
	scanf("%f %f", &a, &b);

	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</>: ");
	scanf("%d", &c);

	if (c == 1) {
		printf("%f + %f = %f\n", a, b, a + b);
	}
	
	else if (c == 2) {
		printf("%f - %f = %f\n", a, b, a - b);
	}

	else if (c == 3) {
		printf("%f * %f = %f\n", a, b, a * b);
	}

	else if (c == 4) {
		printf("%f / %f = %f\n", a, b, a / b);
	}

	else {
		printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.");
	}
	
	return 0;
}