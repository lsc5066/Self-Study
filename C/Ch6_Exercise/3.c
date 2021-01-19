#include <stdio.h>

// 3번
int main() {
	float weight, height;

	printf("몸무게와 키를 입력해주세요(단, 몸무게는 kg단위 키는 m단위 입니다.): ");
	scanf("%f %f", &weight, &height);

	float bmi = weight / (height * height);

	if (bmi < 18.5) {
		printf("저체중입니다.");
	}

	else if (bmi < 23) {
		printf("정상입니다.");
	}

	else if (bmi < 25) {
		printf("과체중입니다.");
	}
	else if (bmi < 30) {
		printf("비만입니다.");
	}

	else if (bmi < 35) {
		printf("고도비만입니다.");
	}

	else if (bmi >= 35) {
		printf("초고도비만입니다.");

	}

	return 0;
}