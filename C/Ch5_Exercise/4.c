#include <stdio.h>
#define PI 3.14
int main() {
	float radius = 7.58;
	double v = 4 / 3 * PI * radius * radius * radius;
	double s = 4 * PI * radius * radius;
	
	printf("������: %f, ����: %lf, ����: %lf", radius, v, s);
	return 0; // 4
}