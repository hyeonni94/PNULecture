// 파일 이름 : test2.c 
#include <stdio.h>

int main(void)
{
	
	int a, b;
	int c = 0; 
	scanf("%d %d",&a,&b);	// 공백 단위로 끊어서 정수 읽기 
	c = (a+b)^2;	 
	printf("(%d+%d)^2=%d\n",a,b,c);
	return 0;
}

 
