#include <stdio.h>

int main(void)
{
	int b;
	

	b = 10 < 5;
	printf("%d\n", b);

	if (b)
	{
		printf("b�� 10 < 5�� ���� �� �Դϴ�\n");
	}
	else
	{
		printf("b�� 10 > 5�� ���� �����Դϴ�\n");
	}
}