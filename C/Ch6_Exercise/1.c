#include <stdio.h>

// 1번
int main() {
	
	int angle;

	printf("각도를 입력하세요: ");
	scanf("%d", &angle);
	

	if (angle < 0)
	{
		printf("각도를 잘못 입력하셨습니다.");
	}

	else if (angle < 90)
	{
		printf("양의 X축");
	}
	
	else if (angle < 180)
	{
		printf("양의 Y축");
	}

	else if (angle < 270)
	{
		printf("음의 X축");
	}

	else if (angle <= 360)
	{
		printf("음의 Y축");
	}

	else
	{
		printf("각도를 잘못 입력하셨습니다.");
	}

	return 0;
	
}