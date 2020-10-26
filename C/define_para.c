#include<stdio.h>

/* 
 * In Macro, # operator means it chracterize a parameter.
 * #define STRING(x) #x  == STRING("x")
 * ## operator combines each tokens.
 * #define X(n) x##n
 * X(1) == X(x1)
 */

#define PI (3.141592)
#define CIRCLE(x) ((x)*(x)*(PI))
#define STRING(x) #x
#define INT_X(n) int x##n=n
#define PRINT_X(n) printf("x#n=%d\n",x##n)

int main(void)
{
	INT_X(1);
	INT_X(2);
	INT_X(3);

	printf("radius 4's circile surface:%f\n",CIRCLE(4));
	printf("# operator ex:%s\n",STRING(abc));

	PRINT_X(1);
	PRINT_X(2);
	PRINT_X(3);


	return 0;
}
