#include <stdio.h>
#define PI 3.141592

int main()
{	
	double radius;
	printf("���� ������: ", &radius);
	scanf("%lf",&radius);
	double circumference = 2 * radius * PI;
	double area = radius * radius * PI;
	printf("�� ������: %lf, �� �ѷ�: %lf, �� ����: %lf", radius, circumference, area); 
	return 0; // 3
	
}