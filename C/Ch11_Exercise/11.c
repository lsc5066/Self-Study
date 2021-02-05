#include <stdio.h>
#include <stdlib.h>

// 10
// toint �Լ� ����
int toint(const char* str);

int main(int argc, char *argv[]) {

	int sum = 0;
	printf("argc = %d\n", argc);

	// toint �Լ� ȣ��
	int num = toint(*argv);
	printf("\n<�Լ� toint()�� �̿��� ����>\n");
	for(int i=1; i<argc; i++) {

		printf("argv[%d] -> %s\n", i, argv[i]);
		sum += num;
	}

	printf("�� ������ ���� %d�Դϴ�.", sum);

	return 0;
}

// toint �Լ� ����
int toint(const char* str) {

	int num = 0, i = 1;

	while (str[i] != 0) {

		num = num * 1000 + str[i] - '0';
		i++;
	}

	return num;


}