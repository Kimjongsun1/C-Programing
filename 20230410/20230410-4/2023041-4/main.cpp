#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 20;
	int y = 0;

	printf("y값을 입력하세요");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x는 y보다 값이 큽니다\n");
	}

	else
	{
		printf("x는 y보다 값이 작습니다\n");
	}
	
}