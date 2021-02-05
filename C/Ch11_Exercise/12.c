#include <stdio.h>
#include <string.h>

// 12
int main() {

	char str[100];

	printf("문자열을 입력해주세요 : ");
	gets_s(str, sizeof(str));

	// 빈칸을 기준으로 문장을 구분
	char* word = strtok(str, " ");

	printf("\n대문자와 소문자를 각각 반대로 변환합니다.\n");

	// 문장이 끝날때까지 반복
	while (word != NULL) {

		for (int i = 0; i < strlen(word); i++) {

			// 대문자일시 소문자로 출력
			if (str[i] >= 'A' && str[i] <= 'Z') {

				printf("%c", tolower(word[i]));
			}

			// 소문자일시 대문자로 출력
			else if (str[i] >= 'a' && str[i] <= 'z') {

				printf("%c", toupper(word[i]));
			}

	
		}

		printf(" ");

		// 다시 빈칸을 찾아서 문장 구분
		word = strtok(NULL, " ");
	}

	return 0;
}