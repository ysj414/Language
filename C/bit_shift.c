#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

void printbinary(uint32_t num);
int main(void)
{
	uint32_t ip=0xC0A874FF;
	uint32_t vr=17;
//	uint32_t ip=0xFFFFFFFE;
	printf("original number: %d\n",ip);
	printbinary(ip);
	
	ip&=~(0xFF<<8);
	ip=ip|vr<<8;
	printbinary(ip);
//	printbinary(ip<<5);


	return 0;
}

void printbinary(uint32_t num)
{
	int i;
	int mask;
	for(i=31;i>=0;i--)
	{
		mask=1<<i;
		printf("%d",num&mask?1:0);
		if(i%8==0)
			printf(" ");

	}
	printf("\n");
}
