#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 20;
	int y = 0;

	printf("y���� �Է��ϼ���");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x�� y���� ���� Ů�ϴ�\n");
	}

	else
	{
		printf("x�� y���� ���� �۽��ϴ�\n");
	}
	
}