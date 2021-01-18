#include <stdio.h>

int main()
{ 
	char a = '/0/';
	a = getchar();
	putchar(a); putchar('\n');
	printf("%c\n", a);
	printf("%d, %o, %x",a,a,a);
	return 0; // 2

}