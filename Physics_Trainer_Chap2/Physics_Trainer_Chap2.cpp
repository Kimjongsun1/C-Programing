#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_1(int solution, int answer)
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ������ Vector�� ���� �����Դϴ�.\n");
		printf("���� �� �̵� �Ÿ��� x,y������ ���� ���ظ� �ϼ���.\n");



		printf("=================================================================\n");
	}
		
	
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
}


void Excersize_2_2(int solution, int answer)
{
	double h = 2.0;
	double m = 12.0;
	double s = 23.0;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("Ȳ���� ������ %4.1lf m�� %.lf�ð� %.lf�� %.lf�ʿ� �پ� ����Ͽ���.\n\n", distance1, h, m, s);
	printf("Ȳ���� ������ %4.1lf m�� ��� �� �ʿ� �޸� ���ΰ�?  \n\n", distance2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ��� �ӷ��� ������ ���ϼ���\n\n");
		printf("��� �ӷ��� ������ : V��� = (Xf - Xi) / (Tf - Ti)�Դϴ�.\n\n");s
		

		printf("=================================================================\n");
	}
}


void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("� �ڵ����� %d s ���ȿ� %d m/s ���� %d m/s�� ���ӵȴ�.\n\n", sec, V, V0);
	printf("(a)�� �ڵ����� ���ӵ��� ���ΰ�?  \n\n", acceleration);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b)�� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�?  \n\n", distance);
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("� ���̿��� %d m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", V);
	printf("(a) ���� ���� �� %d s ���� �ӵ��� ���϶�.\n\n", sec);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
			
		printf("=================================================================\n");
	}

	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n", distance);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

}


void Excersize_2_3(int solution, int answer)
{





}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_1(1,0);
	Excersize_2_2(1, 0);
	Excersize_2_12(1, 0);
	Excersize_2_22(1, 0);



}