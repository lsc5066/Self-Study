#include <stdio.h> 
#include <stdlib.h> //rand(), srand()�� ���� ������� ���� 
#include <time.h>   //time()�� ���� ������� ���� 
#define MAX 100

// 8
int main()
{
	int guess, input, count;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������ : ");

	for (count = 1; count <= 7; count++) {

		scanf("%d", &input);

		if (input > guess) {
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ��� : ");
		}

		else if (input < guess) {
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ��� : ");
		}

		else {
			puts("�����Դϴ�.");
			break;
		}

	}

	printf("\n\n��� ��ȸ�� ���̽��ϴ�.\n");

	return 0;
}
