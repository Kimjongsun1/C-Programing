#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int big;
	int small;

	printf("������ ������ �Է��Ͻÿ�\n");
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

	printf("\n������ ���� ��\n");
	printf("���� ū ���� %d�̰�,\n", big);
	printf("���� ���� ���� %d�Դϴ�.\n", small);

	return 0;
}