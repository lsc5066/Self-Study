#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d\n\n", &a); // 4자리 정수 입력
	printf("%+10d\n", a);
	printf("%010d\n", a);
	printf("%0+10d\n", a);
	printf("%-10d\n", a); // 10진수

	printf("%+10o\n", a); 
	printf("%010o\n", a); // 8진수

	printf("%+10x\n", a);
	printf("%0+10x\n", a); // 16진수
	// 1
	return 0;
}