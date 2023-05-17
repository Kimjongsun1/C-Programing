#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)

{

	int x, sum = 0;



	printf("음수를 입력하세요 : ");

	scanf("%d", &x);



	while (x < 0)

	{

		sum += x;



		printf("지금까지 입력된 값의 합 : %d\n", sum);



		printf("숫자를 입력하세요 : ");

		scanf("%d", &x);

	}

	return 0;

}