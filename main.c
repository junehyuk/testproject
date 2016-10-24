#include<stdio.h>
#include "abcd.h"
//test
//자동으로 추가:ㅈㅂ
int sum(int a, int b)
{
	return a+b;
}

int main()
{
	printf("Hello World\n");
	int a=3, b=5;
	abcd();
	printf("%d + %d = %d\n",a,b,sum(a,b));
	return 0;
}
