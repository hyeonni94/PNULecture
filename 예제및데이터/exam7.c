// ���� �̸� : exam7.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8
double getPosition(double s0, double v0, double k, double m, double t);

int main(void)
{
	double t = 0.0, s = 0.0, dt = 0.05;	
	double v = 0.0;
	puts("�ʱ���ġ �ʱ�ӵ� ���װ��");
	scanf("%lf %lf %lf",&s0,&v0,&k); 
	printf("�ð�\t��ġ\n");
	int i = 0;
	while (1)
	{
		s = getPosition(s0, v0, k, m, t);
		if (s<0)		
			break;
		printf("%.2f\t%.2f%\n",t,s);
		t = t+dt;
	}
	return 0;
}

double getPosition(double s0, double v0, double k, double m, double t) 
{
	double s, tmp;	// tmp�� �ӽ� ���� 
	if (k == 0.0)
		s = s0 + v0*t - 0.5*GRAVITY*t*t;	
	else
	{
		tmp = (v0+m*GRAVITY/k);
		s = s0 + (-tmp*(m/k)*exp(-(k/m)*t)-m*GRAVITY/k*t)+(m/k*tmp);	
	}
	return s;
}


