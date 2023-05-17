#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, i;


    printf("정수를 입력하세요 : ");
    scanf("%d", &x);


    for (i = 2; i < x; i++) {
        printf("%d %% %d = %d\n", x, i, x % i);
        if (x % i == 0)
            break;
    }


    if (i == x)
        printf("소수 입니다.");
    else
        printf("소수가 아닙니다.");


    return 0;
}