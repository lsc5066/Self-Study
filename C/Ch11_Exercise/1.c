#include <stdio.h>
#include <string.h>

// 1
// mystrlen �Լ� ����
int mystrlen(const char* p);

int main() {

	char input[100];

	// mystrlen �Լ� ȣ��
	int count = mystrlen(input);
	gets(input);

	printf("mystrlen() : %d, strlen() : %d", mystrlen(input), strlen(input));

	return 0;
}

// mystrlen �Լ� ����
int mystrlen(const char* p) {

	int count;

	for (count = 0; p[count]!='\0'; count++);
	return count;
}