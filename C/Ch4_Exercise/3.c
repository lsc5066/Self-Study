#include <stdio.h>
#define PI 3.141592

int main()
{	
	double radius;
	printf("원의 반지름: ", &radius);
	scanf("%lf",&radius);
	double circumference = 2 * radius * PI;
	double area = radius * radius * PI;
	printf("원 반지름: %lf, 원 둘레: %lf, 원 면적: %lf", radius, circumference, area); 
	return 0; // 3
	
}