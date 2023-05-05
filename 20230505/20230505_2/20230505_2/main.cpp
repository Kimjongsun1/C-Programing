#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	switch (x % 2)
	{
	case 0: printf("짝수입니다\n");
		break;
	case 1: printf("홀수입니다\n");
	}
	return 0;
}

