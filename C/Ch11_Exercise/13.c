#include <stdio.h>
#include <stdlib.h>

// 13
int main() {

	int count = 0;
	char str[10000] = { NULL };
	printf("문자열을 입력하세요 : ");
	while (fgets(str, 10000, stdin) != NULL);

	char* delimiter = " ,.\t!";
	char* word = strtok(str, delimiter);

	while (word != NULL) {

		if (word == "\n") {

			printf("<< %d줄에 입력한 단어(토큰) 출력 >>\n");
		}

		printf("strlen(%s) = %d", word, strlen(word));
		printf("\n");
		word = strtok(NULL, delimiter);
	}

	return 0;
	
	}






