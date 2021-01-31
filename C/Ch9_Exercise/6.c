#include <stdio.h>
#define SIZE 5 // 매크로 정의

// 6
int main() {
	int a[] = { 4,7,9,3,6 }; // a[] 정의
	int b[] = { 4,7,8,2,6 }; // b[] 정의
	//int b[] = {3,2}; // 자리수 다른 ver

	if (sizeof(a) != sizeof(b)) {
		printf("배열크기가 다릅니다.\n");
		return 0;

	}

	// SIZE 범위까지 비교
	for (int i = 0; i <= SIZE; i++) { 

		// 같은 주소에 위치한 값이 서로 다르면 안내문 출력 후 종료
		if (a[i] != b[i]) { 
			printf("a[%d]와 b[%d]는 일치하지 않습니다.\n", i, i);
			return 0;
		}

		// 같은 주소에 위치한 값이 서로 같으면 각각에 해당하는 값 출력
		else { 
			printf("a[%d] = %d\n", i, a[i]);
			printf("b[%d] = %d\n", i, b[i]);
		}
	}

	return 0; // 프로그램 종료
}