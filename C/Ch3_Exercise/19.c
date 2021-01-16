#include <stdio.h>

int main()
{
	int won = 1000000;
	const int dollar = 1120 * won;
	printf("100만원 -> %d달러\n", dollar); // 19
	return 0;
}