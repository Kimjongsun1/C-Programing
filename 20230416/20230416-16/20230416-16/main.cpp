#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int big;
	int small;

	printf("세개의 정수를 입력하시오\n");
	scanf("%d %d %d", &x, &y, &z);

	if (x >= y)
	{
		big = x;
		small = y;
	}
	else
	{
		big = y;
		small = x;
	}
	
	if (z > big)
		big = z;
	
	if (z < small)
		small = z;

	printf("\n세개의 정수 중\n");
	printf("가장 큰 수는 %d이고,\n", big);
	printf("가장 작은 수는 %d입니다.\n", small);

	return 0;
}