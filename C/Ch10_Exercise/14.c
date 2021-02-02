#include <stdio.h>

void copyarray(int from[], int to[], int n/*배열 원소 수*/);

int main() {

	int c = 0;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0 };

	printf("복사하고 싶은 원소의 개수(n-1)를 입력해주세요 : ");
	
	scanf("%d", &c);
	printf("\n");

	if (c < 0 || c>12) {
		printf("범위를 초과하셨습니다.\n");

		return 0;
	}

	copyarray(a, b, c);

	
	printf("a[]에서 b[]로 원소 복사가 완료되었습니다.\n\n");

	for (int i = 0; i < c - 1; i++) {
		printf("b[%d] = %d\n", i, i, b[i]);
	}

	return 0;

}

void copyarray(int from[], int to[], int n/*배열 원소 수*/) {
	
	for (int i = 0; i < n - 1; i++) {

		to[i] = from[i];
	}

	return;
}