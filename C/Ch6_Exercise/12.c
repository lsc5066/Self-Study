#include <stdio.h>

// 12
int main() {
	char word;
	double temp, temp_c, temp_f;

	printf("문자를 입력하세요: ");
	scanf("%c", &word);

	printf("온도를 입력하세요: ");
	scanf("%lf", &temp);

	if (word == 'F' || word == 'f') {
		temp_c = (5.0 / 9.0) * (temp - 32);
		printf("화씨 %lf도는 섭씨 %lf도입니다.", temp, temp_c);
	}

	else if (word == 'C' || word == 'c') {
		temp_f = (9.0 / 5.0) * temp + 32;
		printf("섭씨 %lf도는 화씨 %lf도입니다.", temp, temp_f);
	}

	else {
		printf("잘못된 문자를 입력하셨습니다.");

	}

	return 0;

}
		