#include "UsefulHeap.h"
#include <stdio.h>
#include <string.h>


int DataPriorityComp(char *str1, char *str2)
{
	return (strlen(str2)-strlen(str1));
}

int main(void)
{
	Heap heap;
	char buf1[10] = "abcd";
	char buf2[15] = "abcdefg";
	char buf3[15] = "abcdefghijk";
	HeapInit(&heap, DataPriorityComp);

	HInsert(&heap, buf1);
	HInsert(&heap, buf2);
	HInsert(&heap, buf3);

	printf("%s \n", HDelete(&heap));

	HInsert(&heap, buf1);
	HInsert(&heap, buf2);
	HInsert(&heap, buf3);

	printf("%s \n", HDelete(&heap));

	while(!HIsEmpty(&heap))
		printf("%s \n", HDelete(&heap));

	return 0;
}
