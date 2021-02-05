#include <stdio.h>
#include <stdlib.h>

// 10
// toint 함수 선언
int toint(const char* str);

int main(int argc, char *argv[]) {

	int sum = 0;
	printf("argc = %d\n", argc);

	// toint 함수 호출
	int num = toint(*argv);
	printf("\n<함수 toint()를 이용한 정수>\n");
	for(int i=1; i<argc; i++) {

		printf("argv[%d] -> %s\n", i, argv[i]);
		sum += num;
	}

	printf("두 정수의 합은 %d입니다.", sum);

	return 0;
}

// toint 함수 정의
int toint(const char* str) {

	int num = 0, i = 1;

	while (str[i] != 0) {

		num = num * 1000 + str[i] - '0';
		i++;
	}

	return num;


}