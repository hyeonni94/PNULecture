// ���� �̸� : test6.c 
#include <stdio.h>

int main(void)
{
	int n = 0, i = 1;	// n=��, i=���ϱ� �� ��(1~9) 
	while(n<10) 
	{
		while(i<10)
		{
			printf("%d��%d=%d\n",n,i,n*i);
			i++;
		}
		n++;	// ���� 1�ܾ� �ø���. 
		i=1;	// ���ϱ⸦ �ٽ� 1���� 
		printf("---------------\n");
	}

	return 0;
}

 
