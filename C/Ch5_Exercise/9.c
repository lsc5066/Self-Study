#include <stdio.h>

int main() {
	float height;
	float weight;
	printf("키를 입력해주세요: ");
	scanf("%f", &height);

	printf("몸무게를 입력해주세요: ");
	scanf("%f", &weight);

	char nor[] = "정상";
	char abn[] = "비정상";
	
	printf("당신은 %s입니다.", (weight <= (height - 100) * 0.9) ? nor : abn);
	return 0; // 9
}