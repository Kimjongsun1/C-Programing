#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Num1();
void Num2();
void Num3();
void Num4();
void Num5();
void Num6();
void Num7();
void Num8();
void Num9();

int main(void)
{

}

void Num1(int n)
{
	return n + 1;
}
int main(void)
{
	int number = 3;
	printf("%d\n", number);

	number = 5;
	printf("%d\n", number);

	number = ReturnPlusOne(number);
	printf("%d\n", number);

	return 0;
}


void Num2(int n)
{
	n += 1;
}
int main(void)
{
	int number = 3;

	printf("%d\n", number);
	number = 5;

	printf("%d\n", number);
	ChangePlusOne(number);
	printf("%d\n", number);

	return 0;
}



void Num3(void)
{
	int num1 = 3;
	int num2 = 6;
	int* num1Pointer = &num1;
	int* num2Pointer = &num2;

	printf("%d, %d\n", num1, *num1Pointer);
	printf("%d, %d\n", num2, *num2Pointer);

	return 0;
}



void Num4(void)
{
	int num = 5;
	int* p;
	p = &num;

	printf(" num: %d\n", num);
	printf("  *p: %d\n",  *p);
	printf("   p: %d\n",   p);
	printf("&num: %d\n", &num);

	return 0;
}



void ChangeDouble(int* p)
{
	*p = *p * 2;
}
void Num5(void)
{
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	ChangeDouble(&num);
	printf("%d\n", num);
	return 0;
}



void Num6(void)
{
	int num;
	int* numP = &num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	printf("  num: %d\n", num);
	printf("*numP: %d\n\n", *numP);
	printf(" &num: %d\n", &num);
	printf(" numP: %d\n", numP);

	return 0;
}
*/


void ChangeSquare(int* p)
{
	*p = *p * *p;
}
void Num7(void)
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	ChangeSquare(&num);
	printf("���� : %d\n", num);

	return 0;
}



void ChangeNumbers(int* p1, int* p2) {
	int temp = *p1;  //swap�ϴ� �۾�.
	*p1 = *p2;
	*p2 = temp;
}
void Num8(void)
{
	int num1;
	int num2;

	printf("����1 : ");
	scanf("%d", &num1);
	printf("����2 : ");
	scanf("%d", &num2);

	printf("�ٲٱ� ��\n ����1 : %d, ����2 : %d\n", num1, num2);
	ChangeNumbers(&num1, &num2);
	printf("�ٲ� ��\n ����1 : %d, ����2 : %d\n", num1, num2);

	return 0;
}


/*
�䱸����:

�Լ� �̸��� addNumbers�� �����մϴ�.
�Լ��� �� ���� ������ �Ű������� �޽��ϴ�.
�Լ��� �� ���� ���� ����� ��ȯ�մϴ�.
�Լ��� �ۼ��� ��, �ش� �Լ��� ȣ���Ͽ� �� ���� ���� ����� ����ϴ� ���� �ڵ嵵 �Բ� �ۼ����ּ���.*/

	int addNumbers(int num1, int num2)
	{
		int sum = num1 + num2;
		return sum;
}
	void Num9()
	{
		int a = 5;
		int b = 3;
		int result = addNumbers(a, b);
		printf("�� ���� ��: %d\n", result);
		return 0;
}