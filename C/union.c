#include<stdio.h>
#include<string.h>
/*
 * union UNION_NAME {
 *       type member_name;
 *       };
 * This is definition of union.
 * Like Structure, Union can't use by defining it.
 * Therefore, Union also uses by declaring a variable.
 *
 * union UNION_NAME var_name;
 * 
 * Union shares the biggest memory in its members. 
 * Once a member variable is saved a value, other members can't use 
 * memory.
 * So, we can use all of members when we assign a value once  at a time.
 *
 * In summary, When system doesn't need to access several members, 
 * it is advantegeous to use Union because it arrange size with biggest memmory in its members.
 * it is frequently used in embedded system or divice driver on kernel mode. So, in normal case,
 * it is not used.
 */

union Box {
        short candy;
        float snack;
        char doll[8];
};
int main(void)
{
        union Box b1;

        printf("Sizeof union: %d\n", sizeof(b1));
		strcpy(b1.doll, "bear");

		printf("%d\n", b1.candy);
		printf("%f\n", b1.snack);
		printf("%s\n", b1.doll);


        return 0;

}
