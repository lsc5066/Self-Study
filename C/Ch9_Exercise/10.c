#include <stdio.h>
#define SIZE 10

// 10
int main() {
	double a[SIZE];
	
	// 배열에 해당값 저장
	for (int i = 0; i < SIZE; i++) {
		a[i] = 1.0 / ((i + 2.0) * (i + 3.0));

	}
	
	// a[] 원소 출력
	for (int j = 0; j < SIZE; j++) {
		printf("a[%d] = %.5lf\n", j, a[j]);
	}

	return 0;
}