#include <stdio.h>

// 9
// sum 함수 선언
int sum(int a);

int main() {
	// sum 함수 호출, 실인자 20
	int total = sum(20);

	printf("1부터 20까지의 합은 %d입니다.\n", total);

	return 0;
}

// sum 함수 정의
int sum(int a) {

	int total = 0;

	for (int i = 1; i <= a; i++) {
		total += i;
	}

	return total;
}