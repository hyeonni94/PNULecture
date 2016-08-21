// 파일 이름 : exam8.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

int main(void)
{
	double x0=0.0, y0, v0, theta; 
	double x, y, vx0, vy0, t = 0.0, dt = 0.05;	
	double tmax = 0; 
	puts("높이 초기속도 각도(60분법)");
	scanf("%lf %lf %lf",&y0, &v0,&theta); 
	theta = theta * M_PI/180; // 라디안으로 변환
	vx0 = v0*cos(theta);
	vy0 = v0*sin(theta);
	tmax = (vy0+sqrt(vy0*vy0+2*GRAVITY*y0))/GRAVITY;

	while (1)
	{
		if (t<=tmax)	 
		{
			x = vx0*t;
			y = y0 + vy0*t - 0.5*GRAVITY*t*t;		
		}
		else
			break;
		t = t+dt;
		printf("%.2f\t%.2f\t%.2f\n",t,x,y);
	}
	return 0;
}

 
