#include <stdio.h>

// 6 
int main() {
	unsigned long long money; // 종합소득
	
	printf("종합소득을 입력하세요(단, 양수로만 입력할 것)");
	scanf("%llu", &money); // 종합소득 입력


	if (money > 300000000) {
		printf("세율은 %d%%입니다.", 38);

	}

	else if (money > 88000000 && money <= 300000000) {
		printf("세율은 %d%%입니다.", 35);

	}

	else if (money > 46000000 && money <= 88000000) {
		printf("세율은 %d%%입니다.", 24);

	}

	else if (money > 12000000 && money <= 46000000) {
		printf("세율은 %d%%입니다.", 15);

	}

	else if (money > 0 && money <= 12000000) {
		printf("세율은 %d%%입니다.", 6);

	}

	else {
		printf("종합소득을 잘못 입력하셨습니다.");

	}

	return 0;

	
}