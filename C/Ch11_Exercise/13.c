#include <stdio.h>
#include <stdlib.h>

// 13
int main() {

	int count = 0;
	char str[10000] = { NULL };
	printf("���ڿ��� �Է��ϼ��� : ");
	while (fgets(str, 10000, stdin) != NULL);

	char* delimiter = " ,.\t!";
	char* word = strtok(str, delimiter);

	while (word != NULL) {

		if (word == "\n") {

			printf("<< %d�ٿ� �Է��� �ܾ�(��ū) ��� >>\n");
		}

		printf("strlen(%s) = %d", word, strlen(word));
		printf("\n");
		word = strtok(NULL, delimiter);
	}

	return 0;
	
	}






