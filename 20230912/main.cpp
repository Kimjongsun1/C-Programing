#define  _CRT_SECURE_NO_WARNINGS
#define MAX_RESISTORS 10 
#include <stdio.h>


int main() 
{
    int choice;
    int numResistors;

    printf("저항 계산 방법을 선택하세요 : \n");
    printf("1. 직렬 저항 계산\n");
    printf("2. 병렬 저항 계산\n");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) 
    {
        printf("1은 직렬 2는 병렬입니다 다음에 둘중에 하나 선택해주세요.\n");
        return 1; 
    }

    printf("저항의 개수를 입력하세요 (최대 %d개): ", MAX_RESISTORS);
    scanf("%d", &numResistors);

    if (numResistors <= 0 || numResistors > MAX_RESISTORS) 
    {
        printf("10보다 작은정수를 입력해야 합니다.\n");
        return 1; 
    }

    double resistors[MAX_RESISTORS]; 

    printf("각 저항의 값을 입력하세요:\n");
    for (int i = 0; i < numResistors; i++) 
    {
        printf("저항 %d: ", i + 1);
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

    printf("합성 저항 값: %.2lf\n", totalResistance);

    return 0;
}