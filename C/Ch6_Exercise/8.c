#include <stdio.h>

// 8 
int main() {
	float x, y; // 실수 정의

	printf("두 실수 x. y를 입력하세요(단, x(빈칸)y로 입력할 것): ");
	scanf("%f %f", &x, &y); // 두 실수 입력 <- x(빈칸)y

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