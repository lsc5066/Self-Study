#include <stdio.h>
#define SIZE 5 // ��ũ�� ����

// 7
int main() {
	double a[] = {98.56,78.62,78.69,89.32,95.29}; // a[] ����
	double sum = 0, avg = 0; // int sum, avg �ʱ�ȭ

	// a[0]���� a[4]���� sum�� ����
	for (int i = 0; i < SIZE; i++) { 

		printf("a[%d] = %.2lf\n", i, a[i]);
		sum += a[i];
	} 

	avg = sum / SIZE; // ��� = ���� / ����
	printf("\na[]�� ������ %.2lf, ����� %.2lf�Դϴ�.\n", sum, avg); // ����, ��� ���

	return 0;

}