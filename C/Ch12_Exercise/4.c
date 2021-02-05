#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 4
int main() {
	// srand() 함수 선언
	srand((long)time(NULL));
	int cpu = rand() % 3;
	int user = 0;
	char win[10] = { "승리" };
	char draw[10] = { "무승부" };
	char defeat[10] = { "패배" };
	char rock[10] = { "바위" };
	char scissor[10] = { "가위" };
	char paper[10] = { "보" };

	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
	scanf("%d", &user);

	switch (user) {

	case 0:
		if (cpu == 0) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", scissor, scissor);
			printf("당신의 %s입니다.\n", draw);
		}

		else if (cpu == 1) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", scissor, rock);
			printf("당신의 %s입니다.\n", defeat);

		}

		else if (cpu == 2) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", scissor, paper);
			printf("당신의 %s입니다.", win);

		}
		break;

	case 1:
		if (cpu == 0) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", rock, scissor);
			printf("당신의 %s입니다.\n", win);
		}

		else if (cpu == 1) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", rock, rock);
			printf("당신의 %s입니다.", draw);
		}

		else if (cpu == 2) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", rock, paper);
			printf("당신의 %s입니다.\n", defeat);
		}
		break;

	case 2:
		if (cpu == 0) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", paper, scissor);
			printf("당신의 %s입니다.\n", defeat);
		
		}

		else if (cpu == 1) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", paper, rock);
			printf("당신의 %s입니다.\n", win);
			
		}

		else if (cpu == 2) {
			printf("당신은 %s이고, 시스템은 %s입니다.\n", paper, paper);
			printf("당신의 %s입니다.\n", draw);
		
		}
		break;

	default:
		printf("잘못된 입력입니다.\n");
		break;
	}

}

	