#include <stdio.h>

int main() {
	double row;
	double column;

	printf("���� ���� ������� �Է����ּ���: ");
	scanf("%lf %lf", &row, &column);
	double area = row * column / 2;
	printf("�ﰢ���� ���̴� %+12.3lf�Դϴ�.", area);
	printf("�ﰢ���� ���̴� %-12.3lf�Դϴ�.", area);
	return 0; // 9
}