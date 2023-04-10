#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	int x = 1;
	double y = M_PI;
	double z;

	z = x + y;

	printf("%.6f", z);
}