#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 20;
	int y = 0;

	printf("나이를 입력하세요\n");
	scanf("%d", &y);

	if (x > y)
	{
		printf("30% 할인을 받습니다");
	}
	else
	{
		printf("정가로 받습니다");
	}


}