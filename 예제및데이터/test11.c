// 파일 이름 : test11.c 
#include <stdio.h>

void func(int *p_n)
{
	*p_n = 20;
}

void main() 
{
	int n = 10;
	func(&n);
	printf("%d",n);
}


