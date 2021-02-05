#include <stdio.h>
#include <stdlib.h>

// 10
// toint �Լ� ����
int toint(const char* str);

int main() {

	char str[50];
	
	printf("������ �ϳ� �Է��ϼ��� : ");
	gets_s(str,sizeof(str));

	printf("\n<�Լ� atoi()�� �̿��� ����>\n");
	printf("���ڿ� %s -> ���� %d\n", str, atoi(str));
	
	// toint �Լ� ȣ��
	int num = toint(str);
	printf("\n<�Լ� toint()�� �̿��� ����>\n");
	printf("���ڿ� %s -> ���� %d\n", str, num);
	
	return 0;
}

// toint �Լ� ����
int toint(const char* str) {

	int num = 0, i = 0, sign = 0;

	// - ��ȣ�� �������� sign = -1, �� ���� ������ ����(���� ����)
	if (str[0] == '-') {
		
		sign = -1;
		i = 1;
	}

	// + ��ȣ�� �������� sign = 1, �� ���� ������ ����(���� ����)
	else if(str[0] == '+') {

		sign = 1;
		i = 1;
	}

	// ��ȣ�� �������� sign 1, �� ���� ������ ����(���� ����)
	else {

		sign = 1;
		i = 0;
	}

	while (str[i]!=0) {

		num = num * 10 + str[i] - '0';
		i++;
	}

	return num * sign;


}