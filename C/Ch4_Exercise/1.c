#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d\n\n", &a); // 4�ڸ� ���� �Է�
	printf("%+10d\n", a);
	printf("%010d\n", a);
	printf("%0+10d\n", a);
	printf("%-10d\n", a); // 10����

	printf("%+10o\n", a); 
	printf("%010o\n", a); // 8����

	printf("%+10x\n", a);
	printf("%0+10x\n", a); // 16����
	// 1
	return 0;
}