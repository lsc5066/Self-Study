#include <stdio.h>

// 5
int main() {
	int num = 17; // 임의로 정한 수
	int input; // 입력 받을 수

	printf("정답을 맞춰보세요: ");
	scanf("%d", &input); // 수 입력(정수)

	if (input == num) {
		printf("정답입니다 축하합니다!");

	}

	else if (input > num) {
		printf("입력한 수가 더 큰 수입니다!");

	}

	else {
		printf("입력한 수가 더 작은 수입니다!");
		
	}
	
	return 0;
}