#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int x;
    int y;
    int rand_num;

    printf("n�� m�� ���� �Է��ϼ���:");
    scanf("%d %d", &x, &y);

    srand(time(NULL));
    rand_num = rand() % (y - x + 1) + x;

    printf("x���� y������ ����: %d\n", rand_num);


}