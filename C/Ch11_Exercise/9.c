#include <stdio.h>
#include <string.h>

// 9
int main() {

	int count = 0;
	char str[100];
	printf("���ڿ��� �Է��ϼ��� : ");

	while (fgets(str, 100, stdin) != NULL) {

		for (int i = 0; i < strlen(str); i++) {

			if (ispunct(str[i])) {
				count++;
			}
		}

	}

	printf("�������� ������ %d�Դϴ�.", count);

	return 0;
	}


