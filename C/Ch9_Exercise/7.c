#include <stdio.h>
#define SIZE 5 // 매크로 정의

// 7
int main() {
	double a[] = {98.56,78.62,78.69,89.32,95.29}; // a[] 정의
	double sum = 0, avg = 0; // int sum, avg 초기화

	// a[0]부터 a[4]까지 sum에 저장
	for (int i = 0; i < SIZE; i++) { 

		printf("a[%d] = %.2lf\n", i, a[i]);
		sum += a[i];
	} 

	avg = sum / SIZE; // 평균 = 총합 / 개수
	printf("\na[]의 총합은 %.2lf, 평균은 %.2lf입니다.\n", sum, avg); // 총합, 평균 출력

	return 0;

}