// ���� �̸� : test7.c 
#include <stdio.h>

int main(void)
{
	int n = 0, i = 1;	// n=��, i=���ϱ� �� ��(1~9) 
	for (n=2; n<=9; n++)
	{
		for (i=1; i<=9 ; i++)
			printf("%d��%d=%d\n",n,i,n*i);
		printf("---------------\n");
	}

	return 0;
}

 
