#include <stdio.h>
#define SIZE 5 // ��ũ�� ����

// 6
int main() {
	int a[] = { 4,7,9,3,6 }; // a[] ����
	int b[] = { 4,7,8,2,6 }; // b[] ����
	//int b[] = {3,2}; // �ڸ��� �ٸ� ver

	if (sizeof(a) != sizeof(b)) {
		printf("�迭ũ�Ⱑ �ٸ��ϴ�.\n");
		return 0;

	}

	// SIZE �������� ��
	for (int i = 0; i <= SIZE; i++) { 

		// ���� �ּҿ� ��ġ�� ���� ���� �ٸ��� �ȳ��� ��� �� ����
		if (a[i] != b[i]) { 
			printf("a[%d]�� b[%d]�� ��ġ���� �ʽ��ϴ�.\n", i, i);
			return 0;
		}

		// ���� �ּҿ� ��ġ�� ���� ���� ������ ������ �ش��ϴ� �� ���
		else { 
			printf("a[%d] = %d\n", i, a[i]);
			printf("b[%d] = %d\n", i, b[i]);
		}
	}

	return 0; // ���α׷� ����
}