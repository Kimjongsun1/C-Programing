#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum;

	printf("������ �Է��Ͻÿ�\n");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	return 0;
}