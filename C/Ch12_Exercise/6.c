#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 6
// 전역변수 number, user 선언
int number;
int user;

static int min = 1;
static int max = 100;

// setNumber() 함수 선언 -> 1 ~ 100 사이의 number 설정
void setNumber();

// printHead() 함수 선언 -> 프로그램 시작 시 실행
void printHead();

// printHigher() 함수 선언 -> (사용자 입력) < (number)
void printHigher();

// printLower() 함수 선언 -> (사용자 입력) > (number)
void printLower();

// printAnswer() 함수 선언 -> (사용자 입력) = (number)
void printAnswer();

int main() {

	// setNumber 함수 호출
	setNumber();

	// printHead 함수 호출
	printHead();

	while (1) {

		// 입력값이 number보다 크면 printLower 함수 호출
		if (user > number) {

			printLower();
		}

		// 입력값이 number보다 작으면 printHigher 함수 호출
		else if (user < number) {

			printHigher();
		}

		// 입력값과 number가 같으면 printAnswer 함수 호출 후 종료
		else {

			printAnswer();
			break;
		}
	}
	

}

// setNumber 함수 정의
void setNumber() {
	long seconds = ((long)time(NULL));
	srand(seconds);

	number = rand() % 100 + 1;
}

// printHead 함수 정의
void printHead() {

	printf("%d에서 %d까지의 하나의 정수가 결정되었습니다.\n",min,max);
	printf("이 정수를 맞추어 보세요 >");
	scanf_s("%d", &user, sizeof(int));
	puts("");
}

// printHigher 함수 정의
void printHigher() {

	min = user + 1;

	printf("맞추어야 할 정수가 입력한 정수 %d 보다 큽니다.\n",user);
	printf("%d 에서 %d 사이의 정수를 다시 입력하세요.", min, max);
	scanf_s("%d", &user, sizeof(int));
	puts("");
}

// printLower 함수 정의
void printLower() {

	max = user - 1;

	printf("맞추어야 할 정수가 입력한 정수 %d 보다 작습니다.\n",user);
	printf("%d 에서 %d 사이의 정수를 다시 입력하세요.", min, max);
	scanf_s("%d", &user, sizeof(int));
	puts("");

}

// printAnswer 함수 정의
void printAnswer() {

	printf("축하합니다! 정답은 %d 입니다.\n", number);
}
