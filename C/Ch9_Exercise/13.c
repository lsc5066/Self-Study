#include <stdio.h>
#define ROW 4
#define COLUMN 3

// 13
int main() {
	int a[ROW][COLUMN] = { 46,79,78,35,57,28,43,68,76,56,78,98 }; // ������ �迭 a[4][3]
	int b[ROW][COLUMN] = { 78,35,99,85,82,34,58,69,29,34,59,35 }; // ������ �迭 b[4][3]
	int sum = 0, diff = 0; // ��, ��

	// ���� ÷���� ��� ���� �����ϴ� ������ ��
	printf("<���� ÷���� ��� ���� �����ϴ� ������ ��>\n");
	for (int i = 0; i < ROW; i++) {
		
		for (int j = 0; j < COLUMN; j++) {

			sum = a[i][j] + b[i][j];
			printf("a[%d][%d] + b[%d][%d] = %d\n", i, j, i, j, sum);
		}
	}

	// ���� ÷���� ��� ���� �����ϴ� ������ ��
	printf("\n<���� ÷���� ��� ���� �����ϴ� ������ ��>\n");
	for (int k = 0; k < ROW; k++) {

		for (int l = 0; l < COLUMN; l++) {

			// ū ������ ���� �� ����
			if (a[k][l] > b[k][l]) {
				diff = a[k][l] - b[k][l];

			}

			else {
				diff = b[k][l] - a[k][l];

			}

			printf("|a[%d][%d] - b[%d][%d]| = %d\n", k, l, k, l, diff);

		}
	}

	return 0;
}