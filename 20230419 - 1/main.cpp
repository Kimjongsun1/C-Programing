// 20230419 , �̷������Ƽ���а� , 202315004 , ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		printf("������ ������ ������ ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer) {
			printf("���� �� �����ϴ�");
		}
		if (guess < answer) {
			printf("���� �� �����ϴ�");
		}
	} while (guess != answer);

	printf("�����Դϴ�. �õ��� Ƚ�� %d\n", tries);
	return 0;
}