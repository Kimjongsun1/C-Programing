#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)

{

	int x, sum = 0;



	printf("������ �Է��ϼ��� : ");

	scanf("%d", &x);



	while (x < 0)

	{

		sum += x;



		printf("���ݱ��� �Էµ� ���� �� : %d\n", sum);



		printf("���ڸ� �Է��ϼ��� : ");

		scanf("%d", &x);

	}

	return 0;

}