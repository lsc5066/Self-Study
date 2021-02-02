#include <stdio.h>
#define SIZE1 4
#define SIZE2 4

// 15
// isequalarray 함수 선언
int isequalarray(int a[], int b[], int n1, int n2);

int main() {

	// 임의의 배열의 크기, 원소 설정(자유롭게 변경 가능)
	int n1 = SIZE1, n2 = SIZE2;
	int a[SIZE1] = { 1,2,3,4};
	int b[SIZE2] = { 1,2,3,4};

	// isequalarray 함수 호출
	isequalarray(a, b, n1, n2);

	// isequalarray 함수 내의 result 변수 호출
	int result = isequalarray(a, b, n1, n2);

	printf("a[]와 b[]를 비교하는 프로그램\n\n");

	// result 값 확인
	if(result==0) {
		printf("두 배열이 일치하지 않습니다");
	}

	else {
		printf("두 배열이 일치합니다.");
	}

}

// isequalarray 함수 정의
int isequalarray(int a[], int b[], int n1, int n2) {

	int result = 0;

	// 배열 크기 다르면 return result = 0
	if (n1 != n2) {
		return result = 0;
	}

	// 배열 크기 같으면 원소 값 비교
	else {
		for (int i = 0; i < n1; i++) {

			// 원소 값 다르면 return result = 0 
			if (a[i] != b[i]) {

				return result = 0;
			}
			
			// 원소 값 다르면 result = 1 하고 계속 비교
			else {

				result = 1;
				continue;
			}
		}
	}
}