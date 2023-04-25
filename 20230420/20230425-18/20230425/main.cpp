#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int x;
    int y;
    int rand_num;

    printf("n과 m의 값을 입력하세요:");
    scanf("%d %d", &x, &y);

    srand(time(NULL));
    rand_num = rand() % (y - x + 1) + x;

    printf("x에서 y까지의 난수: %d\n", rand_num);


}