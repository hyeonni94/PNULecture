// ���� �̸� : exam1.c 
#include <stdio.h>

int main(void)
{
	
	double s0 = 5.0, v0 = 2.0, t = 1.0;	
	double s = 0.0;	// ���� ���� �ʱ�ȭ 
	s = s0 + v0*t - 0.5*9.8*t*t;
	printf("s(%.2f)=%.2f\n",t,s);
	return 0;
}


 
