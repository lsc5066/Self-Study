#include <stdio.h>
#include <string.h>

// 8
int main() {

	char str[100];
	printf("한 줄의 문자열을 입력해주세요 : ");
	gets_s(str, sizeof(str));

	// strtok 함수를 사용해 빈칸을 기준으로 문장 나누기
	char* word = strtok(str, " ");

	while (word != NULL) {

		int size = strlen(word) - 1;

		for (int i = 0; size >= 0; size--) {

			printf("%c", word[size]);
		}

		printf(" ");

		// 빈칸 이후의 빈칸을 기준으로 다시 문장 나누기
		word = strtok(NULL, " ");
	}

	return 0;
}
