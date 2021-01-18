#include <stdio.h>

int main() {
	double apartArea;
	printf("아파트 면적의 평을 입력해주세요: ");
	scanf("%lf", &apartArea);
	printf("본인의 아파트는 %lf제곱미터입니다.", apartArea * 3.305785);
	return 0; // 6
}