#include <stdio.h>

// 10
// fibonacci �Լ� ����
int fibonacci(int num);

int main(void) {

    int num = 10;

    for (int i = 1; i <= num; i++) {

        printf("%d��° �Ǻ���ġ �� : %d\n", i, fibonacci(i));

    }

    return 0;
}


// fibonacci �Լ� ����
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