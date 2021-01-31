#include <stdio.h>
#define SIZE 7

// 2
int main() {
	int data[] = { 3,21,35,57,24,82,8 };

	for (int i = 0; i < SIZE; i++) {
		printf("data[%d] = %d\n", i, *(data + i)+10);
	}

	return 0;
}