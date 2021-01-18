#include <stdio.h>

int main() {
	float x1 = 3.2;
	float y1 = 4.6;
	float x2 = -8.3;
	float y2 = -2.3;

	float midXpoint = (x1 + x2) / 2;
	float midYpoint = (y1 + y2) / 2;
	
	printf("%f, %f", midXpoint, midYpoint);
	return 0; // 12
}