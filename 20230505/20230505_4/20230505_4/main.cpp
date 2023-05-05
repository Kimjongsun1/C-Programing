#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;

	printf("점수를 입력하시오 :");
	scanf("%f", &x);

	if (x >= 90)
	{
		printf("%f는 A\n", x);
	}
	else if (x >= 80)
	{
		printf("%f는 B\n", x);
	}
	else if (x >= 70)
	{
		printf("%f는 C\n", x);
	}
	else if (x >= 60)
	{
		printf("%f는 D\n", x);
	}
	else
	{
		printf("F");
	}
	return 0;
}