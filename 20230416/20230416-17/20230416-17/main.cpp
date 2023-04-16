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

	printf("실수를 입력하시오");
	scanf("%lf", &u);

	printf("실수를 입력하시오");
	scanf("%lf", &w);

	printf("실수를 입력하시오");
	scanf("%lf", &x);

	printf("실수를 입력하시오");
	scanf("%lf", &y);

	printf("실수를 입력하시오");
	scanf("%lf", &z);

	sum = u + w + x + y + z;
	avg = sum / 5.0;

	printf("합은 %lf 이고 평균은 %lf입니다\n", sum, avg);

	return 0;
}