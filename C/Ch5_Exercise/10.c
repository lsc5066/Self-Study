#include <stdio.h>

int main() {
	unsigned long long money = 1000000;

	int year;
	printf("100������ ��ġ�� �Ⱓ�� �Է��ϼ���(��, �� ����): ");
	scanf("%d", &year);

	unsigned long long sum = money * ((1 + 0.045) * year);
	printf("���� �� �� ���ɾ��� %llu���Դϴ�.", sum);
	return 0; // 10

}