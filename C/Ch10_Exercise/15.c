#include <stdio.h>
#define SIZE1 4
#define SIZE2 4

// 15
// isequalarray �Լ� ����
int isequalarray(int a[], int b[], int n1, int n2);

int main() {

	// ������ �迭�� ũ��, ���� ����(�����Ӱ� ���� ����)
	int n1 = SIZE1, n2 = SIZE2;
	int a[SIZE1] = { 1,2,3,4};
	int b[SIZE2] = { 1,2,3,4};

	// isequalarray �Լ� ȣ��
	isequalarray(a, b, n1, n2);

	// isequalarray �Լ� ���� result ���� ȣ��
	int result = isequalarray(a, b, n1, n2);

	printf("a[]�� b[]�� ���ϴ� ���α׷�\n\n");

	// result �� Ȯ��
	if(result==0) {
		printf("�� �迭�� ��ġ���� �ʽ��ϴ�");
	}

	else {
		printf("�� �迭�� ��ġ�մϴ�.");
	}

}

// isequalarray �Լ� ����
int isequalarray(int a[], int b[], int n1, int n2) {

	int result = 0;

	// �迭 ũ�� �ٸ��� return result = 0
	if (n1 != n2) {
		return result = 0;
	}

	// �迭 ũ�� ������ ���� �� ��
	else {
		for (int i = 0; i < n1; i++) {

			// ���� �� �ٸ��� return result = 0 
			if (a[i] != b[i]) {

				return result = 0;
			}
			
			// ���� �� �ٸ��� result = 1 �ϰ� ��� ��
			else {

				result = 1;
				continue;
			}
		}
	}
}