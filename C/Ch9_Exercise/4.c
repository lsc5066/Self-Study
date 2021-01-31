#include <stdio.h>
#define ROW 3
#define COL 4

// 4
int main() {
	int A[ROW][COL] = { 12,30,82,52,43,51,32,47,30,42,41,69 };

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			A[i][j] = A[i][j] * 10 + 2; // 해당하는 위치에 원래값 * 10 + 2
			printf("A[%d][%d] = %d\n", i, j, A[i][j]); // 각각의 주소에 해당하는 값 출력
		}
	}


	return 0;
}