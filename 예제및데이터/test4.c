// ���� �̸� : test3.c 
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, s;
	puts("�Ǽ��� �Է��ϼ���");
	scanf("%lf",&a);	
	s = log(a);
	printf("log(%.2lf)=%.2g\n",a,s);
	s = sqrt(a);
	printf("sqrt(%.2lf)=%.2g\n",a,s);
	s = pow(a,10);
	printf("(%.2lf)^10=%.2g\n",a,s);
	s = sin(M_PI*a);
	printf("sin(%.2lf��)=%.2g\n",a,s); // ��� '��'+[����] 
	return 0;
}

 
