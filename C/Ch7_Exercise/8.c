#include <stdio.h>

// 8
int main() {
	float x = 5;
	double y = 3 * x * x * x + 2 * x * x + x + 5;

	while (x <= 10) {
		printf("x = %f일때, y = %lf입니다.\n",x,y);
		x += 0.5;
		y = 3 * x * x * x + 2 * x * x + x + 5;
	}

	return 0;

}