#include <stdio.h>
#define ROW 4
#define COLUMN 4

// 12
int main() {
	int a[ROW][COLUMN] = { 78,48,78,98,99,92,83,29,29,64,83,89,34,78,92,56 }; // 2���� �迭
	int sumColumn = 0, sumRow = 0, sum = 0; // ������ ��, ������ ��, ����

	// ������ �� ���
	printf("<���� ��>\n");
	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COLUMN; j++) {

			sumRow += a[i][j]; // ������ ��
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}

	// ������ �� ���
	printf("\n<���� ��>\n");
	for (int k = 0; k < ROW; k++) {

		for (int l = 0; l < COLUMN; l++) {

			sumColumn += a[k][l]; // ������ ��
			sum += a[k][l]; // ����
			printf("a[%d][%d] = %d\n", l, k, a[l][k]);
		}
	}

		printf("\n������ ���� %d, ������ ���� %d, ������ %d�Դϴ�.\n", sumRow, sumColumn, sum);
		return 0;
	
}