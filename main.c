#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int tdd()
{

}

int main()
{
	printf("Hello World\n");
	int a=3, b=5;
	
	printf("%d + %d = %d\n",a,b,sum(a,b));
	return 0;
}
