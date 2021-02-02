#include <stdio.h>

// 10
// fibonacci 함수 선언
int fibonacci(int num);

int main(void) {

    int num = 10;

    for (int i = 1; i <= num; i++) {

        printf("%d번째 피보나치 수 : %d\n", i, fibonacci(i));

    }

    return 0;
}


// fibonacci 함수 정의
int fibonacci(int num) {

    if (num == 0) {
        return 0;
    }

    else if (num == 1) {
        return 1;
    }

    else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}