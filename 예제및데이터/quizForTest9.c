// ���� �̸� : quizForTest9.c 
#include <stdio.h>

typedef struct
{
	double x, y;
} Vector;

Vector add(Vector vec);	// �� 
Vector smult(double a, Vecotr vec); // ��Į�� �� 
double innerPord(Vector vec1, Vector vec2); // ���� 

void printVector(Vector vec)
{
	printf("(x,y)=(%.2f,%.2f)", vec.x, vec.y);	
}

int main()
{
	Vector myvec1 = {5.0,3.0};
	Vector myvec2 = {4.0,2.0};
	// ���͸� ����ϰ� ����Ͽ� �׽�Ʈ 
	return 0;
}


