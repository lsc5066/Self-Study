#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 4
int main() {
	// srand() �Լ� ����
	srand((long)time(NULL));
	int cpu = rand() % 3;
	int user = 0;
	char win[10] = { "�¸�" };
	char draw[10] = { "���º�" };
	char defeat[10] = { "�й�" };
	char rock[10] = { "����" };
	char scissor[10] = { "����" };
	char paper[10] = { "��" };

	printf("����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
	scanf("%d", &user);

	switch (user) {

	case 0:
		if (cpu == 0) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", scissor, scissor);
			printf("����� %s�Դϴ�.\n", draw);
		}

		else if (cpu == 1) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", scissor, rock);
			printf("����� %s�Դϴ�.\n", defeat);

		}

		else if (cpu == 2) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", scissor, paper);
			printf("����� %s�Դϴ�.", win);

		}
		break;

	case 1:
		if (cpu == 0) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", rock, scissor);
			printf("����� %s�Դϴ�.\n", win);
		}

		else if (cpu == 1) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", rock, rock);
			printf("����� %s�Դϴ�.", draw);
		}

		else if (cpu == 2) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", rock, paper);
			printf("����� %s�Դϴ�.\n", defeat);
		}
		break;

	case 2:
		if (cpu == 0) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", paper, scissor);
			printf("����� %s�Դϴ�.\n", defeat);
		
		}

		else if (cpu == 1) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", paper, rock);
			printf("����� %s�Դϴ�.\n", win);
			
		}

		else if (cpu == 2) {
			printf("����� %s�̰�, �ý����� %s�Դϴ�.\n", paper, paper);
			printf("����� %s�Դϴ�.\n", draw);
		
		}
		break;

	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}

}

	