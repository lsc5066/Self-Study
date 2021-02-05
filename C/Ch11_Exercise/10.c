#include <stdio.h>
#include <stdlib.h>

// 10
// toint 함수 선언
int toint(const char* str);

int main() {

	char str[50];
	
	printf("정수를 하나 입력하세요 : ");
	gets_s(str,sizeof(str));

	printf("\n<함수 atoi()를 이용한 정수>\n");
	printf("문자열 %s -> 정수 %d\n", str, atoi(str));
	
	// toint 함수 호출
	int num = toint(str);
	printf("\n<함수 toint()를 이용한 정수>\n");
	printf("문자열 %s -> 정수 %d\n", str, num);
	
	return 0;
}

// toint 함수 정의
int toint(const char* str) {

	int num = 0, i = 0, sign = 0;

	// - 부호가 있을때는 sign = -1, 그 다음 수부터 시작(음의 정수)
	if (str[0] == '-') {
		
		sign = -1;
		i = 1;
	}

	// + 부호가 있을때는 sign = 1, 그 다음 수부터 시작(양의 정수)
	else if(str[0] == '+') {

		sign = 1;
		i = 1;
	}

	// 부호가 없을때는 sign 1, 그 다음 수부터 시작(양의 정수)
	else {

		sign = 1;
		i = 0;
	}

	while (str[i]!=0) {

		num = num * 10 + str[i] - '0';
		i++;
	}

	return num * sign;


}