#include <stdio.h>

int main(void)    // a가 아스키코드로 97이기 때문에 컴파일을 정수로 출력을 했을때97이 나옴
{
	char x;
	char y;
	char z;

	x = 200;
	y = 'a';
	z = 'a';
	

	printf("%c %c %d\n", x, y, z);
}