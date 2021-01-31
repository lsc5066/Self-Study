#include <stdio.h>
#define NUM 6

// 5
int main() {
	int a[] = { 4,7,9,3,6 }; // a[] 정의
	int b[] = { 10,20,30,40,50,60 }; // b[] 정의

	int n = 0; // n 초기화
	
	printf("a 배열에서 b 배열로 복사할 Index를 입력해주세요 : ");
	scanf("%d", &n);

	// Index 범위 제한은 0부터 4까지
	if (n < 0 || n >4) { 
		printf("잘못된 수를 입력하셨습니다.\n");
		printf("0이상 4이하의 수를 입력해주세요.\n");
		return 0;
	}

	// 해당하는 위치까지 a[] -> b[] 복사
	for (int i = 0; i <= n; i++) { 
		b[i] = a[i];
	}

	// b[] 출력
	for (int j = 0; j < NUM; j++) { 
		printf("b[%d] = %d\n", j, b[j]);
	}

	return 0;
}