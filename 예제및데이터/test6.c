// 파일 이름 : test6.c 
#include <stdio.h>

int main(void)
{
	int n = 0, i = 1;	// n=단, i=곱하기 할 수(1~9) 
	while(n<10) 
	{
		while(i<10)
		{
			printf("%d×%d=%d\n",n,i,n*i);
			i++;
		}
		n++;	// 단을 1단씩 올린다. 
		i=1;	// 곱하기를 다시 1부터 
		printf("---------------\n");
	}

	return 0;
}

 
