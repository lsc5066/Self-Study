#include <stdio.h>
#include <string.h>

// 6
int main() {

	char str[50];
	printf("�� �ܾ �Է��ϼ��� : ");
	scanf("%s", str);

	// strlen(const char* str)�Լ��� �̿��� �迭�� ������ ���ڸ� �������� ���
	for (int i = strlen(str); i >= 0; i--) {
		printf("%c", str[i]);
	}

	return 0;
}
