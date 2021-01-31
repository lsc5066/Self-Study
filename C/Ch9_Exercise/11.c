#include <stdio.h>
#define ROW 5
#define COLUMN 4

// 11
int main() {
	int c[ROW][COLUMN] = { 97,90,88,95,76,89,75,83,60,70,88,82,83,89,92,85,75,73,72,78 }; // C 프로그래밍 점수를 저장하는 2차원 배열
	int sum = 0, avg = 0; // 합, 평균 

	// c[i][j]의 값들을 sum으로 합친다
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 3; j++) {
			sum += c[i][j];
		}
	}
	
	avg = sum / ROW * COLUMN; // 평균 = 총합 / 전체 원소 수
	printf("c[%d][%d]의 총합은 %d, 평균은 %d입니다.\n", ROW, COLUMN, sum, avg);
}