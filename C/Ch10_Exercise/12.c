#include <stdio.h>

// 12
// hex �Լ� ����
void hex(int n);

int main()
{
    int n = 0;

    printf("16������ ��ȯ�� ������ �Է����ּ��� : ");
    scanf("%d", &n);

    printf("%d(10) ->",n);
    hex(n);

    return 0;
}

// hex �Լ� ����
void hex(int n)
{
    if (n == 0) {
        return;
    }

    hex(n / 16);
    printf(" %x(16)\n", n % 16);

    return hex;
}