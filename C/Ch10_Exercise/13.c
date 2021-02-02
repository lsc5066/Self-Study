#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 45

// 13
int main() {

	long seconds = (long)time(NULL);
	srand(seconds);

	long lottery[6] = { 0 };

	// 1 ~ 45 사이의 난수 중 하나씩 배열 원소로 지정
	for (int i = 0; i < 6; i++) {
		lottery[i] =rand() % MAX + 1;

		// 겹치는 난수 검사
		for (int j = 0; j < i; j++) {
			if (lottery[j] != lottery[i]) {
				continue;
			}

			// 겹칠 시 새로운 난수로 겹치는 배열 원소를 대체하고 다시 검사
			else {
				lottery[i] = rand() & MAX + 1;
				j--;
			}
		}
	}

	printf("이번주차 로또 당첨번호는 ");

	// 당첨번호 6개 출력
	for (int i = 0; i < 6; i++) {
		printf("%d ", lottery[i]);
	}
	
	printf("입니다! 축하드립니다 :)");

	return 0;
}