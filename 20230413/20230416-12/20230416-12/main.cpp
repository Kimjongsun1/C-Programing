#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 2000000000;
	j = 3000000000;

	printf("%d %d\n", i, j);

	// %d의 범위를 초과하여 쓰레기 값이 출력되는것이므로 b의 값이 저렇게 뜨는거다
}