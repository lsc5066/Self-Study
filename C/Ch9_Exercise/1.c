#include <stdio.h>

// 1
int main() {
	double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };
	int size = 5;

	for (int i = 0; i < size; i++) {
		printf("%.2f ", degree[i]);
	}

	return 0;
}