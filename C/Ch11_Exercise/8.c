#include <stdio.h>
#include <string.h>

// 8
int main() {

	char str[100];
	printf("�� ���� ���ڿ��� �Է����ּ��� : ");
	gets_s(str, sizeof(str));

	// strtok �Լ��� ����� ��ĭ�� �������� ���� ������
	char* word = strtok(str, " ");

	while (word != NULL) {

		int size = strlen(word) - 1;

		for (int i = 0; size >= 0; size--) {

			printf("%c", word[size]);
		}

		printf(" ");

		// ��ĭ ������ ��ĭ�� �������� �ٽ� ���� ������
		word = strtok(NULL, " ");
	}

	return 0;
}
