#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("점수를 입력하시오 :");
	scanf("%d", &x);

	y = x / 10;

	switch (y)
	{
	case 9:
		printf("%d는 A입니다", x);
		break;
	case 8:
		printf("%d는 B입니다", x);
		break;
	case 7:
		printf("%d는 C입니다", x);
		break;
	case 6:
		printf("%d는 D입니다", x);
		break;
	default:
		printf("%d는 F입니다", x);
		break;
	}
	return 0;
}