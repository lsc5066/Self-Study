#include <stdio.h>

// 7
int main() {
	char ch = '\0';

	printf("문자를 하나 입력해주세요 : ");
	scanf("%c", &ch);

	printf("문자 %c -> 아스키 코드값 %d", ch, ch);

	return 0;
}

