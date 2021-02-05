#include <stdio.h>
#include <string.h>

// 6
int main() {

	char str[50];
	printf("한 단어를 입력하세요 : ");
	scanf("%s", str);

	// strlen(const char* str)함수를 이용해 배열의 끝부터 문자를 역순으로 출력
	for (int i = strlen(str); i >= 0; i--) {
		printf("%c", str[i]);
	}

	return 0;
}
