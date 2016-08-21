// 파일 이름 : test3.c 
#include <stdio.h>

int main(void)
{
	int a;
	puts("정수를 입력하세요");
	scanf("%d",&a);	

	if ((a>1) && (a<=5))
	{
		printf("1＜%d≤5\n",a);
	}
	else 
	{
		printf("a≤%d or %d＞5",a,a);
	}
	return 0;
}

 
