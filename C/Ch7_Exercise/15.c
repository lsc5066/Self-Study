#include <stdio.h>

// 15
int main() {
	int num, i;

	while (1)
	{
		printf("���� �Է� : ");
		scanf("%d", &num);

		if (num == 0) {
			printf("\n���α׷��� �����մϴ�.");
			break;
		}

		printf("\n");

		for (i = 31; i >= 0; i--)
		{
			printf("%d", (num >> i) & 1);
		}

		printf("\n\n");

	}

	return 0;

}