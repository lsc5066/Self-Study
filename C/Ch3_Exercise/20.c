#include <stdio.h>

int main()
{
	unsigned int disMs = 117900000;
	unsigned int disUs = 2871000000;
	unsigned int disMu = disMs + disUs;
	printf("ȭ���� õ�ռ� ���� �Ÿ�: %u\n", disMu); // 20
	return 0;
}