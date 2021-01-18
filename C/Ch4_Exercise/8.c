#include <stdio.h>

int main() {
	char a;
	printf("문자를 입력해주세요: ");
	scanf("%c", &a);
	printf("%c %o %d %x", a, a, a, a);
	return 0; // 8
}
