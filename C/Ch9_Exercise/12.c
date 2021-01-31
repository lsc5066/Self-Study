#include <stdio.h>
#define ROW 4
#define COLUMN 4

// 12
int main() {
	int a[ROW][COLUMN] = { 78,48,78,98,99,92,83,29,29,64,83,89,34,78,92,56 }; // 2차원 배열
	int sumColumn = 0, sumRow = 0, sum = 0; // 가로의 합, 세로의 합, 총합

	// 가로의 합 계산
	printf("<가로 합>\n");
	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COLUMN; j++) {

			sumRow += a[i][j]; // 가로의 합
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}

	// 세로의 합 계산
	printf("\n<세로 합>\n");
	for (int k = 0; k < ROW; k++) {

		for (int l = 0; l < COLUMN; l++) {

			sumColumn += a[k][l]; // 세로의 합
			sum += a[k][l]; // 총합
			printf("a[%d][%d] = %d\n", l, k, a[l][k]);
		}
	}

		printf("\n가로의 합은 %d, 세로의 합은 %d, 총합은 %d입니다.\n", sumRow, sumColumn, sum);
		return 0;
	
}