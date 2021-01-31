#include <stdio.h>
#define SIZE 20

// 8
int main() {
	int a[SIZE] = { NULL }; // 입력 값 저장할 배열
	int b[10] = { NULL }; // 빈도 수를 저장할 배열
	int max = 0; // 최다 빈도 수를 저장할 변수

	// 배열에 정수 받기
	for (int i = 0; i < SIZE; i++) {

		printf("a[%d]를 입력해주세요 : ", i);
		scanf("%d", &a[i]);

		// 0이상 9이하의 정수를 입력하지 않았으면 종료
		if (a[i] < 0 || a[i] >9) {

			printf("\na[%d]에 잘못된 수를 입력하셨습니다.\n", i);
			printf("0이상 9이하의 정수를 입력해주세요.\n");

			return 0;
		}

		// 정상적으로 입력했으면 출력
		else {
			printf("a[%d] = %d\n\n", i, a[i]);
		}
	}

	// 입력받은 값의 개수 저장
	for (int j = 0; j < SIZE; j++) {
			b[a[j]] += 1;
		}

	for (int k = 1; k < 10; k++) {

		// 최다 빈도 수 max에 저장
		if (b[max] < b[k]) {
				max = k;
			}
		}

	// 각각의 수와 빈도 수 출력
	for (int h = 0; h < 10; h++) {
		printf("%d의 빈도 수 = %d\n", h, b[h]);

		}
	// 최다 빈도 수와 그 횟수 출력
	printf("가장 많이 입력 받은 수는 %d이고 빈도수는 %d회 입니다.\n",max, b[max]);

	return 0;

	}

	

	
