#include<stdio.h>
#include"c_std_lib/arpa_inet.h"



int main(void)
{
	uint16_t a = 0xABCD;
	uint16_t b = htons(a);

	printf("%4x\n",b);


	return 0;
}
