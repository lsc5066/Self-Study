#include <stdio.h>
#include <string.h>

// 14
int main() {

	char* unit[] = { "��","��","õ" };
	char* number[] = { "��","��","��","��","��","��","ĥ","��","��" };
	char str[100];

	int a, b, length;
	int count = 0;

	printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. ->");
	gets_s(str, sizeof(str));

	printf("�Է��� ������ [");

	length = strlen(str);
	b = (length - 1) / 4 - 1;
	a = (length % 4 == 0) ? 2 : length & 4 - 2;

	for (int i = 0; i < length; i++) {

		if (str[i] != '0') {

			printf("%s", number[str[i] - '0' - 1]);
			count++;
		}

		if (a < 0 && length >0)
		{
		}
		else if (str[i] != '0') {

			printf("%s", unit[a]);

			a--;
		}
		
	}
	printf("]�Դϴ�.\n");

	return 0;
}