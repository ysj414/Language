#include<stdio.h>

/* 
 * structure align
 * #pragma pack(push, align size)
 * #pragma pack(pop)
 * __attribute__((aligned(size), packed)) under GCC 4.0
 */

#pragma pack(push,1)  // ordered by 1 byte size

struct PacketHeader
{
	char flags; // 1 byte
	int seq; //4 bytes
}

#pragma pack(pop) //reset order(default)

int main(void)
{

	printf("%d\n",sizeof(header.flags)); // 1
	printf("%d\n",sizeof(header.seq)); // 4
	printf("%d\n",sizeof(header)); // 5


	return 0;
}
