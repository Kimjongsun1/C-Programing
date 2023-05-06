//3번

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_number;
	int i;
	printf("정수를 입력하시오: ");
	scanf("%d", &input_number);

	printf("약수: ");
	for (i = 1; i <= input_number; i++) {
		if (input_number % i == 0)
			printf("%d ", i);

	}
	printf("\n");
}*/

//9번
/*#include <stdio.h>

int main(void) {
	int i, prime_number;

	for (prime_number = 2; prime_number < 100; prime_number++) {

		for (i = 2; i < prime_number; i++) {
			if (prime_number % i == 0)
				goto OUT;
		}
		printf("%d ", prime_number);
	OUT:;

	}
	return 0;
}*/

//14번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 0, b = 1, c;
int i;
int num;

int main(void) {
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &num);

	printf("%d, ", a);
	for (i = 1; i <= num; i++) {
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", a);
	}
}

