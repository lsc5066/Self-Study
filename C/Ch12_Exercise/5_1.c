#include <stdio.h>

int x;

void outfunc(void);

int main1() {

	printf("전역변수 : %d", x);
	outfunc();

	return 0;
}