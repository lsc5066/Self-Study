#include <stdio.h>

// 3
int main() {

	// �ܺ� ������ ������ ���� ������ �� ������ �Ұ���.
	// extern int x = 10;

	// ����, ���� �� ������ ���� �Է��ؾ� ��.
	extern int x;
	x = 10;

	printf("%d", x);

	return 0;
}

int x = 0;