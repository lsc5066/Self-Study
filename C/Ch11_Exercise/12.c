#include <stdio.h>
#include <string.h>

// 12
int main() {

	char str[100];

	printf("���ڿ��� �Է����ּ��� : ");
	gets_s(str, sizeof(str));

	// ��ĭ�� �������� ������ ����
	char* word = strtok(str, " ");

	printf("\n�빮�ڿ� �ҹ��ڸ� ���� �ݴ�� ��ȯ�մϴ�.\n");

	// ������ ���������� �ݺ�
	while (word != NULL) {

		for (int i = 0; i < strlen(word); i++) {

			// �빮���Ͻ� �ҹ��ڷ� ���
			if (str[i] >= 'A' && str[i] <= 'Z') {

				printf("%c", tolower(word[i]));
			}

			// �ҹ����Ͻ� �빮�ڷ� ���
			else if (str[i] >= 'a' && str[i] <= 'z') {

				printf("%c", toupper(word[i]));
			}

	
		}

		printf(" ");

		// �ٽ� ��ĭ�� ã�Ƽ� ���� ����
		word = strtok(NULL, " ");
	}

	return 0;
}