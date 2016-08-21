// ���� �̸� : exam10.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

typedef struct 
{
	double x;
	double y;	
} Vector;

int sign(double x) {
	if (x>=0) return 1;
	return -1;
}

void getStartVel(double v0, double theta, Vector* p_vel) 
{
	theta = theta * M_PI/180; // �������� ��ȯ
	// (*vel0).x = v0*cos(theta);
	p_vel->x = v0*cos(theta);
	p_vel->y = v0*sin(theta);	
}

void printPos(double t, Vector* p_pos)
{
	printf("%.3f\t%.2f\t%.2f\n",t,p_pos->x,p_pos->y);
}

void computeF(Vector* p_F, Vector* p_vel, double m, double k)
{
	p_F->x = -k*sign(p_vel->x)*p_vel->x*p_vel->x;
	p_F->y = -k*sign(p_vel->y)*p_vel->y*p_vel->y - m*GRAVITY;
}

void eulerMethod(Vector* p_v, Vector* p_p, Vector* p_F, double m, double dt)
{
	p_v->x += p_F->x/m*dt;	// �ӵ� 
	p_v->y += p_F->y/m*dt;
	p_p->x += p_v->x*dt;	// ��ġ 
	p_p->y += p_v->y*dt;
}

int main(void)
{
	Vector F, pos, vel;
	double dt, v0, theta, k, m; 
	double t = 0.0;
	puts("x y �ʱ�ӵ� ����(60�й�) �ð�����(��t) ���׻�� ����");
	scanf("%lf %lf %lf %lf", &pos.x, &pos.y, &v0, &theta);
	scanf("%lf %lf %lf",&dt, &k, &m); 
	getStartVel(v0,theta, &vel);
	while (pos.y >= 0)
	{
		printPos(t,&pos);
		t += dt;
		computeF(&F,&vel,m,k);
		eulerMethod(&vel,&pos,&F,m,dt);
	}
	return 0;
}





