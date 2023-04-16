#include <stdio.h>

int main(void)
{
	int b;
	

	b = 10 < 5;
	printf("%d\n", b);

	if (b)
	{
		printf("b의 10 < 5의 식은 참 입니다\n");
	}
	else
	{
		printf("b의 10 > 5의 식은 거짓입니다\n");
	}
}