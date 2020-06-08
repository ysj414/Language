#include<stdio.h>
#include<stdlib.h>

void test()
{
	printf("malloc start\n");
}
int main(void)
{

	int *a;

	a=malloc(sizeof(int));
	printf("%p\n",a);
	test();

	printf("%p\n",a);
	free(a);
	printf("%p\n",a);

	return 0;
}

