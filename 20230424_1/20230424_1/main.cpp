//3��

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_number;
	int i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input_number);

	printf("���: ");
	for (i = 1; i <= input_number; i++) {
		if (input_number % i == 0)
			printf("%d ", i);

	}
	printf("\n");
}*/

//9��
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

//14��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 0, b = 1, c;
int i;
int num;

int main(void) {
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &num);

	printf("%d, ", a);
	for (i = 1; i <= num; i++) {
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", a);
	}
}

