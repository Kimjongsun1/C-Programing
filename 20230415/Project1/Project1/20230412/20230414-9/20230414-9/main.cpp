#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수 한 개를 입력하시오\n");
	scanf("%d", &x);

	if (x >= 0)
	{
		printf("절댓값 : %d", x);
	}
	else
	{
		printf("절댓값 : %d", x);
	}
	return 0;
}