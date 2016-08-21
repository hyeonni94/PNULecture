// 파일 이름 : test3.c 
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, s;
	puts("실수를 입력하세요");
	scanf("%lf",&a);	
	s = log(a);
	printf("log(%.2lf)=%.2g\n",a,s);
	s = sqrt(a);
	printf("sqrt(%.2lf)=%.2g\n",a,s);
	s = pow(a,10);
	printf("(%.2lf)^10=%.2g\n",a,s);
	s = sin(M_PI*a);
	printf("sin(%.2lfπ)=%.2g\n",a,s); // π는 'ㅎ'+[한자] 
	return 0;
}

 
