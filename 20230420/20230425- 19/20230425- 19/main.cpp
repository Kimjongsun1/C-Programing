#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //bool�� �������� �ʿ�
#define TRUE 1
#define FALSE 0

void main()
{
    int x;
    int y;
    bool result;

    printf("ù��° ������ �Է��ϼ���: ");
    scanf("%d", &x);

    printf("�ι�° ������ �Է��ϼ���: ");
    scanf("%d", &y);

    result = (x < y);

    if (result)
    {
        printf("%d = ��\n", result);
    }
    else
    {
        printf("%d=����\n", result);
    }
}