#include <stdio.h>
#include <string.h>

// 3
// mystrcat �Լ� ����
void mystrcat(char s1[], const char s2[]);

int main() {

	char s1[50] = "C ";

	// mystrcat �Լ� ȣ��
	mystrcat(s1, "programming language");

	return 0;
}

// mystrcat �Լ� ����
void mystrcat(char s1[], const char s2[]) {

	int count1, count2;

	// s1 �迭�� ���Ұ� '\0'�� ���ö����� count1++
	for (count1 = 0; s1[count1] != '\0'; count1++);

	// s2 �迭�� ���Ұ� '\0'�� ���ö����� count2++
	for (count2 = 0; s2[count2] != '\0'; count2++);

	// s1[] = '\0'�� ���ö����� s1�� ���� + �� ���� �ڸ��� s2�� ����
	for (int i = count1; i < count2 + (count1 + 1); i++) {
		s1[i] = s2[i - count1];
	}

	// s1[0]���� �迭�� ������ ���
	for (int i = 0; i < count2 + (count1 + 1); i++) {
		printf("%c", s1[i]);
	}

	return;



}