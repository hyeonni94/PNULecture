// 파일 이름 : test9.c 
#include <stdio.h>

typedef struct
{
	double x, y;
} Vector;

int main()
{
	Vector myvec = {5.0,3.0};
	myvec.y = 7;
	printf("(x,y)=(%.2f,%.2f)",myvec.x, myvec.y);
	return 0;
}

