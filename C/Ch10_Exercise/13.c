#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 45

// 13
int main() {

	long seconds = (long)time(NULL);
	srand(seconds);

	long lottery[6] = { 0 };

	// 1 ~ 45 ������ ���� �� �ϳ��� �迭 ���ҷ� ����
	for (int i = 0; i < 6; i++) {
		lottery[i] =rand() % MAX + 1;

		// ��ġ�� ���� �˻�
		for (int j = 0; j < i; j++) {
			if (lottery[j] != lottery[i]) {
				continue;
			}

			// ��ĥ �� ���ο� ������ ��ġ�� �迭 ���Ҹ� ��ü�ϰ� �ٽ� �˻�
			else {
				lottery[i] = rand() & MAX + 1;
				j--;
			}
		}
	}

	printf("�̹����� �ζ� ��÷��ȣ�� ");

	// ��÷��ȣ 6�� ���
	for (int i = 0; i < 6; i++) {
		printf("%d ", lottery[i]);
	}
	
	printf("�Դϴ�! ���ϵ帳�ϴ� :)");

	return 0;
}