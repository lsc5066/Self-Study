#include <stdio.h>
#include <string.h>

// 3
// mystrcat 함수 선언
void mystrcat(char s1[], const char s2[]);

int main() {

	char s1[50] = "C ";

	// mystrcat 함수 호출
	mystrcat(s1, "programming language");

	return 0;
}

// mystrcat 함수 정의
void mystrcat(char s1[], const char s2[]) {

	int count1, count2;

	// s1 배열의 원소가 '\0'이 나올때까지 count1++
	for (count1 = 0; s1[count1] != '\0'; count1++);

	// s2 배열의 원소가 '\0'이 나올때까지 count2++
	for (count2 = 0; s2[count2] != '\0'; count2++);

	// s1[] = '\0'이 나올때까지 s1의 원소 + 그 이후 자리에 s2의 원소
	for (int i = count1; i < count2 + (count1 + 1); i++) {
		s1[i] = s2[i - count1];
	}

	// s1[0]부터 배열의 끝까지 출력
	for (int i = 0; i < count2 + (count1 + 1); i++) {
		printf("%c", s1[i]);
	}

	return;



}