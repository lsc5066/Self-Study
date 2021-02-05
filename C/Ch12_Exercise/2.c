#include <stdio.h>

// 초기화되지 않은 변수를 사용했습니다라는 경고문 출력 -> 초기값 x
int main() {
	register int a;
	printf("%d", a);
	return 0;
}