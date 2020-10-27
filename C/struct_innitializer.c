#include<stdio.h>

/* Sometimes, I have met .varname in structure.
 * I knew that variable's name can't use special character like ".".
 * However, In C99 Standard, special character can be used as initializing member variable.
 * Let's See following example.
 * In sum, I saw many times that expression in Linux Kernel source.
 */ 

struct test
{
	int a;
	int b;
	char str;
	char buf[100];
	float t;
};

struct test t=
{
	.a=1,
	.b=2,
	.str='A',
	.buf="Hello",
	.t=10.00
};


int main(void)
{

	printf("t.a:%d\n",t.a);
	printf("t.b:%d\n",t.b);
	printf("t.str:%c\n",t.str);
	printf("t.buf:%s\n",t.buf);
	printf("t.t:%f\n",t.t);

	return 0;
}
