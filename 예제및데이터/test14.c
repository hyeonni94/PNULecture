// 파일 이름 : test14.c 
#include <stdio.h>

// 입력받은 수의 합을 계산 
int main()
{
	double sum = 0, input;
	// 입력받은 인수의 값이 수가 아닐 때까지 반복
	// 키보드 입력시 반복을 끝내기위해 [Ctrl]+Z 입력 
	while(scanf("%lf", &input) > 0) {
		sum += input;
	}
	printf("%f",sum);
	return 0;
}


