#include <stdio.h>
#define SIZE 20

// 8
int main() {
	int a[SIZE] = { NULL }; // �Է� �� ������ �迭
	int b[10] = { NULL }; // �� ���� ������ �迭
	int max = 0; // �ִ� �� ���� ������ ����

	// �迭�� ���� �ޱ�
	for (int i = 0; i < SIZE; i++) {

		printf("a[%d]�� �Է����ּ��� : ", i);
		scanf("%d", &a[i]);

		// 0�̻� 9������ ������ �Է����� �ʾ����� ����
		if (a[i] < 0 || a[i] >9) {

			printf("\na[%d]�� �߸��� ���� �Է��ϼ̽��ϴ�.\n", i);
			printf("0�̻� 9������ ������ �Է����ּ���.\n");

			return 0;
		}

		// ���������� �Է������� ���
		else {
			printf("a[%d] = %d\n\n", i, a[i]);
		}
	}

	// �Է¹��� ���� ���� ����
	for (int j = 0; j < SIZE; j++) {
			b[a[j]] += 1;
		}

	for (int k = 1; k < 10; k++) {

		// �ִ� �� �� max�� ����
		if (b[max] < b[k]) {
				max = k;
			}
		}

	// ������ ���� �� �� ���
	for (int h = 0; h < 10; h++) {
		printf("%d�� �� �� = %d\n", h, b[h]);

		}
	// �ִ� �� ���� �� Ƚ�� ���
	printf("���� ���� �Է� ���� ���� %d�̰� �󵵼��� %dȸ �Դϴ�.\n",max, b[max]);

	return 0;

	}

	

	
