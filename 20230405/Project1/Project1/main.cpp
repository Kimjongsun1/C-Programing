#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cm = 0;
	int ft = 0;
	double inch;

	printf("Ű�� �Է��ϼ���:");
	scanf("%d", &cm);

	inch = cm / 2.54;
	ft = inch / 12;
	inch = inch - ft * 12;

	printf("%d cm�� %d ��Ʈ %.2f ��ġ �Դϴ�.\n", cm, ft, inch);


	return 0;
}