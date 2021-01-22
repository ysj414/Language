#include<stdio.h>


#define SET_FLAG(V,F)	(V) = (V) | (F)
#define UNSET_FLAG(V,F)	(V) = (V) & ~(F)
#define CHECK_FLAG(V,F)	((V) & (F))


int main(void)
{
	__uint8_t a = 0xFF;
	
	SET_FLAG(a, 0<<4); // not working my intension
	printf("SET_FLAG: %d\n",a);
	UNSET_FLAG(a,0x80);
	printf("UNSET_FLAG: %d\n",a);
	if(CHECK_FLAG(a,0x70))
		printf("CHECK OK\n");
	
	return 0;
}
