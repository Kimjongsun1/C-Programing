#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0;
	int sum = 0;

	do
	{
		printf("정수를 입력하시오");
		scanf("%d", &number);
	} 
	while (number != 0);
	
		printf("숫자들의 합 = %d\n", sum);
		return 0;
	
	

}