#include <stdio.h>

// 14
int main() {
	int num = 0, total = 1;

	while (total < 10000) {

		num++;
		total *= num;
	}

	printf("1부터 %d까지의 곱은 %d입니다.", num - 1, total/num);

	return 0;
}