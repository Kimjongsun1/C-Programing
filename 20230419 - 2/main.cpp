// 20230419 , �̷������Ƽ���а� , 202315004 , ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;

	while (1) {
		printf("�ҹ��ڸ� �Է��ϼ���");
		scanf(" %c", &letter);

		if (letter < 'a' || letter > 'z')
			continue;

		letter = letter - 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�\n", letter);
	}

	return 0;
}