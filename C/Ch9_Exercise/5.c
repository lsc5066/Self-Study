#include <stdio.h>
#define NUM 6

// 5
int main() {
	int a[] = { 4,7,9,3,6 }; // a[] ����
	int b[] = { 10,20,30,40,50,60 }; // b[] ����

	int n = 0; // n �ʱ�ȭ
	
	printf("a �迭���� b �迭�� ������ Index�� �Է����ּ��� : ");
	scanf("%d", &n);

	// Index ���� ������ 0���� 4����
	if (n < 0 || n >4) { 
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
		printf("0�̻� 4������ ���� �Է����ּ���.\n");
		return 0;
	}

	// �ش��ϴ� ��ġ���� a[] -> b[] ����
	for (int i = 0; i <= n; i++) { 
		b[i] = a[i];
	}

	// b[] ���
	for (int j = 0; j < NUM; j++) { 
		printf("b[%d] = %d\n", j, b[j]);
	}

	return 0;
}