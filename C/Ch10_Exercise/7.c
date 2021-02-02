#include <stdio.h>
#include <math.h>
// 7
// comInt, simInt 함수 선언
unsigned comInt(unsigned a, double r, int n);
unsigned simInt(unsigned a, double r, int n);

int main() {
	unsigned a = 0;
	double r = 0;
	int n = 0;
	int c = 0;

	printf("<이자 계산 프로그램>\n\n");

	printf("원금(원)을 입럭해주세요 : ");
	scanf("%u",&a);

	printf("이자율(%%)을 입력해주세요 : ");
	scanf("%lf", &r);

	printf("맡기실 기간(년)을 입력해주세요 : ");
	scanf("%d", &n);

	printf("단리면 [1], 복리면 [2]를 입력해주세요 : ");
	scanf("%d", &c);
	
	// simInt, comInt 함수 호출
	double simple = simInt(a, r, n);
	double compound = comInt(a, r, n);

	printf("---------------------------------------------------------------------------------------------------------------\n");

	if (c == 1) {
		printf("원금(원) : %u, 이자율(%%) : %.2lf, 맡긴 기간(년) : %d, 이자 방식 : 단리 // 총액 : %u\n", a, r, n,simple);

	}

	else if (c == 2) {
		printf("원금(원) : %u, 이자율(%%) : %.2lf, 맡긴 기간(년) : %d, 이자 방식 : 복리 // 총액 : %u\n", a, r, n, compound);

	}

	else {
		printf("잘못된 수를 입력하셨습니다.");
	}

	printf("---------------------------------------------------------------------------------------------------------------\n");

	return 0;
}

// comInt 함수 정의
unsigned comInt(unsigned a, double r, int n) {
	
	unsigned compound = a * pow(1 + r, n);
	return compound;
}

// simInt 함수 정의
unsigned simInt(unsigned a, double r, int n) {

	unsigned simple = a * (1 + r * n);
	return simple;
}