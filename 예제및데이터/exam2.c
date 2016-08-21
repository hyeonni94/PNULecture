// 파일 이름 : exam2.c 
#include <stdio.h>

int main(void)
{
	
	double s0 = 0.0, v0 = 0.0, t = 0.0;	
	double s = 0.0;	// 계산될 변수 
	puts("초기위치 초기속도 시간 : ");
	scanf("%lf %lf %lf",&s0,&v0,&t); 
	s = s0 + v0*t - 0.5*9.8*t*t;
	printf("s(%.1f)=%.1f\n",t,s);
	return 0;
}

 
