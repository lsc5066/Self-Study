#include <stdio.h>

void copyarray(int from[], int to[], int n/*�迭 ���� ��*/);

int main() {

	int c = 0;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0 };

	printf("�����ϰ� ���� ������ ����(n-1)�� �Է����ּ��� : ");
	
	scanf("%d", &c);
	printf("\n");

	if (c < 0 || c>12) {
		printf("������ �ʰ��ϼ̽��ϴ�.\n");

		return 0;
	}

	copyarray(a, b, c);

	
	printf("a[]���� b[]�� ���� ���簡 �Ϸ�Ǿ����ϴ�.\n\n");

	for (int i = 0; i < c - 1; i++) {
		printf("b[%d] = %d\n", i, i, b[i]);
	}

	return 0;

}

void copyarray(int from[], int to[], int n/*�迭 ���� ��*/) {
	
	for (int i = 0; i < n - 1; i++) {

		to[i] = from[i];
	}

	return;
}