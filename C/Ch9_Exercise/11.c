#include <stdio.h>
#define ROW 5
#define COLUMN 4

// 11
int main() {
	int c[ROW][COLUMN] = { 97,90,88,95,76,89,75,83,60,70,88,82,83,89,92,85,75,73,72,78 }; // C ���α׷��� ������ �����ϴ� 2���� �迭
	int sum = 0, avg = 0; // ��, ��� 

	// c[i][j]�� ������ sum���� ��ģ��
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 3; j++) {
			sum += c[i][j];
		}
	}
	
	avg = sum / ROW * COLUMN; // ��� = ���� / ��ü ���� ��
	printf("c[%d][%d]�� ������ %d, ����� %d�Դϴ�.\n", ROW, COLUMN, sum, avg);
}