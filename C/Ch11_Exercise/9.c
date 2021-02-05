#include <stdio.h>
#include <string.h>

// 9
int main() {

	int count = 0;
	char str[100];
	printf("문자열을 입력하세요 : ");

	while (fgets(str, 100, stdin) != NULL) {

		for (int i = 0; i < strlen(str); i++) {

			if (ispunct(str[i])) {
				count++;
			}
		}

	}

	printf("구두점의 개수는 %d입니다.", count);

	return 0;
	}


