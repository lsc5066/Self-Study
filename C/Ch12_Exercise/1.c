#include <stdio.h>

// 1
// sum 함수 선언
int sum(int n);

int main() {

	int n = 0;
	printf("1부터 n까지의 합을 구하는 프로그램입니다.\n");
	printf("양의 정수 n을 입력해주세요 : ");
	scanf_s("%d",&n,sizeof(int));
	printf("1부터 %d까지의 합은 %d입니다.", n, sum(n));
	
	return 0;
}

int sum(int n) {

	static int count = 0;
	count++;

	if (n == 1) {
		printf("재귀함수의 총 호출 횟수는 %d입니다.\n", count);
		return 1;
	}

	return n + sum(n - 1);
}
	

	