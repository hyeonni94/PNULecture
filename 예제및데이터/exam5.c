// 파일 이름 : exam5.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

int main(void)
{
	double s0 = 0.0, v0 = 0.0, t = 0.0;	
	double s = 0.0;	// 계산될 변수 
	double tmax = 0; // t의 한계 
	puts("초기위치 초기속도");
	scanf("%lf %lf",&s0,&v0); 
	tmax = (v0+sqrt(v0*v0+2*GRAVITY*s0))/GRAVITY;
	while (1)
	{
		puts("시간");
		scanf("%lf",&t);
		if (t<tmax)	 
			s = s0 + v0*t - 0.5*GRAVITY*t*t;
		else
			break;
		printf("s(%.1f)=%.1f\n",t,s);
	}
	printf("땅에 닿았습니다.");
	return 0;
}

 
