#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		printf("%d는 짝수입니다", x);
	}
	else if (x % 2 != 0)
	{
		printf("%d는 홀수입니다", x);
	}
	else
	{
		printf("0입니다");
	}
	return 0;
}