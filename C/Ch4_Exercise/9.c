#include <stdio.h>

int main() {
	double row;
	double column;

	printf("가로 세로 순서대로 입력해주세요: ");
	scanf("%lf %lf", &row, &column);
	double area = row * column / 2;
	printf("삼각형의 넓이는 %+12.3lf입니다.", area);
	printf("삼각형의 넓이는 %-12.3lf입니다.", area);
	return 0; // 9
}