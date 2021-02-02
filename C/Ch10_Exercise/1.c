#include <stdio.h>

// 1
// inch 함수 선언
double inch(double num);

int main() {
	double num;

	printf("센티미터로 변환할 인치를 입력해주세요 : ");
	scanf("%lf", &num);
	
	// inch 함수 호출
	double change = inch(num);
	printf("%.2lfinch -> %.2lfcm", num, change);

	return 0;
	
}
// inch 함수 정의
double inch(double num) {

	double change = num * 2.54;

	return change;
}