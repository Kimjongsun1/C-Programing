#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double u;
	double w;
	double x;
	double y;
	double z;
	double sum;
	double avg;

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &u);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &w);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &z);

	sum = u + w + x + y + z;
	avg = sum / 5.0;

	printf("���� %lf �̰� ����� %lf�Դϴ�\n", sum, avg);

	return 0;
}