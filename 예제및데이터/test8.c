// 파일 이름 : test8.c 
#include <stdio.h>

int myfunc1(int a)
{
	return a*a;
}

int myfunc2(int a, int b)
{
	return a+b;
}

int main()
{
	int i = 1, j = 2;
	int p, q;
	printf("i^2=%d\n",myfunc1(i));
	printf("i+j=%d\n",myfunc2(i,j));
	return 0;
}


