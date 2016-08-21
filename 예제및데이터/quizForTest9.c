// 파일 이름 : quizForTest9.c 
#include <stdio.h>

typedef struct
{
	double x, y;
} Vector;

Vector add(Vector vec);	// 합 
Vector smult(double a, Vecotr vec); // 스칼라 곱 
double innerPord(Vector vec1, Vector vec2); // 내적 

void printVector(Vector vec)
{
	printf("(x,y)=(%.2f,%.2f)", vec.x, vec.y);	
}

int main()
{
	Vector myvec1 = {5.0,3.0};
	Vector myvec2 = {4.0,2.0};
	// 벡터를 계산하고 출력하여 테스트 
	return 0;
}


