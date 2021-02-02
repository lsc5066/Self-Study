#include <stdio.h>

// 12
// hex 함수 선언
void hex(int n);

int main()
{
    int n = 0;

    printf("16진수로 변환할 정수를 입력해주세요 : ");
    scanf("%d", &n);

    printf("%d(10) ->",n);
    hex(n);

    return 0;
}

// hex 함수 정의
void hex(int n)
{
    if (n == 0) {
        return;
    }

    hex(n / 16);
    printf(" %x(16)\n", n % 16);

    return hex;
}