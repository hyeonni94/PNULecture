// ���� �̸� : test14.c 
#include <stdio.h>

// �Է¹��� ���� ���� ��� 
int main()
{
	double sum = 0, input;
	// �Է¹��� �μ��� ���� ���� �ƴ� ������ �ݺ�
	// Ű���� �Է½� �ݺ��� ���������� [Ctrl]+Z �Է� 
	while(scanf("%lf", &input) > 0) {
		sum += input;
	}
	printf("%f",sum);
	return 0;
}


