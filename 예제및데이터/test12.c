// 파일 이름 : test12.c 
#include <stdio.h>
typedef struct 
{
	int x;
	int y;	
} Point;

void func(Point* pt)
{
	printf("(%d,%d)\n", pt->x, pt->y);
}

void main() 
{
	Point p1 = {5,5};
	func(&p1);
}


