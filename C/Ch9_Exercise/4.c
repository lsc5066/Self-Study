#include <stdio.h>
#define ROW 3
#define COL 4

// 4
int main() {
	int A[ROW][COL] = { 12,30,82,52,43,51,32,47,30,42,41,69 };

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			A[i][j] = A[i][j] * 10 + 2; // �ش��ϴ� ��ġ�� ������ * 10 + 2
			printf("A[%d][%d] = %d\n", i, j, A[i][j]); // ������ �ּҿ� �ش��ϴ� �� ���
		}
	}


	return 0;
}