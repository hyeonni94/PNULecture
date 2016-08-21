// 파일 이름 : exam10.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

typedef struct 
{
	double x;
	double y;	
} Vector;
// 배열 버전
// vecs[0] : F, vecs[1] : vel, vecs[2] : pos 
int sign(double x) {
	if (x>=0) return 1;
	return -1;
}

void getStartVel(double v0, double theta, Vector* vec) 
{
	theta = theta * M_PI/180; // 라디안으로 변환
	// (*vel0).x = v0*cos(theta);
	vec[1].x = v0*cos(theta);
	vec[1].y = v0*sin(theta);	
}

void printPos(double t, Vector* vec)
{
	printf("%.3f\t%.2f\t%.2f\n",t,vec[2].x,vec[2].y);
}

void computeF(Vector* vec, double m, double k)
{
	vec[0].x = -k*sign(vec[1].x)*vec[1].x*vec[1].x;
	vec[0].y = -k*sign(vec[1].y)*vec[1].y*vec[1].y - m*GRAVITY;
}

void eulerMethod(Vector* vec, double m, double dt)
{
	vec[1].x += vec[0].x/m*dt;	// 속도 
	vec[1].y += vec[0].y/m*dt;
	vec[2].x += vec[1].x*dt;	// 위치 
	vec[2].y += vec[1].y*dt;
}

int main(void)
{
	Vector vecs[3];
	double dt, v0, theta, k, m; 
	double t = 0.0;
	puts("x y 초기속도 각도(60분법) 시간간격(Δt) 저항상수 질량");
	scanf("%lf %lf %lf %lf", &vecs[2].x, &vecs[2].y, &v0, &theta);
	scanf("%lf %lf %lf",&dt, &k, &m); 
	getStartVel(v0,theta, vecs);
	while (vecs[2].y >= 0)
	{
		printPos(t,vecs);
		t += dt;
		computeF(vecs,m,k);
		eulerMethod(vecs,m,dt);
	}
	return 0;
}





