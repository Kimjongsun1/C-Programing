#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, i;


    printf("������ �Է��ϼ��� : ");
    scanf("%d", &x);


    for (i = 2; i < x; i++) {
        printf("%d %% %d = %d\n", x, i, x % i);
        if (x % i == 0)
            break;
    }


    if (i == x)
        printf("�Ҽ� �Դϴ�.");
    else
        printf("�Ҽ��� �ƴմϴ�.");


    return 0;
}