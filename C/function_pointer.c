#include<stdio.h>

/*
 * Function Pointer
 * Definition: type (*func_pointer name)(parameter t)
 * 
 */

void hello()   // no return value, no parameter 
{
	printf("Hello, world!\n");
}

void bonjour()
{
	printf("bonjour le monde!\n");
}

int add(int a, int b)
{
	return (a+b);
}

int mul(int a, int b)
{return (a*b);}


int main(void)
{
	void (*fp)(); 
	int (*fp1)(int, int);

	fp = hello;
	fp();

	fp = bonjour;
	fp();
	fp1 = add;
	printf("%d\n",fp1(10,20));
	fp1 = mul;
	printf("%d\n",fp1(10,20));

	return 0;
}
