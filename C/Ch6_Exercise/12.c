#include <stdio.h>

// 12
int main() {
	char word;
	double temp, temp_c, temp_f;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &word);

	printf("�µ��� �Է��ϼ���: ");
	scanf("%lf", &temp);

	if (word == 'F' || word == 'f') {
		temp_c = (5.0 / 9.0) * (temp - 32);
		printf("ȭ�� %lf���� ���� %lf���Դϴ�.", temp, temp_c);
	}

	else if (word == 'C' || word == 'c') {
		temp_f = (9.0 / 5.0) * temp + 32;
		printf("���� %lf���� ȭ�� %lf���Դϴ�.", temp, temp_f);
	}

	else {
		printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.");

	}

	return 0;

}
		