// 파일 이름 : test15.c 
#include <stdio.h>
#include <string.h>

int main()
{
	double sum = 0, input;
	char str[100];	// 최대 100개의 문자를 저장가능 
	// 입력받은 것이 더이상 없을 때 까지 
	// 키보드 입력일 경우 [Ctrl]+Z입력할 때 까지 
	while(gets(str)!=NULL) 
	{
		// 문자열을 실수로 변환 
		sscanf(str, "%lf", &input);
		printf("%f\n",input);
		sum += input;
	}
	printf("%f",sum);
	return 0;
}


