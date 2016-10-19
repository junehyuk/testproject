#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	printf("Hello World");
	int a=3, b=5;
	printf("%d+%d = %d",a,b,sum(a,b));
	return 0;
}
