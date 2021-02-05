#include <stdio.h>
#include <string.h>

// 5
// delchar 함수 선언
void delchar(char str[], const char ch);

int main() {

	char str[20];
	char ch='\0';

	printf("문자열을 입력해주세요 : ");
	gets_s(str,sizeof(str));

	printf("\n제거할 문자를 입력해주세요 : ");
	scanf("%c",&ch);

	// delchar 함수 호출
	delchar(str, ch);

	return 0;
}

// delchar 함수 정의
void delchar(char str[], const char ch) {

	int count = 0;

	while (str[count] != '\0') {

		if (str[count] == ch) {

			for (int i = count; str[i] != '\0'; i++) {

				str[i] = str[i + 1];
			}
		}

		count++;
	}

	printf("%s", str);

	return;
}
