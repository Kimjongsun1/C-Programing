#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("황영조 선수는 %4.1lf m를 %d시간 %d분 %d초에 뛰어 우승하였다.\n\n", distance1 , h, m, s);
	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n", distance2);
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
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("이 자동차의 가속도는 얼마인가?  \n", acceleration);
	printf("이 자동차가 그동안 달린 거리는 얼마인가?  \n", distance);
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);
	printf("(a) 공을 던진 후 %d s 후의 속도를 구하라.\n", sec);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n", distance);	
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_2(0,0);
	Excersize_2_12(0,0);
	Excersize_2_22(0,0);
}