#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("���ϰ� ���ϸ��� ���� ���ְ�ü���µ�");
	scanf("%d %d", &x, &y);

	if (33 <= x && y < 35)
	{
		printf("�������Ǻ��� �߷��մϴ�\n");
	}
	else if (x && y <= 35)
	{
		printf("�����溸�� �߷��մϴ�\n");
	}
	else
	{
		printf("�ƹ��ϵ� �Ͼ�� �ʽ��ϴ�");
	}
}