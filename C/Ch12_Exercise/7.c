#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 6
// �������� number, user, trycount ����
int number;
int user;
int trycount = 0;

static int min = 1;
static int max = 100;

// setNumber() �Լ� ���� -> 1 ~ 100 ������ number ����
void setNumber();

// printHead() �Լ� ���� -> ���α׷� ���� �� ����
void printHead();

// printHigher() �Լ� ���� -> (����� �Է�) < (number)
void printHigher();

// printLower() �Լ� ���� -> (����� �Է�) > (number)
void printLower();

// printAnswer() �Լ� ���� -> (����� �Է�) = (number)
void printAnswer();

int main() {

	// setNumber �Լ� ȣ��
	setNumber();

	// printHead �Լ� ȣ��
	printHead();

	while (1) {

		trycount++;
		// �Է°��� number���� ũ�� printLower �Լ� ȣ��
		if (user > number) {

			printLower();
		}

		// �Է°��� number���� ������ printHigher �Լ� ȣ��
		else if (user < number) {

			printHigher();
		}

		// �Է°��� number�� ������ printAnswer �Լ� ȣ�� �� ����
		else {

			printAnswer();
			break;
		}

		if(trycount == 4) {

			printf("%d���� ��ȸ�� ��� ����ϼ̽��ϴ�. ������ %d�����ϴ�.\n",trycount+1,number);
			break;
		}
	}
	

}

// setNumber �Լ� ����
void setNumber() {
	long seconds = ((long)time(NULL));
	srand(seconds);

	number = rand() % 100 + 1;
}

// printHead �Լ� ����
void printHead() {

	printf("%d���� %d������ �ϳ��� ������ �����Ǿ����ϴ�.\n",min,max);
	printf("�� ������ ���߾� ������ >");
	scanf_s("%d", &user, sizeof(int));
	puts("");
}

// printHigher �Լ� ����
void printHigher() {
	min = user + 1;

	printf("%dȸ �õ��Դϴ�.\n", trycount);
	printf("���߾�� �� ������ �Է��� ���� %d ���� Ů�ϴ�.\n",user);
	printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ���.", min, max);
	scanf_s("%d", &user, sizeof(int));
	puts("");
}

// printLower �Լ� ����
void printLower() {

	max = user - 1;

	printf("%dȸ �õ��Դϴ�.\n", trycount);
	printf("���߾�� �� ������ �Է��� ���� %d ���� �۽��ϴ�.\n",user);
	printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ���.", min, max);
	scanf_s("%d", &user, sizeof(int));
	puts("");
}

// printAnswer �Լ� ����
void printAnswer() {

	printf("%dȸ �õ��Դϴ�.\n", trycount);
	printf("�����մϴ�! ������ %d �Դϴ�.\n", number);
}
