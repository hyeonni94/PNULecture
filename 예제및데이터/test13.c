#include <stdio.h>

void func(int* p, int num)
{
	int i;
	for (i=0; i<num; i++)
	{
		printf("%d %d\n",p[i],*(p+i));
	}
}

void main() 
{
	int array[] = {10,20,30,40,50,60,70};
	func(array, sizeof(array)/sizeof(int));
}




