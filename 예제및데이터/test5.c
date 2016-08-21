// 파일 이름 : test5.c 
#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	char ch = '\0';
	while((ch=getch()) != 'z')
	{
		if (ch == 'a')
			--x;
		else if (ch == 'd')
			++x;
		else if (ch == 'w')
			++y;
		else if (ch == 's')
			--y;
		else if (ch == '\r')
			break;
		else
			continue;
		printf("x=%d, y=%d\n",x,y);
	}
	
	return 0;
}

 
