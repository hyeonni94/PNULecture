// ���� �̸� : exam2.c 
#include <stdio.h>

int main(void)
{
	
	double s0 = 0.0, v0 = 0.0, t = 0.0;	
	double s = 0.0;	// ���� ���� 
	puts("�ʱ���ġ �ʱ�ӵ� �ð� : ");
	scanf("%lf %lf %lf",&s0,&v0,&t); 
	s = s0 + v0*t - 0.5*9.8*t*t;
	printf("s(%.1f)=%.1f\n",t,s);
	return 0;
}

 
