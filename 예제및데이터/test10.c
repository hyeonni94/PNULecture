// 파일 이름 : test10.c 
#include <stdio.h>

typedef struct
{
	double x, y;
} Vector;

int main()
{
	Vector myvec1[] = {{5.0,3.0},{6.2,3.0}};
	printf("(x1,y1)=(%.2f,%.2f)\n",myvec1[0].x, myvec1[0].y);
	printf("(x2,y2)=(%.2f,%.2f)\n",myvec1[1].x, myvec1[1].y);

	Vector myvec2[3];
	myvec2[2].x = 7;
	myvec2[2].y = 5;
	printf("(x5,y5)=(%.2f,%.2f)\n",myvec2[2].x, myvec2[2].y);
	return 0;
}

