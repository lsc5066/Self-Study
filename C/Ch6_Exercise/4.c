#include <stdio.h>

// 4번
int main() {
	int sex; // 성별
	float weight, height; // 몸무게, 키

	printf("해당하는 성별의 숫자를 입력해주세요: [1]남자 [2]여자");
	scanf("%d", &sex);

	if (sex < 1 || sex>2) {
		printf("잘못된 숫자를 입력하셨습니다.");
		return 0;
	}

	printf("본인의 몸무게와 키를 입력해주세요(단, 몸무게는 kg단위 키는 m단위입니다.): ");
	scanf("%f %f", &weight, &height); // 몸무게(공백)키 <- 입력

	if (sex == 1) { // 남성
		float maw = height * height * 22; // 남성 표준 체중
		float mobesity = (weight / maw) * 100; // 비만 지수

		if (mobesity >= 90 && mobesity <= 110) {
			printf("정상입니다.");

		}

		else if (mobesity > 110 && mobesity <= 120) {
			printf("체중 과다입니다.");

		}

		else if (mobesity > 120) {
			printf("비만입니다.");

		}

		else {
			printf("저체중입니다.");

		}


	}


	else if (sex == 2) { // 여성
		float waw = height * height * 21; // 여성 표준 체중
		float wobesity = (weight / waw) * 100; // 비만 지수

		if (wobesity >= 90 && wobesity <= 110) {
			printf("정상입니다.");

		}

		else if (wobesity > 110 && wobesity <= 120) {
			printf("체중 과다입니다.");

		}

		else if (wobesity > 120) {
			printf("비만입니다.");

		}

		else {
			printf("저체중입니다.");
		}

	}

	else {
		printf("숫자를 잘못 입력하셨습니다.");
		
	}

	return 0;
	
}