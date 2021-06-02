#include <stdio.h>
#include "SimpleHeap.h"

int main(void)
{

	Heap heap;
	HeapInit(&heap);
	
	HInsert(&heap, 'A', 1);
	HInsert(&heap, 'B', 2);
	HInsert(&heap, 'C', 3);
	printf("1:%c \n", HDelete(&heap));

	HInsert(&heap, 'A', 1);
	HInsert(&heap, 'B', 2);
	HInsert(&heap, 'C', 3);
	printf("2:%c \n", HDelete(&heap));


	while(!HIsEmpty(&heap))
		printf("%c \n", HDelete(&heap));

	return 0;
}
