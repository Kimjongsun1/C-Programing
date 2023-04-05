#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double PI = 3.14
	float A, V, r;
	printf("반지름을 입력하시오: ");
	scanf("%f", &r);

	A = 4.0 * PI * r * r;
	V = 4.0 / 3.0 * PI * r * r * r;

	printf("구의 표면적: %f 구의 체적: %f\n", A, V);
	

	return 0;
}