#include <stdio.h>

// 2번
int main() {
	float a, b;
	int c;

	printf("두 실수 입력: ");
	scanf("%f %f", &a, &b);

	printf("연산종류 번호선택 1<+>, 2<->, 3<*>, 4</>: ");
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
		printf("잘못된 숫자를 입력하셨습니다.");
	}
	
	return 0;
}