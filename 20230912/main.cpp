#define  _CRT_SECURE_NO_WARNINGS
#define MAX_RESISTORS 10 
#include <stdio.h>


int main() 
{
    int choice;
    int numResistors;

    printf("���� ��� ����� �����ϼ��� : \n");
    printf("1. ���� ���� ���\n");
    printf("2. ���� ���� ���\n");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) 
    {
        printf("1�� ���� 2�� �����Դϴ� ������ ���߿� �ϳ� �������ּ���.\n");
        return 1; 
    }

    printf("������ ������ �Է��ϼ��� (�ִ� %d��): ", MAX_RESISTORS);
    scanf("%d", &numResistors);

    if (numResistors <= 0 || numResistors > MAX_RESISTORS) 
    {
        printf("10���� ���������� �Է��ؾ� �մϴ�.\n");
        return 1; 
    }

    double resistors[MAX_RESISTORS]; 

    printf("�� ������ ���� �Է��ϼ���:\n");
    for (int i = 0; i < numResistors; i++) 
    {
        printf("���� %d: ", i + 1);
        scanf("%lf", &resistors[i]);
    }

    double totalResistance;

    if (choice == 1) 
    { 
        totalResistance = 0;
        for (int i = 0; i < numResistors; i++) 
        {
            totalResistance += resistors[i];
        }
    }
    else 
    { 
        totalResistance = 0;
        for (int i = 0; i < numResistors; i++) 
        {
            totalResistance += 1.0 / resistors[i];
        }
        totalResistance = 1.0 / totalResistance;
    }

    printf("�ռ� ���� ��: %.2lf\n", totalResistance);

    return 0;
}