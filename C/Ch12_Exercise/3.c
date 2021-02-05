#include <stdio.h>

// 3
int main() {

	// 외부 변수를 참조할 수는 있지만 값 변경은 불가능.
	// extern int x = 10;

	// 따라서, 선언 후 변수에 값을 입력해야 함.
	extern int x;
	x = 10;

	printf("%d", x);

	return 0;
}

int x = 0;