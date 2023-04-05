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
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 공식은 Vector의 성분 분해입니다.\n");
		printf("먼저 각 이동 거리를 x,y축으로 성분 분해를 하세요.\n");



		printf("=================================================================\n");
	}
		
	
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
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
	printf("황영조 선수는 %4.1lf m를 %.lf시간 %.lf분 %.lf초에 뛰어 우승하였다.\n\n", distance1, h, m, s);
	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n\n", distance2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("먼저 평균 속력의 공식을 구하세요\n\n");
		printf("평균 속력의 공식은 : V평균 = (Xf - Xi) / (Tf - Ti)입니다.\n\n");s
		

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
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("(a)이 자동차의 가속도는 얼마인가?  \n\n", acceleration);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b)이 자동차가 그동안 달린 거리는 얼마인가?  \n\n", distance);
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);
	printf("(a) 공을 던진 후 %d s 후의 속도를 구하라.\n\n", sec);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
			
		printf("=================================================================\n");
	}

	printf("(b) 그동안 낙하한 거리는 얼마인가?\n", distance);

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