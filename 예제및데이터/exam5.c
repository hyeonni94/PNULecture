// ���� �̸� : exam5.c 
#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

int main(void)
{
	double s0 = 0.0, v0 = 0.0, t = 0.0;	
	double s = 0.0;	// ���� ���� 
	double tmax = 0; // t�� �Ѱ� 
	puts("�ʱ���ġ �ʱ�ӵ�");
	scanf("%lf %lf",&s0,&v0); 
	tmax = (v0+sqrt(v0*v0+2*GRAVITY*s0))/GRAVITY;
	while (1)
	{
		puts("�ð�");
		scanf("%lf",&t);
		if (t<tmax)	 
			s = s0 + v0*t - 0.5*GRAVITY*t*t;
		else
			break;
		printf("s(%.1f)=%.1f\n",t,s);
	}
	printf("���� ��ҽ��ϴ�.");
	return 0;
}

 
