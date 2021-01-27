#include <stdio.h>

// 3
int main() {
	int i, input, sum = 0;
	
	printf("1에서부터의 합을 구하고 싶은 양의 정수를 입력해주세요: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		sum += i;
	}
	printf("1에서부터 %d까지의 합은 %d입니다.", input, sum);
	return 0;
	}