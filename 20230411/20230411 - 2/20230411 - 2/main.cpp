#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("내일과 내일모레의 예상 일최고체감온도");
	scanf("%d %d", &x, &y);

	if (33 <= x && y < 35)
	{
		printf("폭염주의보를 발령합니다\n");
	}
	else if (x && y <= 35)
	{
		printf("폭염경보를 발령합니다\n");
	}
	else
	{
		printf("아무일도 일어나지 않습니다");
	}
}