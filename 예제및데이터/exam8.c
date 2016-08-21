// 파일 이름 : exam8.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

typedef struct 
{
	double x;
	double y;	
} Vector;

Vector getStartVel(double v0, double theta);
double getMaxTime(double y0, Vector vel);
Vector getPostion(double t, double y0, Vector vel);
void printPos(double t, Vector pos);

Vecotr vel = {0,0};
double y0 = 0.0;

int main(void)
{
	Vector pos = {0.0}; 
	double v0, theta; 
	double t = 0.0, dt = 0.05;	
	double tmax = 0; 
	puts("높이 초기속도 각도(60분법)");
	scanf("%lf %lf %lf",&y0, &v0,&theta); 
	vel = getStartVel(v0,theta);
	tmax = getMaxTime(y0, vel);

	while (t<=tmax)
	{
		pos = getPostion(t,y0,vel);
		printPos(t,pos);
		t = t+dt;
		
	}
	return 0;
}

Vector getStartVel(double v0, double theta) 
{
	Vector vel = {0,0};
	theta = theta * M_PI/180; // 라디안으로 변환
	vel.x = v0*cos(theta);
	vel.y = v0*sin(theta);	
	return vel;
}
double getMaxTime(double y0, Vector vel) 
{
	return (vel.y+sqrt(vel.y*vel.y+2*GRAVITY*y0))/GRAVITY;
}
Vector getPostion(double t, double y0, Vector vel)
{
	Vector pos;
	pos.x = vel.x*t;
	pos.y = y0 + vel.y*t - 0.5*GRAVITY*t*t;	
	return pos;
}
void printPos(double t, Vector pos)
{
	printf("%.2f\t%.2f\t%.2f\n",t,pos.x,pos.y);
}


