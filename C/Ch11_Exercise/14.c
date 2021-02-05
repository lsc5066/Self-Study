#include <stdio.h>
#include <string.h>

// 14
int main() {

	char* unit[] = { "십","백","천" };
	char* number[] = { "일","이","삼","사","오","육","칠","팔","구" };
	char str[100];

	int a, b, length;
	int count = 0;

	printf("10000보다 작은 정수 하나를 입력하세요. ->");
	gets_s(str, sizeof(str));

	printf("입력한 정수는 [");

	length = strlen(str);
	b = (length - 1) / 4 - 1;
	a = (length % 4 == 0) ? 2 : length & 4 - 2;

	for (int i = 0; i < length; i++) {

		if (str[i] != '0') {

			printf("%s", number[str[i] - '0' - 1]);
			count++;
		}

		if (a < 0 && length >0)
		{
		}
		else if (str[i] != '0') {

			printf("%s", unit[a]);

			a--;
		}
		
	}
	printf("]입니다.\n");

	return 0;
}