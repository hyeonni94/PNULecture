// ���� �̸� : test3.c 
#include <stdio.h>

int main(void)
{
	int a;
	puts("������ �Է��ϼ���");
	scanf("%d",&a);	

	if ((a>1) && (a<=5))
	{
		printf("1��%d��5\n",a);
	}
	else 
	{
		printf("a��%d or %d��5",a,a);
	}
	return 0;
}

 
