#include<stdio.h>
#include<stdlib.h>


struct test_a 
{
	int *a;
};

struct test_b
{
	struct test_a *ptr;
};


int main(void)
{
	struct test_b *temp = NULL;

	temp = (struct test_b *)malloc(sizeof(struct test_b));
	temp->ptr = NULL;

	if(!temp)
	{
		return -1;
	}

	if(!temp->ptr || !temp->ptr->a)
		printf("OR condition : temp->ptr is null, temp->ptr->a is not calculated\n");

	if(temp->ptr && temp->ptr->a){;}
	else
		printf("AND condition : temp->ptr is null, temp->ptr->a is not caclculated\n");

	free(temp);
	return 0;
}
