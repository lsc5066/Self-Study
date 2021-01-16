#include <stdio.h>

int main()
{
	printf("%d %d %d\n", 1, 01, 0x1);
	printf("%d %d %d\n", 2, 02, 0x2);
	printf("%d %d %d\n", 3, 03, 0x3);
	printf("%d %d %d\n", 4, 04, 0x4);
	printf("%d %d %d\n", 5, 05, 0x5);
	printf("%d %d %d\n", 6, 06, 0x6);
	printf("%d %d %d\n", 7, 07, 0x7);
	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xA); //8
	return 0;
}