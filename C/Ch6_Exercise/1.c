#include <stdio.h>

// 1��
int main() {
	
	int angle;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &angle);
	

	if (angle < 0)
	{
		printf("������ �߸� �Է��ϼ̽��ϴ�.");
	}

	else if (angle < 90)
	{
		printf("���� X��");
	}
	
	else if (angle < 180)
	{
		printf("���� Y��");
	}

	else if (angle < 270)
	{
		printf("���� X��");
	}

	else if (angle <= 360)
	{
		printf("���� Y��");
	}

	else
	{
		printf("������ �߸� �Է��ϼ̽��ϴ�.");
	}

	return 0;
	
}