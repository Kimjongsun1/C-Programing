#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double PI = 3.14
	float A, V, r;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("���� ǥ����: %f ���� ü��: %f\n", A, V);
	

	return 0;
}