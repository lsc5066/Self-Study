#include <stdio.h>
#include <string.h>

// 5
// delchar �Լ� ����
void delchar(char str[], const char ch);

int main() {

	char str[20];
	char ch='\0';

	printf("���ڿ��� �Է����ּ��� : ");
	gets_s(str,sizeof(str));

	printf("\n������ ���ڸ� �Է����ּ��� : ");
	scanf("%c",&ch);

	// delchar �Լ� ȣ��
	delchar(str, ch);

	return 0;
}

// delchar �Լ� ����
void delchar(char str[], const char ch) {

	int count = 0;

	while (str[count] != '\0') {

		if (str[count] == ch) {

			for (int i = count; str[i] != '\0'; i++) {

				str[i] = str[i + 1];
			}
		}

		count++;
	}

	printf("%s", str);

	return;
}
