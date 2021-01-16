#include <stdio.h>
#define PI 3.14
int main()
{
	double radius = 7.58;
	double area = 7.58 * 7.58 * PI;
	double circumference = 2 * PI * 7.58;
	printf("%f, %f, %f", radius, area, circumference); // 9
	return 0;
}