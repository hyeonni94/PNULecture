// ���� �̸� : test15.c 
#include <stdio.h>
#include <string.h>

int main()
{
	double sum = 0, input;
	char str[100];	// �ִ� 100���� ���ڸ� ���尡�� 
	// �Է¹��� ���� ���̻� ���� �� ���� 
	// Ű���� �Է��� ��� [Ctrl]+Z�Է��� �� ���� 
	while(gets(str)!=NULL) 
	{
		// ���ڿ��� �Ǽ��� ��ȯ 
		sscanf(str, "%lf", &input);
		printf("%f\n",input);
		sum += input;
	}
	printf("%f",sum);
	return 0;
}


