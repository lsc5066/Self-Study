#include <stdio.h>

int main() {
	unsigned long long money;
	printf("������ �ݾ��� �Է��ϼ���(��, �ּ� õ�� ����)");
	scanf("%llu", &money);

	int fw = money / 50000;
	int mw = money % 50000 / 10000;
	int ftw = money % 10000 / 5000;
	int tw = money % 5000 / 1000;

	printf("%llu���� 50000���� %d��, 10000���� %d��, 5000���� %d��, 1000���� %d�� �Դϴ�.", money, fw, mw, ftw, tw);
	return 0; // 13
}